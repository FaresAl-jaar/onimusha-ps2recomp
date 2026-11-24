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

// Function: sub_00119F50
// Address: 0x119f50 - 0x119ff8
void sub_00119F50_0x119f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119F50_0x119f50");
#endif

    switch (ctx->pc) {
        case 0x119f74u: goto label_119f74;
        case 0x119fa0u: goto label_119fa0;
        case 0x119fb8u: goto label_119fb8;
        case 0x119fdcu: goto label_119fdc;
        default: break;
    }

    ctx->pc = 0x119f50u;

    // 0x119f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x119f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119f58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x119f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119f60: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x119f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x119f64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119f68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x119f6c: 0xc046028  jal         func_1180A0
    ctx->pc = 0x119F6Cu;
    SET_GPR_U32(ctx, 31, 0x119F74u);
    ctx->pc = 0x119F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F6Cu;
    // 0x119f70: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x119F6Cu, 0x119F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F74u;
label_119f74:
    // 0x119f74: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x119F74u;
    {
        const bool branch_taken_0x119f74 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x119F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F74u;
        // 0x119f78: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f74) {
            ctx->pc = 0x119F90u;
            goto label_119f90;
        }
    }
    ctx->pc = 0x119F7Cu;
    // 0x119f7c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x119f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x119f80: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x119f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x119f84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x119f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x119f88: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x119F88u;
    {
        const bool branch_taken_0x119f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119f88) {
            ctx->pc = 0x119FACu;
            goto label_119fac;
        }
    }
    ctx->pc = 0x119F90u;
label_119f90:
    // 0x119f90: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x119F90u;
    {
        const bool branch_taken_0x119f90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x119f90) {
            ctx->pc = 0x119FA0u;
            goto label_119fa0;
        }
    }
    ctx->pc = 0x119F98u;
    // 0x119f98: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x119F98u;
    SET_GPR_U32(ctx, 31, 0x119FA0u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x119F98u, 0x119FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FA0u;
label_119fa0:
    // 0x119fa0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119fa4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x119FA4u;
    {
        const bool branch_taken_0x119fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FA4u;
        // 0x119fa8: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fa4) {
            ctx->pc = 0x119FE0u;
            goto label_119fe0;
        }
    }
    ctx->pc = 0x119FACu;
label_119fac:
    // 0x119fac: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x119facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x119fb0: 0xc046508  jal         func_119420
    ctx->pc = 0x119FB0u;
    SET_GPR_U32(ctx, 31, 0x119FB8u);
    ctx->pc = 0x119420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119420u, 0x119FB0u, 0x119FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FB8u;
label_119fb8:
    // 0x119fb8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x119fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x119fbc: 0x8c623f40  lw          $v0, 0x3F40($v1)
    ctx->pc = 0x119fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x693F40u));
    // 0x119fc0: 0xac713f40  sw          $s1, 0x3F40($v1)
    ctx->pc = 0x119fc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x693F40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x693F40u, _value); } while (0);
    // 0x119fc4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x119fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x119fc8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x119fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x119fcc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x119FCCu;
    {
        const bool branch_taken_0x119fcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FCCu;
        // 0x119fd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fcc) {
            ctx->pc = 0x119FE0u;
            goto label_119fe0;
        }
    }
    ctx->pc = 0x119FD4u;
    // 0x119fd4: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x119FD4u;
    SET_GPR_U32(ctx, 31, 0x119FDCu);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x119FD4u, 0x119FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FDCu;
label_119fdc:
    // 0x119fdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x119fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119fe0:
    // 0x119fe0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119fe4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119fe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119fe8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119fec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x119FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FF0u;
        // 0x119ff4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119FF8u;
}
