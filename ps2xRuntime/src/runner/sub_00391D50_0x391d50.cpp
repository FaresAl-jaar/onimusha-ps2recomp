#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00391D50
// Address: 0x391d50 - 0x391eb4
void sub_00391D50_0x391d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391D50_0x391d50");
#endif

    switch (ctx->pc) {
        case 0x391d80u: goto label_391d80;
        case 0x391d8cu: goto label_391d8c;
        case 0x391e1cu: goto label_391e1c;
        case 0x391e48u: goto label_391e48;
        case 0x391e7cu: goto label_391e7c;
        case 0x391e9cu: goto label_391e9c;
        default: break;
    }

    ctx->pc = 0x391d50u;

    // 0x391d50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x391d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x391d54: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x391d54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x391d58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x391d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x391d5c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x391d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x391d60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x391d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x391d64: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x391d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x391d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x391d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x391d6c: 0x24e7c7c0  addiu       $a3, $a3, -0x3840
    ctx->pc = 0x391d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952896));
    // 0x391d70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x391d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x391d74: 0x80890332  lb          $t1, 0x332($a0)
    ctx->pc = 0x391d74u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 818)));
    // 0x391d78: 0xc0dc390  jal         func_370E40
    ctx->pc = 0x391D78u;
    SET_GPR_U32(ctx, 31, 0x391D80u);
    ctx->pc = 0x391D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391D78u;
    // 0x391d7c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370E40u, 0x391D78u, 0x391D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391D80u;
label_391d80:
    // 0x391d80: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x391d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x391d84: 0xc0e4870  jal         func_3921C0
    ctx->pc = 0x391D84u;
    SET_GPR_U32(ctx, 31, 0x391D8Cu);
    ctx->pc = 0x391D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391D84u;
    // 0x391d88: 0x24843090  addiu       $a0, $a0, 0x3090 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3921C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3921C0u, 0x391D84u, 0x391D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391D8Cu;
label_391d8c:
    // 0x391d8c: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x391d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x391d90: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x391d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x391d94: 0xc42130a0  lwc1        $f1, 0x30A0($at)
    ctx->pc = 0x391d94u;
    { uint32_t bits = FAST_READ32(0x9230A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x391d98: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x391d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x391d9c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x391d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x391da0: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x391da0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x391da4: 0x27b0004a  addiu       $s0, $sp, 0x4A
    ctx->pc = 0x391da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 74));
    // 0x391da8: 0x24050166  addiu       $a1, $zero, 0x166
    ctx->pc = 0x391da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x391dac: 0x24020154  addiu       $v0, $zero, 0x154
    ctx->pc = 0x391dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x391db0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x391db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x391db4: 0xa7a20048  sh          $v0, 0x48($sp)
    ctx->pc = 0x391db4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x391db8: 0x27b1004f  addiu       $s1, $sp, 0x4F
    ctx->pc = 0x391db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 79));
    // 0x391dbc: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x391dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x391dc0: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x391dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x391dc4: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x391dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x391dc8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x391dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x391dcc: 0xc420309c  lwc1        $f0, 0x309C($at)
    ctx->pc = 0x391dccu;
    { uint32_t bits = FAST_READ32(0x92309Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x391dd0: 0x24e72230  addiu       $a3, $a3, 0x2230
    ctx->pc = 0x391dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8752));
    // 0x391dd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x391dd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x391dd8: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x391dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x391ddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x391ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x391de0: 0xa3a2004e  sb          $v0, 0x4E($sp)
    ctx->pc = 0x391de0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x391de4: 0xa3a6004d  sb          $a2, 0x4D($sp)
    ctx->pc = 0x391de4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 6));
    // 0x391de8: 0x3c020104  lui         $v0, 0x104
    ctx->pc = 0x391de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)260 << 16));
    // 0x391dec: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x391decu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x391df0: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x391df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x391df4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x391df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x391df8: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x391df8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x391dfc: 0x34480035  ori         $t0, $v0, 0x35
    ctx->pc = 0x391dfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53);
    // 0x391e00: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x391e00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x391e04: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x391e04u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x391e08: 0x0  nop
    ctx->pc = 0x391e08u;
    // NOP
    // 0x391e0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x391e0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x391e10: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x391e10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x391e14: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x391E14u;
    SET_GPR_U32(ctx, 31, 0x391E1Cu);
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x391E14u, 0x391E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391E1Cu;
label_391e1c:
    // 0x391e1c: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x391e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x391e20: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x391e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x391e24: 0x8c2830a0  lw          $t0, 0x30A0($at)
    ctx->pc = 0x391e24u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x9230A0u));
    // 0x391e28: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x391e28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x391e2c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x391e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x391e30: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x391e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x391e34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x391e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391e38: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x391e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x391e3c: 0x8c29309c  lw          $t1, 0x309C($at)
    ctx->pc = 0x391e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x92309Cu));
    // 0x391e40: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x391E40u;
    SET_GPR_U32(ctx, 31, 0x391E48u);
    ctx->pc = 0x391E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391E40u;
    // 0x391e44: 0x24e72238  addiu       $a3, $a3, 0x2238 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x391E40u, 0x391E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391E48u;
label_391e48:
    // 0x391e48: 0x92290000  lbu         $t1, 0x0($s1)
    ctx->pc = 0x391e48u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x391e4c: 0x3c020104  lui         $v0, 0x104
    ctx->pc = 0x391e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)260 << 16));
    // 0x391e50: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x391e50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x391e54: 0x34480036  ori         $t0, $v0, 0x36
    ctx->pc = 0x391e54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54);
    // 0x391e58: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x391e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x391e5c: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x391e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x391e60: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x391e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x391e64: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x391e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x391e68: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x391e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x391e6c: 0x24e72230  addiu       $a3, $a3, 0x2230
    ctx->pc = 0x391e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8752));
    // 0x391e70: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x391e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x391e74: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x391E74u;
    SET_GPR_U32(ctx, 31, 0x391E7Cu);
    ctx->pc = 0x391E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391E74u;
    // 0x391e78: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x391E74u, 0x391E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391E7Cu;
label_391e7c:
    // 0x391e7c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x391e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x391e80: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x391e80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x391e84: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x391e84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391e88: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x391e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x391e8c: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x391e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x391e90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x391e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391e94: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x391E94u;
    SET_GPR_U32(ctx, 31, 0x391E9Cu);
    ctx->pc = 0x391E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391E94u;
    // 0x391e98: 0x24e72248  addiu       $a3, $a3, 0x2248 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x391E94u, 0x391E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391E9Cu;
label_391e9c:
    // 0x391e9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x391e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x391ea0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x391ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x391ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x391ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x391ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x391ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x391eac: 0x3e00008  jr          $ra
    ctx->pc = 0x391EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EACu;
        // 0x391eb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391EB4u;
}
