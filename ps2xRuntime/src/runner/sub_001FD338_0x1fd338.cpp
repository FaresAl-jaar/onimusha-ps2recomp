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

// Function: sub_001FD338
// Address: 0x1fd338 - 0x1fd3b4
void sub_001FD338_0x1fd338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD338_0x1fd338");
#endif

    switch (ctx->pc) {
        case 0x1fd354u: goto label_1fd354;
        default: break;
    }

    ctx->pc = 0x1fd338u;

    // 0x1fd338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd33c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd344: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fd348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fd34c: 0xc07f5d0  jal         func_1FD740
    ctx->pc = 0x1FD34Cu;
    SET_GPR_U32(ctx, 31, 0x1FD354u);
    ctx->pc = 0x1FD350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD34Cu;
    // 0x1fd350: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD740u, 0x1FD34Cu, 0x1FD354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD354u;
label_1fd354:
    // 0x1fd354: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1fd354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x1fd358: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD358u;
    {
        const bool branch_taken_0x1fd358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD358u;
        // 0x1fd35c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd358) {
            ctx->pc = 0x1FD378u;
            goto label_1fd378;
        }
    }
    ctx->pc = 0x1FD360u;
    // 0x1fd360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd364: 0x34a50203  ori         $a1, $a1, 0x203
    ctx->pc = 0x1fd364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)515);
    // 0x1fd368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd36c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd370: 0x807f55c  j           func_1FD570
    ctx->pc = 0x1FD370u;
    ctx->pc = 0x1FD374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD370u;
    // 0x1fd374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD570u;
    sub_001FD570_0x1fd570(rdram, ctx, runtime); return;
    ctx->pc = 0x1FD378u;
label_1fd378:
    // 0x1fd378: 0xde0300a8  ld          $v1, 0xA8($s0)
    ctx->pc = 0x1fd378u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1fd37c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd380: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x1fd380u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x1fd384: 0xde0400b0  ld          $a0, 0xB0($s0)
    ctx->pc = 0x1fd384u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1fd388: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x1fd388u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x1fd38c: 0xde0300b8  ld          $v1, 0xB8($s0)
    ctx->pc = 0x1fd38cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1fd390: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x1fd390u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
    // 0x1fd394: 0xde0400c0  ld          $a0, 0xC0($s0)
    ctx->pc = 0x1fd394u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1fd398: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x1fd398u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
    // 0x1fd39c: 0xde0300c8  ld          $v1, 0xC8($s0)
    ctx->pc = 0x1fd39cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x1fd3a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd3a4: 0xfe230020  sd          $v1, 0x20($s1)
    ctx->pc = 0x1fd3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 3));
    // 0x1fd3a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd3a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3ACu;
        // 0x1fd3b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD3B4u;
}
