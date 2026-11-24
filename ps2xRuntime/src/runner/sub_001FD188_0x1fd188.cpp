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

// Function: sub_001FD188
// Address: 0x1fd188 - 0x1fd1ec
void sub_001FD188_0x1fd188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD188_0x1fd188");
#endif

    switch (ctx->pc) {
        case 0x1fd1a4u: goto label_1fd1a4;
        default: break;
    }

    ctx->pc = 0x1fd188u;

    // 0x1fd188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd18c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd194: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fd198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fd19c: 0xc07f5d0  jal         func_1FD740
    ctx->pc = 0x1FD19Cu;
    SET_GPR_U32(ctx, 31, 0x1FD1A4u);
    ctx->pc = 0x1FD1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD19Cu;
    // 0x1fd1a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD740u, 0x1FD19Cu, 0x1FD1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD1A4u;
label_1fd1a4:
    // 0x1fd1a4: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1fd1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x1fd1a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD1A8u;
    {
        const bool branch_taken_0x1fd1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1A8u;
        // 0x1fd1ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1a8) {
            ctx->pc = 0x1FD1C8u;
            goto label_1fd1c8;
        }
    }
    ctx->pc = 0x1FD1B0u;
    // 0x1fd1b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd1b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd1b4: 0x34a50201  ori         $a1, $a1, 0x201
    ctx->pc = 0x1fd1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
    // 0x1fd1b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd1b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd1bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd1c0: 0x807f55c  j           func_1FD570
    ctx->pc = 0x1FD1C0u;
    ctx->pc = 0x1FD1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD1C0u;
    // 0x1fd1c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD570u;
    sub_001FD570_0x1fd570(rdram, ctx, runtime); return;
    ctx->pc = 0x1FD1C8u;
label_1fd1c8:
    // 0x1fd1c8: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x1fd1c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1fd1cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd1d0: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x1fd1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x1fd1d4: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x1fd1d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1fd1d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd1dc: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x1fd1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x1fd1e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd1e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1E4u;
        // 0x1fd1e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD1ECu;
}
