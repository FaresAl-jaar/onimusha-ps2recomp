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

// Function: sub_00201610
// Address: 0x201610 - 0x2016c0
void sub_00201610_0x201610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201610_0x201610");
#endif

    switch (ctx->pc) {
        case 0x20167cu: goto label_20167c;
        case 0x201694u: goto label_201694;
        default: break;
    }

    ctx->pc = 0x201610u;

    // 0x201610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201618: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x201618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20161c: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x20161Cu;
    {
        const bool branch_taken_0x20161c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x201620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20161Cu;
        // 0x201620: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20161c) {
            ctx->pc = 0x201640u;
            goto label_201640;
        }
    }
    ctx->pc = 0x201624u;
    // 0x201624: 0x851826  xor         $v1, $a0, $a1
    ctx->pc = 0x201624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x201628: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x201628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x20162c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x20162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x201630: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x201630u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x201634: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x201634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x201638: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x201638u;
    {
        const bool branch_taken_0x201638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201638u;
        // 0x20163c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201638) {
            ctx->pc = 0x2016ACu;
            goto label_2016ac;
        }
    }
    ctx->pc = 0x201640u;
label_201640:
    // 0x201640: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x201640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201644: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201644u;
    {
        const bool branch_taken_0x201644 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x201648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201644u;
        // 0x201648: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201644) {
            ctx->pc = 0x201654u;
            goto label_201654;
        }
    }
    ctx->pc = 0x20164Cu;
    // 0x20164c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x20164cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201650: 0x4202f  dsubu       $a0, $zero, $a0
    ctx->pc = 0x201650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
label_201654:
    // 0x201654: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x201654u;
    {
        const bool branch_taken_0x201654 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x201654) {
            ctx->pc = 0x201664u;
            goto label_201664;
        }
    }
    ctx->pc = 0x20165Cu;
    // 0x20165c: 0x118823  negu        $s1, $s1
    ctx->pc = 0x20165cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x201660: 0x5282f  dsubu       $a1, $zero, $a1
    ctx->pc = 0x201660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
label_201664:
    // 0x201664: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201664u;
    {
        const bool branch_taken_0x201664 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x201664) {
            ctx->pc = 0x201674u;
            goto label_201674;
        }
    }
    ctx->pc = 0x20166Cu;
    // 0x20166c: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x20166cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x201670: 0x118823  negu        $s1, $s1
    ctx->pc = 0x201670u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_201674:
    // 0x201674: 0xc04b098  jal         func_12C260
    ctx->pc = 0x201674u;
    SET_GPR_U32(ctx, 31, 0x20167Cu);
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x201674u, 0x20167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20167Cu;
label_20167c:
    // 0x20167c: 0x1027fe  dsrl32      $a0, $s0, 31
    ctx->pc = 0x20167cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (32 + 31));
    // 0x201680: 0x204202d  daddu       $a0, $s0, $a0
    ctx->pc = 0x201680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x201684: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201688: 0x4207b  dsra        $a0, $a0, 1
    ctx->pc = 0x201688u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 1);
    // 0x20168c: 0xc04b1a2  jal         func_12C688
    ctx->pc = 0x20168Cu;
    SET_GPR_U32(ctx, 31, 0x201694u);
    ctx->pc = 0x201690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20168Cu;
    // 0x201690: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x20168Cu, 0x201694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201694u;
label_201694:
    // 0x201694: 0x2a240000  slti        $a0, $s1, 0x0
    ctx->pc = 0x201694u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x201698: 0x2182f  dsubu       $v1, $zero, $v0
    ctx->pc = 0x201698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x20169c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x20169cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2016a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2016a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016a4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2016a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2016a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2016a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2016ac:
    // 0x2016ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2016acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2016b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2016b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2016b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2016b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2016b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2016B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2016BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016B8u;
        // 0x2016bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2016B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2016C0u;
}
