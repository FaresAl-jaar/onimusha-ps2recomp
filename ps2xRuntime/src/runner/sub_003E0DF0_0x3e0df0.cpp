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

// Function: sub_003E0DF0
// Address: 0x3e0df0 - 0x3e0e90
void sub_003E0DF0_0x3e0df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0DF0_0x3e0df0");
#endif

    switch (ctx->pc) {
        case 0x3e0e18u: goto label_3e0e18;
        case 0x3e0e3cu: goto label_3e0e3c;
        case 0x3e0e68u: goto label_3e0e68;
        case 0x3e0e70u: goto label_3e0e70;
        case 0x3e0e80u: goto label_3e0e80;
        default: break;
    }

    ctx->pc = 0x3e0df0u;

    // 0x3e0df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e0df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e0df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e0df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e0df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e0df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e0dfc: 0x78820040  lq          $v0, 0x40($a0)
    ctx->pc = 0x3e0dfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x3e0e00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e0e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0e04: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x3e0e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x3e0e08: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x3e0e08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
    // 0x3e0e0c: 0x8c8400b0  lw          $a0, 0xB0($a0)
    ctx->pc = 0x3e0e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x3e0e10: 0xc07ba50  jal         func_1EE940
    ctx->pc = 0x3E0E10u;
    SET_GPR_U32(ctx, 31, 0x3E0E18u);
    ctx->pc = 0x3E0E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0E10u;
    // 0x3e0e14: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE940u, 0x3E0E10u, 0x3E0E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0E18u;
label_3e0e18:
    // 0x3e0e18: 0xc60100b8  lwc1        $f1, 0xB8($s0)
    ctx->pc = 0x3e0e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e0e1c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x3e0e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x3e0e20: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x3e0e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0e24: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3e0e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3e0e28: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3e0e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3e0e2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3e0e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3e0e30: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x3e0e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x3e0e34: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x3E0E34u;
    SET_GPR_U32(ctx, 31, 0x3E0E3Cu);
    ctx->pc = 0x3E0E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0E34u;
    // 0x3e0e38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x3E0E34u, 0x3E0E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0E3Cu;
label_3e0e3c:
    // 0x3e0e3c: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x3e0e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x3e0e40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e0e40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3e0e44: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3e0e44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e0e48: 0x0  nop
    ctx->pc = 0x3e0e48u;
    // NOP
    // 0x3e0e4c: 0xa602006a  sh          $v0, 0x6A($s0)
    ctx->pc = 0x3e0e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e0e50: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x3e0e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3e0e54: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3e0e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3e0e58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E0E58u;
    {
        const bool branch_taken_0x3e0e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0e58) {
            ctx->pc = 0x3E0E68u;
            goto label_3e0e68;
        }
    }
    ctx->pc = 0x3E0E60u;
    // 0x3e0e60: 0xc07bc24  jal         func_1EF090
    ctx->pc = 0x3E0E60u;
    SET_GPR_U32(ctx, 31, 0x3E0E68u);
    ctx->pc = 0x3E0E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0E60u;
    // 0x3e0e64: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF090u, 0x3E0E60u, 0x3E0E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0E68u;
label_3e0e68:
    // 0x3e0e68: 0xc07bc10  jal         func_1EF040
    ctx->pc = 0x3E0E68u;
    SET_GPR_U32(ctx, 31, 0x3E0E70u);
    ctx->pc = 0x3E0E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0E68u;
    // 0x3e0e6c: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF040u, 0x3E0E68u, 0x3E0E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0E70u;
label_3e0e70:
    // 0x3e0e70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E0E70u;
    {
        const bool branch_taken_0x3e0e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E70u;
        // 0x3e0e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0e70) {
            ctx->pc = 0x3E0E80u;
            goto label_3e0e80;
        }
    }
    ctx->pc = 0x3E0E78u;
    // 0x3e0e78: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x3E0E78u;
    SET_GPR_U32(ctx, 31, 0x3E0E80u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x3E0E78u, 0x3E0E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0E80u;
label_3e0e80:
    // 0x3e0e80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e0e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e0e84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e0e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e0e88: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E88u;
        // 0x3e0e8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0E90u;
}
