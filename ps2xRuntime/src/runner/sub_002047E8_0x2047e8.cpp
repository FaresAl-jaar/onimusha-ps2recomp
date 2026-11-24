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

// Function: sub_002047E8
// Address: 0x2047e8 - 0x204850
void sub_002047E8_0x2047e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002047E8_0x2047e8");
#endif

    switch (ctx->pc) {
        case 0x20483cu: goto label_20483c;
        default: break;
    }

    ctx->pc = 0x2047e8u;

    // 0x2047e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2047e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2047ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2047ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2047f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2047f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2047f4: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x2047f4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2047f8: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2047F8u;
    {
        const bool branch_taken_0x2047f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2047FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047F8u;
        // 0x2047fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047f8) {
            ctx->pc = 0x204840u;
            goto label_204840;
        }
    }
    ctx->pc = 0x204800u;
    // 0x204800: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x204800u;
    {
        const bool branch_taken_0x204800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x204800) {
            ctx->pc = 0x204804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204800u;
            // 0x204804: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204818u;
            goto label_204818;
        }
    }
    ctx->pc = 0x204808u;
    // 0x204808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20480c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20480Cu;
    {
        const bool branch_taken_0x20480c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20480Cu;
        // 0x204810: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20480c) {
            ctx->pc = 0x204828u;
            goto label_204828;
        }
    }
    ctx->pc = 0x204814u;
    // 0x204814: 0x0  nop
    ctx->pc = 0x204814u;
    // NOP
label_204818:
    // 0x204818: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x204818u;
    {
        const bool branch_taken_0x204818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204818u;
        // 0x20481c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204818) {
            ctx->pc = 0x204840u;
            goto label_204840;
        }
    }
    ctx->pc = 0x204820u;
    // 0x204820: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x204820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204824: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x204824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_204828:
    // 0x204828: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204828u;
    {
        const bool branch_taken_0x204828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204828u;
        // 0x20482c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204828) {
            ctx->pc = 0x204844u;
            goto label_204844;
        }
    }
    ctx->pc = 0x204830u;
    // 0x204830: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x204830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x204834: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x204834u;
    SET_GPR_U32(ctx, 31, 0x20483Cu);
    ctx->pc = 0x204838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204834u;
    // 0x204838: 0x24846be0  addiu       $a0, $a0, 0x6BE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x204834u, 0x20483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20483Cu;
label_20483c:
    // 0x20483c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20483cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204840:
    // 0x204840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204844:
    // 0x204844: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x204844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204848: 0x3e00008  jr          $ra
    ctx->pc = 0x204848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204848u;
        // 0x20484c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204850u;
}
