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

// Function: sub_002ED560
// Address: 0x2ed560 - 0x2ed614
void sub_002ED560_0x2ed560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED560_0x2ed560");
#endif

    switch (ctx->pc) {
        case 0x2ed5b4u: goto label_2ed5b4;
        case 0x2ed5dcu: goto label_2ed5dc;
        case 0x2ed604u: goto label_2ed604;
        default: break;
    }

    ctx->pc = 0x2ed560u;

    // 0x2ed560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed564: 0x10c00028  beqz        $a2, . + 4 + (0x28 << 2)
    ctx->pc = 0x2ED564u;
    {
        const bool branch_taken_0x2ed564 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED564u;
        // 0x2ed568: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed564) {
            ctx->pc = 0x2ED608u;
            goto label_2ed608;
        }
    }
    ctx->pc = 0x2ED56Cu;
    // 0x2ed56c: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x2ed56cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed570: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ed570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed574: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2ED574u;
    {
        const bool branch_taken_0x2ed574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ED578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED574u;
        // 0x2ed578: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed574) {
            ctx->pc = 0x2ED5E8u;
            goto label_2ed5e8;
        }
    }
    ctx->pc = 0x2ED57Cu;
    // 0x2ed57c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ED57Cu;
    {
        const bool branch_taken_0x2ed57c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ed57c) {
            ctx->pc = 0x2ED5C0u;
            goto label_2ed5c0;
        }
    }
    ctx->pc = 0x2ED584u;
    // 0x2ed584: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED584u;
    {
        const bool branch_taken_0x2ed584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed584) {
            ctx->pc = 0x2ED598u;
            goto label_2ed598;
        }
    }
    ctx->pc = 0x2ED58Cu;
    // 0x2ed58c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2ED58Cu;
    {
        const bool branch_taken_0x2ed58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed58c) {
            ctx->pc = 0x2ED608u;
            goto label_2ed608;
        }
    }
    ctx->pc = 0x2ED594u;
    // 0x2ed594: 0x0  nop
    ctx->pc = 0x2ed594u;
    // NOP
label_2ed598:
    // 0x2ed598: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2ed598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2ed59c: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x2ed59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x2ed5a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5a4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2ed5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ed5a8: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2ed5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2ed5ac: 0xc052214  jal         func_148850
    ctx->pc = 0x2ED5ACu;
    SET_GPR_U32(ctx, 31, 0x2ED5B4u);
    ctx->pc = 0x2ED5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED5ACu;
    // 0x2ed5b0: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x2ED5ACu, 0x2ED5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED5B4u;
label_2ed5b4:
    // 0x2ed5b4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2ED5B4u;
    {
        const bool branch_taken_0x2ed5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed5b4) {
            ctx->pc = 0x2ED608u;
            goto label_2ed608;
        }
    }
    ctx->pc = 0x2ED5BCu;
    // 0x2ed5bc: 0x0  nop
    ctx->pc = 0x2ed5bcu;
    // NOP
label_2ed5c0:
    // 0x2ed5c0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2ed5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2ed5c4: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x2ed5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x2ed5c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5cc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2ed5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ed5d0: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x2ed5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2ed5d4: 0xc052214  jal         func_148850
    ctx->pc = 0x2ED5D4u;
    SET_GPR_U32(ctx, 31, 0x2ED5DCu);
    ctx->pc = 0x2ED5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED5D4u;
    // 0x2ed5d8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x2ED5D4u, 0x2ED5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED5DCu;
label_2ed5dc:
    // 0x2ed5dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2ED5DCu;
    {
        const bool branch_taken_0x2ed5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed5dc) {
            ctx->pc = 0x2ED608u;
            goto label_2ed608;
        }
    }
    ctx->pc = 0x2ED5E4u;
    // 0x2ed5e4: 0x0  nop
    ctx->pc = 0x2ed5e4u;
    // NOP
label_2ed5e8:
    // 0x2ed5e8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2ed5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2ed5ec: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x2ed5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x2ed5f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5f4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2ed5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2ed5f8: 0x24070f00  addiu       $a3, $zero, 0xF00
    ctx->pc = 0x2ed5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x2ed5fc: 0xc052214  jal         func_148850
    ctx->pc = 0x2ED5FCu;
    SET_GPR_U32(ctx, 31, 0x2ED604u);
    ctx->pc = 0x2ED600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED5FCu;
    // 0x2ed600: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x2ED5FCu, 0x2ED604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED604u;
label_2ed604:
    // 0x2ed604: 0x0  nop
    ctx->pc = 0x2ed604u;
    // NOP
label_2ed608:
    // 0x2ed608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed60c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED60Cu;
        // 0x2ed610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED614u;
}
