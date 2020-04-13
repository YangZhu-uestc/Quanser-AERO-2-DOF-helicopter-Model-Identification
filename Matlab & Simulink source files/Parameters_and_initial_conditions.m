%% Quanser Aero Parameters
% Moment of Inertia of helicopter body (kg-m^2)
L_body = 6.5*0.0254; % length of horizontal body (metal tube)
m_body = 0.094; % mass of horizontal body (metal tube) 
J_body = m_body * L_body^2 / 12; % horizontal cylinder rotating about CM
% 
% Moment of Inertia of yoke fork that rotates about yaw axis (kg-m^2)
m_yoke = 0.526; % mass of entire yoke assembly (kg)
% h_yoke = 9*0.0254; % height of yoke assembly (m)
r_fork = 0.04/2; % radius of each fork (approximated as cylinder)
J_yoke = 0.5*m_yoke*r_fork^2;
% 
% Moment of Inertia from motor + guard assembly about pivot (kg-m^2)
m_prop = 0.43; % mass of dc motor + shield + propeller shield
% m_motor = 0.203; % mass of dc motor
r_prop = 6.25*0.0254; % distance from CM to center of pitch axis
J_prop = m_prop * r_prop^2; % using parallel axis theorem
% 
% Equivalent Moment of Inertia about Pitch and Yaw Axis (kg-m^2)
Jp = J_body + 2*J_prop; % pitch: body and 2 props
Jy = J_body + 2*J_prop + J_yoke; % yaw: body, 2 props, and yoke
%
% Thrust-torque constant (N-m/V) [found experimentally]
Kpp = 0.0011; % (pre-production unit: 0.0015)
Kyy = 0.0022; % (pre-production unit: 0.0040)
Kpy = 0.0021; % thrust acting on pitch from yaw (pre-production unit: 0.0020)
Kyp = -0.0027; % thrust acting on yaw from pitch (pre-production unit: -0.0017)
% 
% Stiffness (N-m/rad)[found experimentally] 
Ksp = 0.037463;
% 
% Viscous damping (N-m-s/rad) [found experimentally]
Dp = 0.0071116; % pitch axis (pre-production unit: Dp = 0.0226) 
Dy = 0.0220; % yaw axis (pre-production unit: Dy = 0.0211)


%% Model Identification
% new system parameters identified from experiment
% Enlarge Dp: larger difference between two peaks, phase shift to the left
% Enlarge Ksp: larger frequency, smaller period between two peaks
% Enlarge Kpp: smaller steady-state response (smaller final value)

% identified results around the equilibrium point theta_e = 0.2 rad
Ksp = 0.09;
Kpp = 10.9e-04;
Dp = 0.0056; 

% more identification are needed for other equilibrium points


%% state-space matrices
% x =[theta;psi;theta_dot;psi_dot]
A = [0 0 1 0;
    0 0 0 1;
    -Ksp/Jp 0 -Dp/Jp 0;
    0 0 0 -Dy/Jy];
B = [0 0;
    0 0;
    Kpp/Jp Kpy/Jp;
    Kyp/Jy Kyy/Jy];
C = eye(2,4);
D = zeros(2,2);
% state-space matrices for pitch channel (yaw locked, yaw motor disabled)
% xp =[theta;theta_dot] Vy==0  yp=[theta;theta_dot]  u=taop
A_p = [0 1;
    -Ksp/Jp -Dp/Jp];
B_p = [0;
    1/Jp];
C_p = [1 0;0 1];
D_p = [0;0];


%% Channel selection
% yaw locked, yaw motor disabled
PitchMotorEnable = 1;
PitchAxisEnable = 1;
YawMotorEnable = 0;
YawAxisEnable = 0;


%% Initial conditions
theta_initial = 0.0;   %in rad
theta_dot_initial = 0.0;
psi_initial = 0.0;    %in rad
psi_dot_initial = 0.0;
