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

// Function: sub_0021E558
// Address: 0x21e558 - 0x21e5b4
void sub_0021E558_0x21e558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E558_0x21e558");
#endif

    switch (ctx->pc) {
        case 0x21e574u: goto label_21e574;
        default: break;
    }

    ctx->pc = 0x21e558u;

    // 0x21e558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e55c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e560: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e564: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21e568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21e56c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21E56Cu;
    SET_GPR_U32(ctx, 31, 0x21E574u);
    ctx->pc = 0x21E570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E56Cu;
    // 0x21e570: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21E56Cu, 0x21E574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E574u;
label_21e574:
    // 0x21e574: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21e574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21e578: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E578u;
    {
        const bool branch_taken_0x21e578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E578u;
        // 0x21e57c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e578) {
            ctx->pc = 0x21E598u;
            goto label_21e598;
        }
    }
    ctx->pc = 0x21E580u;
    // 0x21e580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e584: 0x34a50139  ori         $a1, $a1, 0x139
    ctx->pc = 0x21e584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)313);
    // 0x21e588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e58c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e590: 0x80848e0  j           func_212380
    ctx->pc = 0x21E590u;
    ctx->pc = 0x21E594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E590u;
    // 0x21e594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21E598u;
label_21e598:
    // 0x21e598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e59c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e59cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e5a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21e5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e5a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e5a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e5a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e5ac: 0x8083c8a  j           func_20F228
    ctx->pc = 0x21E5ACu;
    ctx->pc = 0x21E5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E5ACu;
    // 0x21e5b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F228u;
    sub_0020F228_0x20f228(rdram, ctx, runtime); return;
    ctx->pc = 0x21E5B4u;
}
