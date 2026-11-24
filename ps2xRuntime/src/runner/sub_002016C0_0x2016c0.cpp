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

// Function: sub_002016C0
// Address: 0x2016c0 - 0x201768
void sub_002016C0_0x2016c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002016C0_0x2016c0");
#endif

    switch (ctx->pc) {
        case 0x201730u: goto label_201730;
        case 0x201748u: goto label_201748;
        default: break;
    }

    ctx->pc = 0x2016c0u;

    // 0x2016c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2016c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2016c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2016c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2016c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2016c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2016ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2016d0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2016D0u;
    {
        const bool branch_taken_0x2016d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2016D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016D0u;
        // 0x2016d4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016d0) {
            ctx->pc = 0x2016F8u;
            goto label_2016f8;
        }
    }
    ctx->pc = 0x2016D8u;
    // 0x2016d8: 0x851826  xor         $v1, $a0, $a1
    ctx->pc = 0x2016d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x2016dc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2016dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2016e0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2016e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2016e4: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x2016e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2016e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2016e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2016ec: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x2016ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x2016f0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2016F0u;
    {
        const bool branch_taken_0x2016f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2016F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016F0u;
        // 0x2016f4: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016f0) {
            ctx->pc = 0x201754u;
            goto label_201754;
        }
    }
    ctx->pc = 0x2016F8u;
label_2016f8:
    // 0x2016f8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2016F8u;
    {
        const bool branch_taken_0x2016f8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2016FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016F8u;
        // 0x2016fc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016f8) {
            ctx->pc = 0x201708u;
            goto label_201708;
        }
    }
    ctx->pc = 0x201700u;
    // 0x201700: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x201700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201704: 0x4202f  dsubu       $a0, $zero, $a0
    ctx->pc = 0x201704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
label_201708:
    // 0x201708: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x201708u;
    {
        const bool branch_taken_0x201708 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x201708) {
            ctx->pc = 0x201718u;
            goto label_201718;
        }
    }
    ctx->pc = 0x201710u;
    // 0x201710: 0x118823  negu        $s1, $s1
    ctx->pc = 0x201710u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x201714: 0x5282f  dsubu       $a1, $zero, $a1
    ctx->pc = 0x201714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
label_201718:
    // 0x201718: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201718u;
    {
        const bool branch_taken_0x201718 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x201718) {
            ctx->pc = 0x201728u;
            goto label_201728;
        }
    }
    ctx->pc = 0x201720u;
    // 0x201720: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x201720u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x201724: 0x118823  negu        $s1, $s1
    ctx->pc = 0x201724u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_201728:
    // 0x201728: 0xc04b098  jal         func_12C260
    ctx->pc = 0x201728u;
    SET_GPR_U32(ctx, 31, 0x201730u);
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x201728u, 0x201730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201730u;
label_201730:
    // 0x201730: 0x1027fe  dsrl32      $a0, $s0, 31
    ctx->pc = 0x201730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (32 + 31));
    // 0x201734: 0x204202d  daddu       $a0, $s0, $a0
    ctx->pc = 0x201734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x201738: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20173c: 0x4207b  dsra        $a0, $a0, 1
    ctx->pc = 0x20173cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 1);
    // 0x201740: 0xc04b1a2  jal         func_12C688
    ctx->pc = 0x201740u;
    SET_GPR_U32(ctx, 31, 0x201748u);
    ctx->pc = 0x201744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201740u;
    // 0x201744: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x201740u, 0x201748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201748u;
label_201748:
    // 0x201748: 0x2a240000  slti        $a0, $s1, 0x0
    ctx->pc = 0x201748u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x20174c: 0x2182f  dsubu       $v1, $zero, $v0
    ctx->pc = 0x20174cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x201750: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x201750u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_201754:
    // 0x201754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201758: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20175c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20175cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201760: 0x3e00008  jr          $ra
    ctx->pc = 0x201760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201760u;
        // 0x201764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201768u;
}
