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

// Function: sub_003BFBC0
// Address: 0x3bfbc0 - 0x3bfc7c
void sub_003BFBC0_0x3bfbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFBC0_0x3bfbc0");
#endif

    switch (ctx->pc) {
        case 0x3bfbdcu: goto label_3bfbdc;
        case 0x3bfc38u: goto label_3bfc38;
        case 0x3bfc50u: goto label_3bfc50;
        case 0x3bfc5cu: goto label_3bfc5c;
        default: break;
    }

    ctx->pc = 0x3bfbc0u;

    // 0x3bfbc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bfbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3bfbc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bfbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bfbc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bfbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bfbcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bfbccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfbd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bfbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bfbd4: 0xc041040  jal         func_104100
    ctx->pc = 0x3BFBD4u;
    SET_GPR_U32(ctx, 31, 0x3BFBDCu);
    ctx->pc = 0x3BFBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFBD4u;
    // 0x3bfbd8: 0x3404ff00  ori         $a0, $zero, 0xFF00 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104100u, 0x3BFBD4u, 0x3BFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFBDCu;
label_3bfbdc:
    // 0x3bfbdc: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x3bfbdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3bfbe0: 0x1620001b  bnez        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3BFBE0u;
    {
        const bool branch_taken_0x3bfbe0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFBE0u;
        // 0x3bfbe4: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfbe0) {
            ctx->pc = 0x3BFC50u;
            goto label_3bfc50;
        }
    }
    ctx->pc = 0x3BFBE8u;
    // 0x3bfbe8: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x3bfbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x3bfbec: 0xdc221000  ld          $v0, 0x1000($at)
    ctx->pc = 0x3bfbecu;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x3bfbf0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3bfbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3bfbf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BFBF4u;
    {
        const bool branch_taken_0x3bfbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFBF4u;
        // 0x3bfbf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfbf4) {
            ctx->pc = 0x3BFC08u;
            goto label_3bfc08;
        }
    }
    ctx->pc = 0x3BFBFCu;
    // 0x3bfbfc: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x3bfbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x3bfc00: 0xfc221000  sd          $v0, 0x1000($at)
    ctx->pc = 0x3bfc00u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 2));
    // 0x3bfc04: 0x0  nop
    ctx->pc = 0x3bfc04u;
    // NOP
label_3bfc08:
    // 0x3bfc08: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x3bfc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x3bfc0c: 0xdc221000  ld          $v0, 0x1000($at)
    ctx->pc = 0x3bfc0cu;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x3bfc10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3bfc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3bfc14: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3BFC14u;
    {
        const bool branch_taken_0x3bfc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFC14u;
        // 0x3bfc18: 0x3c011200  lui         $at, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfc14) {
            ctx->pc = 0x3BFC50u;
            goto label_3bfc50;
        }
    }
    ctx->pc = 0x3BFC1Cu;
    // 0x3bfc1c: 0x8c231080  lw          $v1, 0x1080($at)
    ctx->pc = 0x3bfc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4224))); // MMIO: 0x12001080
    // 0x3bfc20: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x3bfc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x3bfc24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BFC24u;
    {
        const bool branch_taken_0x3bfc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFC24u;
        // 0x3bfc28: 0x3c040093  lui         $a0, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfc24) {
            ctx->pc = 0x3BFC38u;
            goto label_3bfc38;
        }
    }
    ctx->pc = 0x3BFC2Cu;
    // 0x3bfc2c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x3bfc2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3bfc30: 0xc0eff20  jal         func_3BFC80
    ctx->pc = 0x3BFC30u;
    SET_GPR_U32(ctx, 31, 0x3BFC38u);
    ctx->pc = 0x3BFC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFC30u;
    // 0x3bfc34: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC80u, 0x3BFC30u, 0x3BFC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFC38u;
label_3bfc38:
    // 0x3bfc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bfc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bfc3c: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x3bfc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x3bfc40: 0xfc221000  sd          $v0, 0x1000($at)
    ctx->pc = 0x3bfc40u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 2));
    // 0x3bfc44: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x3bfc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x3bfc48: 0xc041040  jal         func_104100
    ctx->pc = 0x3BFC48u;
    SET_GPR_U32(ctx, 31, 0x3BFC50u);
    ctx->pc = 0x3BFC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFC48u;
    // 0x3bfc4c: 0x70022389  pcpyld      $a0, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104100u, 0x3BFC48u, 0x3BFC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFC50u;
label_3bfc50:
    // 0x3bfc50: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x3bfc50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3bfc54: 0xc041040  jal         func_104100
    ctx->pc = 0x3BFC54u;
    SET_GPR_U32(ctx, 31, 0x3BFC5Cu);
    ctx->pc = 0x3BFC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFC54u;
    // 0x3bfc58: 0x4203e  dsrl32      $a0, $a0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104100u, 0x3BFC54u, 0x3BFC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFC5Cu;
label_3bfc5c:
    // 0x3bfc5c: 0xf  sync
    ctx->pc = 0x3bfc5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3bfc60: 0x42000038  ei
    ctx->pc = 0x3bfc60u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3bfc64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bfc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bfc68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bfc68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfc6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bfc6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bfc70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bfc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bfc74: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFC74u;
        // 0x3bfc78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BFC7Cu;
}
