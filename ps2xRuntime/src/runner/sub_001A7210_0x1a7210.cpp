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

// Function: sub_001A7210
// Address: 0x1a7210 - 0x1a72ec
void sub_001A7210_0x1a7210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7210_0x1a7210");
#endif

    switch (ctx->pc) {
        case 0x1a722cu: goto label_1a722c;
        case 0x1a7240u: goto label_1a7240;
        default: break;
    }

    ctx->pc = 0x1a7210u;

    // 0x1a7210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a721c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a721cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7224: 0xc069c28  jal         func_1A70A0
    ctx->pc = 0x1A7224u;
    SET_GPR_U32(ctx, 31, 0x1A722Cu);
    ctx->pc = 0x1A7228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7224u;
    // 0x1a7228: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A70A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A70A0u, 0x1A7224u, 0x1A722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A722Cu;
label_1a722c:
    // 0x1a722c: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A722Cu;
    {
        const bool branch_taken_0x1a722c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a722c) {
            ctx->pc = 0x1A7290u;
            goto label_1a7290;
        }
    }
    ctx->pc = 0x1A7234u;
    // 0x1a7234: 0x8e237840  lw          $v1, 0x7840($s1)
    ctx->pc = 0x1a7234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30784)));
    // 0x1a7238: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a7238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a723c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a723cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7240:
    // 0x1a7240: 0x24852000  addiu       $a1, $a0, 0x2000
    ctx->pc = 0x1a7240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8192));
    // 0x1a7244: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A7244u;
    {
        const bool branch_taken_0x1a7244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a7244) {
            ctx->pc = 0x1A7270u;
            goto label_1a7270;
        }
    }
    ctx->pc = 0x1A724Cu;
    // 0x1a724c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7250: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7250u;
    {
        const bool branch_taken_0x1a7250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7250) {
            ctx->pc = 0x1A7270u;
            goto label_1a7270;
        }
    }
    ctx->pc = 0x1A7258u;
    // 0x1a7258: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a7258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a725c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A725Cu;
    {
        const bool branch_taken_0x1a725c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a725c) {
            ctx->pc = 0x1A7270u;
            goto label_1a7270;
        }
    }
    ctx->pc = 0x1A7264u;
    // 0x1a7264: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7264u;
    {
        const bool branch_taken_0x1a7264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7264u;
        // 0x1a7268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7264) {
            ctx->pc = 0x1A7280u;
            goto label_1a7280;
        }
    }
    ctx->pc = 0x1A726Cu;
    // 0x1a726c: 0x0  nop
    ctx->pc = 0x1a726cu;
    // NOP
label_1a7270:
    // 0x1a7270: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a7270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a7274: 0x2cc20015  sltiu       $v0, $a2, 0x15
    ctx->pc = 0x1a7274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1a7278: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A7278u;
    {
        const bool branch_taken_0x1a7278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7278u;
        // 0x1a727c: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7278) {
            ctx->pc = 0x1A7240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7240;
        }
    }
    ctx->pc = 0x1A7280u;
label_1a7280:
    // 0x1a7280: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7280u;
    {
        const bool branch_taken_0x1a7280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7280u;
        // 0x1a7284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7280) {
            ctx->pc = 0x1A7290u;
            goto label_1a7290;
        }
    }
    ctx->pc = 0x1A7288u;
    // 0x1a7288: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A7288u;
    {
        const bool branch_taken_0x1a7288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7288) {
            ctx->pc = 0x1A72D8u;
            goto label_1a72d8;
        }
    }
    ctx->pc = 0x1A7290u;
label_1a7290:
    // 0x1a7290: 0xae307840  sw          $s0, 0x7840($s1)
    ctx->pc = 0x1a7290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30784), GPR_U32(ctx, 16));
    // 0x1a7294: 0x8e24783c  lw          $a0, 0x783C($s1)
    ctx->pc = 0x1a7294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1a7298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a729c: 0x8e237840  lw          $v1, 0x7840($s1)
    ctx->pc = 0x1a729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30784)));
    // 0x1a72a0: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1a72a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1a72a4: 0x8e237840  lw          $v1, 0x7840($s1)
    ctx->pc = 0x1a72a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30784)));
    // 0x1a72a8: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x1a72a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a72ac: 0x8e237840  lw          $v1, 0x7840($s1)
    ctx->pc = 0x1a72acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30784)));
    // 0x1a72b0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1a72b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a72b4: 0xae23783c  sw          $v1, 0x783C($s1)
    ctx->pc = 0x1a72b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30780), GPR_U32(ctx, 3));
    // 0x1a72b8: 0x8e24783c  lw          $a0, 0x783C($s1)
    ctx->pc = 0x1a72b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1a72bc: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1a72bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a72c0: 0xae23783c  sw          $v1, 0x783C($s1)
    ctx->pc = 0x1a72c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30780), GPR_U32(ctx, 3));
    // 0x1a72c4: 0xae247834  sw          $a0, 0x7834($s1)
    ctx->pc = 0x1a72c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30772), GPR_U32(ctx, 4));
    // 0x1a72c8: 0xae207830  sw          $zero, 0x7830($s1)
    ctx->pc = 0x1a72c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30768), GPR_U32(ctx, 0));
    // 0x1a72cc: 0xfe207820  sd          $zero, 0x7820($s1)
    ctx->pc = 0x1a72ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 30752), GPR_U64(ctx, 0));
    // 0x1a72d0: 0xae207828  sw          $zero, 0x7828($s1)
    ctx->pc = 0x1a72d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30760), GPR_U32(ctx, 0));
    // 0x1a72d4: 0xae20782c  sw          $zero, 0x782C($s1)
    ctx->pc = 0x1a72d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30764), GPR_U32(ctx, 0));
label_1a72d8:
    // 0x1a72d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a72d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a72dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a72dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a72e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a72e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a72e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A72E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A72E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72E4u;
        // 0x1a72e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A72E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A72ECu;
}
