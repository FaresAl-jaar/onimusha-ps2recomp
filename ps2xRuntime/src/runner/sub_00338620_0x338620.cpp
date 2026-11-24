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

// Function: sub_00338620
// Address: 0x338620 - 0x338730
void sub_00338620_0x338620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338620_0x338620");
#endif

    ctx->pc = 0x338620u;

    // 0x338620: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x338620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x338624: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x338624u;
    {
        const bool branch_taken_0x338624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338624) {
            ctx->pc = 0x338630u;
            goto label_338630;
        }
    }
    ctx->pc = 0x33862Cu;
    // 0x33862c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33862cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338630:
    // 0x338630: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x338630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338634: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x338634u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x338638: 0x3c010098  lui         $at, 0x98
    ctx->pc = 0x338638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)152 << 16));
    // 0x33863c: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x33863cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x338640: 0x34219680  ori         $at, $at, 0x9680
    ctx->pc = 0x338640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38528);
    // 0x338644: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x338644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x338648: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x338648u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x33864c: 0xa93821  addu        $a3, $a1, $t1
    ctx->pc = 0x33864cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x338650: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x338650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x338654: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x338654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x338658: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x338658u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x33865c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x33865cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338660: 0xa93821  addu        $a3, $a1, $t1
    ctx->pc = 0x338660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x338664: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x338664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x338668: 0xa1082b  sltu        $at, $a1, $at
    ctx->pc = 0x338668u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x33866c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x33866Cu;
    {
        const bool branch_taken_0x33866c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x338670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33866Cu;
        // 0x338670: 0x3c050098  lui         $a1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33866c) {
            ctx->pc = 0x338680u;
            goto label_338680;
        }
    }
    ctx->pc = 0x338674u;
    // 0x338674: 0x34a5967f  ori         $a1, $a1, 0x967F
    ctx->pc = 0x338674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38527);
    // 0x338678: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x338678u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x33867c: 0x0  nop
    ctx->pc = 0x33867cu;
    // NOP
label_338680:
    // 0x338680: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x338680u;
    {
        const bool branch_taken_0x338680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338680) {
            ctx->pc = 0x338698u;
            goto label_338698;
        }
    }
    ctx->pc = 0x338688u;
    // 0x338688: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x338688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33868c: 0x30a50002  andi        $a1, $a1, 0x2
    ctx->pc = 0x33868cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x338690: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x338690u;
    {
        const bool branch_taken_0x338690 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x338690) {
            ctx->pc = 0x3386B0u;
            goto label_3386b0;
        }
    }
    ctx->pc = 0x338698u;
label_338698:
    // 0x338698: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x338698u;
    {
        const bool branch_taken_0x338698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x338698) {
            ctx->pc = 0x338728u;
            goto label_338728;
        }
    }
    ctx->pc = 0x3386A0u;
    // 0x3386a0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3386a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3386a4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3386a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3386a8: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3386A8u;
    {
        const bool branch_taken_0x3386a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3386a8) {
            ctx->pc = 0x338728u;
            goto label_338728;
        }
    }
    ctx->pc = 0x3386B0u;
label_3386b0:
    // 0x3386b0: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x3386b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x3386b4: 0x94870008  lhu         $a3, 0x8($a0)
    ctx->pc = 0x3386b4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3386b8: 0x1054018  mult        $t0, $t0, $a1
    ctx->pc = 0x3386b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3386bc: 0x3c010098  lui         $at, 0x98
    ctx->pc = 0x3386bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)152 << 16));
    // 0x3386c0: 0x34219680  ori         $at, $at, 0x9680
    ctx->pc = 0x3386c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38528);
    // 0x3386c4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3386c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3386c8: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3386c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3386cc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3386ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3386d0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3386d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3386d4: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x3386d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3386d8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x3386d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3386dc: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x3386dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3386e0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x3386e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3386e4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3386e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3386e8: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x3386e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x3386ec: 0x94850008  lhu         $a1, 0x8($a0)
    ctx->pc = 0x3386ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3386f0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3386f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3386f4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3386f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3386f8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x3386f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x3386fc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3386fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x338700: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x338700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x338704: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x338704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x338708: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x338708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33870c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33870cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x338710: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x338710u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x338714: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x338714u;
    {
        const bool branch_taken_0x338714 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x338714) {
            ctx->pc = 0x338728u;
            goto label_338728;
        }
    }
    ctx->pc = 0x33871Cu;
    // 0x33871c: 0x3c030098  lui         $v1, 0x98
    ctx->pc = 0x33871cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)152 << 16));
    // 0x338720: 0x3463967f  ori         $v1, $v1, 0x967F
    ctx->pc = 0x338720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38527);
    // 0x338724: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x338724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_338728:
    // 0x338728: 0x3e00008  jr          $ra
    ctx->pc = 0x338728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338730u;
}
