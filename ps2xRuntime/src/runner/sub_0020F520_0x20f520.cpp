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

// Function: sub_0020F520
// Address: 0x20f520 - 0x20f5c4
void sub_0020F520_0x20f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F520_0x20f520");
#endif

    switch (ctx->pc) {
        case 0x20f590u: goto label_20f590;
        default: break;
    }

    ctx->pc = 0x20f520u;

    // 0x20f520: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x20f520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x20f524: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20f524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20f528: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20f528u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20f52c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20f52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20f530: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20f530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f534: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20f534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f538: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20f538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20f53c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x20f53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f540: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20f540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x20f544: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20f544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f548: 0x24841310  addiu       $a0, $a0, 0x1310
    ctx->pc = 0x20f548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4880));
    // 0x20f54c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x20f550: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x20f550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x20f554: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20f554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20f558: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x20f558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x20f55c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x20f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x20f560: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x20f560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x20f564: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x20f564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20f568: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20f568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x20f56c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x20f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x20f570: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20F570u;
    {
        const bool branch_taken_0x20f570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F570u;
        // 0x20f574: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f570) {
            ctx->pc = 0x20F580u;
            goto label_20f580;
        }
    }
    ctx->pc = 0x20F578u;
    // 0x20f578: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20F578u;
    {
        const bool branch_taken_0x20f578 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F578u;
        // 0x20f57c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f578) {
            ctx->pc = 0x20F588u;
            goto label_20f588;
        }
    }
    ctx->pc = 0x20F580u;
label_20f580:
    // 0x20f580: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20F580u;
    {
        const bool branch_taken_0x20f580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F580u;
        // 0x20f584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f580) {
            ctx->pc = 0x20F5B4u;
            goto label_20f5b4;
        }
    }
    ctx->pc = 0x20F588u;
label_20f588:
    // 0x20f588: 0xc083df6  jal         func_20F7D8
    ctx->pc = 0x20F588u;
    SET_GPR_U32(ctx, 31, 0x20F590u);
    ctx->pc = 0x20F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F588u;
    // 0x20f58c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F7D8u, 0x20F588u, 0x20F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F590u;
label_20f590:
    // 0x20f590: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20f590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f594: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x20f594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f598: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x20f598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20f59c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x20f59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f5a0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x20f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x20f5a4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x20f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x20f5a8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x20f5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x20f5ac: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x20f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x20f5b0: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x20f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_20f5b4:
    // 0x20f5b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20f5b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f5b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20f5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20f5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x20F5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5BCu;
        // 0x20f5c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F5C4u;
}
