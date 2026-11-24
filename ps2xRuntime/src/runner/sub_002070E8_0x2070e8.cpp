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

// Function: sub_002070E8
// Address: 0x2070e8 - 0x20714c
void sub_002070E8_0x2070e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002070E8_0x2070e8");
#endif

    switch (ctx->pc) {
        case 0x207100u: goto label_207100;
        case 0x207118u: goto label_207118;
        case 0x207128u: goto label_207128;
        case 0x207134u: goto label_207134;
        default: break;
    }

    ctx->pc = 0x2070e8u;

    // 0x2070e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2070e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2070ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2070ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2070f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2070f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2070f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2070f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2070f8: 0xc081d84  jal         func_207610
    ctx->pc = 0x2070F8u;
    SET_GPR_U32(ctx, 31, 0x207100u);
    ctx->pc = 0x2070FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2070F8u;
    // 0x2070fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x2070F8u, 0x207100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207100u;
label_207100:
    // 0x207100: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207104: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x207104u;
    {
        const bool branch_taken_0x207104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207104u;
        // 0x207108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207104) {
            ctx->pc = 0x207120u;
            goto label_207120;
        }
    }
    ctx->pc = 0x20710Cu;
    // 0x20710c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x20710cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207110: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x207110u;
    SET_GPR_U32(ctx, 31, 0x207118u);
    ctx->pc = 0x207114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207110u;
    // 0x207114: 0x248475e8  addiu       $a0, $a0, 0x75E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x207110u, 0x207118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207118u;
label_207118:
    // 0x207118: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x207118u;
    {
        const bool branch_taken_0x207118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207118u;
        // 0x20711c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207118) {
            ctx->pc = 0x207138u;
            goto label_207138;
        }
    }
    ctx->pc = 0x207120u;
label_207120:
    // 0x207120: 0xc081c54  jal         func_207150
    ctx->pc = 0x207120u;
    SET_GPR_U32(ctx, 31, 0x207128u);
    ctx->pc = 0x207150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207150u, 0x207120u, 0x207128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207128u;
label_207128:
    // 0x207128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20712c: 0xc08138a  jal         func_204E28
    ctx->pc = 0x20712Cu;
    SET_GPR_U32(ctx, 31, 0x207134u);
    ctx->pc = 0x207130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20712Cu;
    // 0x207130: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204E28u, 0x20712Cu, 0x207134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207134u;
label_207134:
    // 0x207134: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x207134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_207138:
    // 0x207138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20713c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20713cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x207140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207144: 0x3e00008  jr          $ra
    ctx->pc = 0x207144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207144u;
        // 0x207148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20714Cu;
}
