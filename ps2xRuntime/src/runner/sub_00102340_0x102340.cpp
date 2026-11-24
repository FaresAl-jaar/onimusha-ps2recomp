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

// Function: sub_00102340
// Address: 0x102340 - 0x1023f4
void sub_00102340_0x102340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102340_0x102340");
#endif

    switch (ctx->pc) {
        case 0x10238cu: goto label_10238c;
        case 0x102398u: goto label_102398;
        case 0x1023b8u: goto label_1023b8;
        case 0x1023d0u: goto label_1023d0;
        default: break;
    }

    ctx->pc = 0x102340u;

    // 0x102340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x102344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x102348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x102348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10234c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10234cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x102350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x102350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102354: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x102354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x102358: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x102358u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10235c: 0x26250220  addiu       $a1, $s1, 0x220
    ctx->pc = 0x10235cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x102360: 0x30500040  andi        $s0, $v0, 0x40
    ctx->pc = 0x102360u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x102364: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x102364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x102368: 0xac820230  sw          $v0, 0x230($a0)
    ctx->pc = 0x102368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 2));
    // 0x10236c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x10236cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102370: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x102370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x102374: 0xac82022c  sw          $v0, 0x22C($a0)
    ctx->pc = 0x102374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 2));
    // 0x102378: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x102378u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10237c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x10237cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x102380: 0xac820228  sw          $v0, 0x228($a0)
    ctx->pc = 0x102380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 2));
    // 0x102384: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x102384u;
    SET_GPR_U32(ctx, 31, 0x10238Cu);
    ctx->pc = 0x102388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102384u;
    // 0x102388: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x102384u, 0x10238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10238Cu;
label_10238c:
    // 0x10238c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10238cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102390: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x102390u;
    SET_GPR_U32(ctx, 31, 0x102398u);
    ctx->pc = 0x102394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102390u;
    // 0x102394: 0x26250224  addiu       $a1, $s1, 0x224 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x102390u, 0x102398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102398u;
label_102398:
    // 0x102398: 0x8e230230  lw          $v1, 0x230($s1)
    ctx->pc = 0x102398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x10239c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10239Cu;
    {
        const bool branch_taken_0x10239c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1023A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10239Cu;
        // 0x1023a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10239c) {
            ctx->pc = 0x1023B8u;
            goto label_1023b8;
        }
    }
    ctx->pc = 0x1023A4u;
    // 0x1023a4: 0x7a230200  lq          $v1, 0x200($s1)
    ctx->pc = 0x1023a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1023a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1023a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1023ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1023acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1023b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1023B0u;
    {
        const bool branch_taken_0x1023b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1023B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023B0u;
        // 0x1023b4: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023b0) {
            ctx->pc = 0x1023C0u;
            goto label_1023c0;
        }
    }
    ctx->pc = 0x1023B8u;
label_1023b8:
    // 0x1023b8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1023b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1023bc: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x1023bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_1023c0:
    // 0x1023c0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1023C0u;
    {
        const bool branch_taken_0x1023c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1023C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023C0u;
        // 0x1023c4: 0x26250234  addiu       $a1, $s1, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 564));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023c0) {
            ctx->pc = 0x1023D8u;
            goto label_1023d8;
        }
    }
    ctx->pc = 0x1023C8u;
    // 0x1023c8: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x1023C8u;
    SET_GPR_U32(ctx, 31, 0x1023D0u);
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x1023C8u, 0x1023D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1023D0u;
label_1023d0:
    // 0x1023d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1023D0u;
    {
        const bool branch_taken_0x1023d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1023d0) {
            ctx->pc = 0x1023E0u;
            goto label_1023e0;
        }
    }
    ctx->pc = 0x1023D8u;
label_1023d8:
    // 0x1023d8: 0xae200234  sw          $zero, 0x234($s1)
    ctx->pc = 0x1023d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 0));
    // 0x1023dc: 0x0  nop
    ctx->pc = 0x1023dcu;
    // NOP
label_1023e0:
    // 0x1023e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1023e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1023e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1023e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1023e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1023e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1023ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1023ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1023F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023ECu;
        // 0x1023f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1023ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1023F4u;
}
