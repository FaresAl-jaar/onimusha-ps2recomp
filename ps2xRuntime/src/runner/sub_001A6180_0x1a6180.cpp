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

// Function: sub_001A6180
// Address: 0x1a6180 - 0x1a6250
void sub_001A6180_0x1a6180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6180_0x1a6180");
#endif

    ctx->pc = 0x1a6180u;

    // 0x1a6180: 0xdc837820  ld          $v1, 0x7820($a0)
    ctx->pc = 0x1a6180u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 30752)));
    // 0x1a6184: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A6184u;
    {
        const bool branch_taken_0x1a6184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6184) {
            ctx->pc = 0x1A6248u;
            goto label_1a6248;
        }
    }
    ctx->pc = 0x1A618Cu;
    // 0x1a618c: 0x8c887830  lw          $t0, 0x7830($a0)
    ctx->pc = 0x1a618cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30768)));
    // 0x1a6190: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1a6190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1a6194: 0x683023  subu        $a2, $v1, $t0
    ctx->pc = 0x1a6194u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1a6198: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6198u;
    {
        const bool branch_taken_0x1a6198 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1A619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6198u;
        // 0x1a619c: 0x61903  sra         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6198) {
            ctx->pc = 0x1A61A8u;
            goto label_1a61a8;
        }
    }
    ctx->pc = 0x1A61A0u;
    // 0x1a61a0: 0x24c3000f  addiu       $v1, $a2, 0xF
    ctx->pc = 0x1a61a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x1a61a4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1a61a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1a61a8:
    // 0x1a61a8: 0x8c86782c  lw          $a2, 0x782C($a0)
    ctx->pc = 0x1a61a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30764)));
    // 0x1a61ac: 0x246affff  addiu       $t2, $v1, -0x1
    ctx->pc = 0x1a61acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a61b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a61b4: 0x14c30002  bne         $a2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A61B4u;
    {
        const bool branch_taken_0x1a61b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a61b4) {
            ctx->pc = 0x1A61C0u;
            goto label_1a61c0;
        }
    }
    ctx->pc = 0x1A61BCu;
    // 0x1a61bc: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1a61bcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1a61c0:
    // 0x1a61c0: 0x8c897828  lw          $t1, 0x7828($a0)
    ctx->pc = 0x1a61c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30760)));
    // 0x1a61c4: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A61C4u;
    {
        const bool branch_taken_0x1a61c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C4u;
        // 0x1a61c8: 0xa3902  srl         $a3, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61c4) {
            ctx->pc = 0x1A61DCu;
            goto label_1a61dc;
        }
    }
    ctx->pc = 0x1A61CCu;
    // 0x1a61cc: 0x149001b  divu        $zero, $t2, $t1
    ctx->pc = 0x1a61ccu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x1a61d0: 0x0  nop
    ctx->pc = 0x1a61d0u;
    // NOP
    // 0x1a61d4: 0x0  nop
    ctx->pc = 0x1a61d4u;
    // NOP
    // 0x1a61d8: 0x3812  mflo        $a3
    ctx->pc = 0x1a61d8u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_1a61dc:
    // 0x1a61dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a61dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a61e0: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A61E0u;
    {
        const bool branch_taken_0x1a61e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a61e0) {
            ctx->pc = 0x1A61F0u;
            goto label_1a61f0;
        }
    }
    ctx->pc = 0x1A61E8u;
    // 0x1a61e8: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x1a61e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a61ec: 0x0  nop
    ctx->pc = 0x1a61ecu;
    // NOP
label_1a61f0:
    // 0x1a61f0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a61f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a61f4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x1a61f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1a61f8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1a61f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1a61fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a61fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a6200: 0x533f8  dsll        $a2, $a1, 15
    ctx->pc = 0x1a6200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 15);
    // 0x1a6204: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1a6204u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1a6208: 0x32ebc  dsll32      $a1, $v1, 26
    ctx->pc = 0x1a6208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 26));
    // 0x1a620c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1a620cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1a6210: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x1a6210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1a6214: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1a6214u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1a6218: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a6218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a621c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1a621cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1a6220: 0x31f3c  dsll32      $v1, $v1, 28
    ctx->pc = 0x1a6220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 28));
    // 0x1a6224: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a6224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a6228: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x1a6228u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x1a622c: 0xdc857820  ld          $a1, 0x7820($a0)
    ctx->pc = 0x1a622cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 30752)));
    // 0x1a6230: 0x8c837830  lw          $v1, 0x7830($a0)
    ctx->pc = 0x1a6230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30768)));
    // 0x1a6234: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x1a6234u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x1a6238: 0xac80782c  sw          $zero, 0x782C($a0)
    ctx->pc = 0x1a6238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30764), GPR_U32(ctx, 0));
    // 0x1a623c: 0xac807828  sw          $zero, 0x7828($a0)
    ctx->pc = 0x1a623cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30760), GPR_U32(ctx, 0));
    // 0x1a6240: 0xfc807820  sd          $zero, 0x7820($a0)
    ctx->pc = 0x1a6240u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 30752), GPR_U64(ctx, 0));
    // 0x1a6244: 0x0  nop
    ctx->pc = 0x1a6244u;
    // NOP
label_1a6248:
    // 0x1a6248: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6250u;
}
