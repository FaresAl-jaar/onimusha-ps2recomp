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

// Function: sub_0020F228
// Address: 0x20f228 - 0x20f2d0
void sub_0020F228_0x20f228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F228_0x20f228");
#endif

    switch (ctx->pc) {
        case 0x20f248u: goto label_20f248;
        case 0x20f278u: goto label_20f278;
        case 0x20f290u: goto label_20f290;
        case 0x20f2a8u: goto label_20f2a8;
        default: break;
    }

    ctx->pc = 0x20f228u;

    // 0x20f228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20f228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20f22c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20f22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20f230: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20f230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20f234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20f238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f23c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20f23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20f240: 0xc083cb4  jal         func_20F2D0
    ctx->pc = 0x20F240u;
    SET_GPR_U32(ctx, 31, 0x20F248u);
    ctx->pc = 0x20F244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F240u;
    // 0x20f244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F2D0u, 0x20F240u, 0x20F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F248u;
label_20f248:
    // 0x20f248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f24c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20F24Cu;
    {
        const bool branch_taken_0x20f24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F24Cu;
        // 0x20f250: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f24c) {
            ctx->pc = 0x20F270u;
            goto label_20f270;
        }
    }
    ctx->pc = 0x20F254u;
    // 0x20f254: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20f254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x20f258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20f258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f25c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20f25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20f260: 0x34a50408  ori         $a1, $a1, 0x408
    ctx->pc = 0x20f260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1032);
    // 0x20f264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20f264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f268: 0x80848e0  j           func_212380
    ctx->pc = 0x20F268u;
    ctx->pc = 0x20F26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F268u;
    // 0x20f26c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x20F270u;
label_20f270:
    // 0x20f270: 0xc088902  jal         func_222408
    ctx->pc = 0x20F270u;
    SET_GPR_U32(ctx, 31, 0x20F278u);
    ctx->pc = 0x20F274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F270u;
    // 0x20f274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222408u, 0x20F270u, 0x20F278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F278u;
label_20f278:
    // 0x20f278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f27c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20f27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f280: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20F280u;
    {
        const bool branch_taken_0x20f280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F280u;
        // 0x20f284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f280) {
            ctx->pc = 0x20F2B8u;
            goto label_20f2b8;
        }
    }
    ctx->pc = 0x20F288u;
    // 0x20f288: 0xc088902  jal         func_222408
    ctx->pc = 0x20F288u;
    SET_GPR_U32(ctx, 31, 0x20F290u);
    ctx->pc = 0x222408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222408u, 0x20F288u, 0x20F290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F290u;
label_20f290:
    // 0x20f290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f294: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20f294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20f298: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20F298u;
    {
        const bool branch_taken_0x20f298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F298u;
        // 0x20f29c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f298) {
            ctx->pc = 0x20F2B8u;
            goto label_20f2b8;
        }
    }
    ctx->pc = 0x20F2A0u;
    // 0x20f2a0: 0xc088902  jal         func_222408
    ctx->pc = 0x20F2A0u;
    SET_GPR_U32(ctx, 31, 0x20F2A8u);
    ctx->pc = 0x222408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222408u, 0x20F2A0u, 0x20F2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2A8u;
label_20f2a8:
    // 0x20f2a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f2ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20f2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f2b0: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x20f2b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x20f2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f2b8:
    // 0x20f2b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20f2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f2bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20f2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f2c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20f2c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20f2c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20f2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f2c8: 0x8083cc6  j           func_20F318
    ctx->pc = 0x20F2C8u;
    ctx->pc = 0x20F2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F2C8u;
    // 0x20f2cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F318u;
    sub_0020F318_0x20f318(rdram, ctx, runtime); return;
    ctx->pc = 0x20F2D0u;
}
