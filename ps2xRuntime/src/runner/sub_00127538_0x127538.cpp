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

// Function: sub_00127538
// Address: 0x127538 - 0x127598
void sub_00127538_0x127538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127538_0x127538");
#endif

    switch (ctx->pc) {
        case 0x127560u: goto label_127560;
        case 0x12757cu: goto label_12757c;
        default: break;
    }

    ctx->pc = 0x127538u;

    // 0x127538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12753c: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x12753cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127540: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127544: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x127544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127548: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x127548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12754c: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x12754cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x127550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127554: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x127554u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x127558: 0xc049a02  jal         func_126808
    ctx->pc = 0x127558u;
    SET_GPR_U32(ctx, 31, 0x127560u);
    ctx->pc = 0x12755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127558u;
    // 0x12755c: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126808u, 0x127558u, 0x127560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127560u;
label_127560:
    // 0x127560: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x127560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x127564: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x127564u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x127568: 0x4420008  bltzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127568u;
    {
        const bool branch_taken_0x127568 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x127568) {
            ctx->pc = 0x12756Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127568u;
            // 0x12756c: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12758Cu;
            goto label_12758c;
        }
    }
    ctx->pc = 0x127570u;
    // 0x127570: 0x8e0f0050  lw          $t7, 0x50($s0)
    ctx->pc = 0x127570u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x127574: 0x1e27821  addu        $t7, $t7, $v0
    ctx->pc = 0x127574u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x127578: 0xae0f0050  sw          $t7, 0x50($s0)
    ctx->pc = 0x127578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 15));
label_12757c:
    // 0x12757c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12757cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127580: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x127580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127584: 0x3e00008  jr          $ra
    ctx->pc = 0x127584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127584u;
        // 0x127588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12758Cu;
label_12758c:
    // 0x12758c: 0x31efefff  andi        $t7, $t7, 0xEFFF
    ctx->pc = 0x12758cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)61439);
    // 0x127590: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x127590u;
    {
        const bool branch_taken_0x127590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127590u;
        // 0x127594: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127590) {
            ctx->pc = 0x12757Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12757c;
        }
    }
    ctx->pc = 0x127598u;
}
