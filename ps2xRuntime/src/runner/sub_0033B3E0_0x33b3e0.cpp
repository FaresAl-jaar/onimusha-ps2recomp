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

// Function: sub_0033B3E0
// Address: 0x33b3e0 - 0x33b484
void sub_0033B3E0_0x33b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B3E0_0x33b3e0");
#endif

    switch (ctx->pc) {
        case 0x33b418u: goto label_33b418;
        case 0x33b43cu: goto label_33b43c;
        case 0x33b468u: goto label_33b468;
        default: break;
    }

    ctx->pc = 0x33b3e0u;

    // 0x33b3e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33b3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33b3e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33b3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33b3e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33b3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33b3ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33b3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33b3f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33b3f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b3f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33b3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33b3f8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x33b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x33b3fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33b3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33b400: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33b400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b404: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33b404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b408: 0x96650002  lhu         $a1, 0x2($s3)
    ctx->pc = 0x33b408u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x33b40c: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x33b40cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x33b410: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x33B410u;
    SET_GPR_U32(ctx, 31, 0x33B418u);
    ctx->pc = 0x33B414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B410u;
    // 0x33b414: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x33B410u, 0x33B418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B418u;
label_33b418:
    // 0x33b418: 0x96680002  lhu         $t0, 0x2($s3)
    ctx->pc = 0x33b418u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x33b41c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33b41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b420: 0x92690001  lbu         $t1, 0x1($s3)
    ctx->pc = 0x33b420u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x33b424: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x33b424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x33b428: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x33b428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x33b42c: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x33b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x33b430: 0x3406fff5  ori         $a2, $zero, 0xFFF5
    ctx->pc = 0x33b430u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x33b434: 0xc0ed8f8  jal         func_3B63E0
    ctx->pc = 0x33B434u;
    SET_GPR_U32(ctx, 31, 0x33B43Cu);
    ctx->pc = 0x33B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B434u;
    // 0x33b438: 0x34478080  ori         $a3, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63E0u, 0x33B434u, 0x33B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B43Cu;
label_33b43c:
    // 0x33b43c: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x33b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x33b440: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33b440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33b444: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x33b444u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x33b448: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33b448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b44c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x33b44cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33b450: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x33b450u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b454: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33b454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33b458: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x33b458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33b45c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33b45cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b460: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x33B460u;
    SET_GPR_U32(ctx, 31, 0x33B468u);
    ctx->pc = 0x33B464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B460u;
    // 0x33b464: 0x2529ef60  addiu       $t1, $t1, -0x10A0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x33B460u, 0x33B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B468u;
label_33b468:
    // 0x33b468: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33b468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33b46c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33b46cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33b470: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33b470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33b474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33b478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b47c: 0x3e00008  jr          $ra
    ctx->pc = 0x33B47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B47Cu;
        // 0x33b480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B484u;
}
