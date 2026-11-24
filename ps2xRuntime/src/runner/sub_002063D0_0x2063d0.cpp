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

// Function: sub_002063D0
// Address: 0x2063d0 - 0x206468
void sub_002063D0_0x2063d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002063D0_0x2063d0");
#endif

    switch (ctx->pc) {
        case 0x2063ecu: goto label_2063ec;
        case 0x206420u: goto label_206420;
        case 0x206428u: goto label_206428;
        case 0x206448u: goto label_206448;
        case 0x206450u: goto label_206450;
        default: break;
    }

    ctx->pc = 0x2063d0u;

    // 0x2063d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2063d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2063d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2063d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2063d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2063d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2063dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2063dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2063e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2063e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2063e4: 0xc081d84  jal         func_207610
    ctx->pc = 0x2063E4u;
    SET_GPR_U32(ctx, 31, 0x2063ECu);
    ctx->pc = 0x2063E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2063E4u;
    // 0x2063e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x2063E4u, 0x2063ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063ECu;
label_2063ec:
    // 0x2063ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2063ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2063f0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2063F0u;
    {
        const bool branch_taken_0x2063f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2063F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063F0u;
        // 0x2063f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063f0) {
            ctx->pc = 0x206418u;
            goto label_206418;
        }
    }
    ctx->pc = 0x2063F8u;
    // 0x2063f8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2063f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2063fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2063fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206404: 0x24847388  addiu       $a0, $a0, 0x7388
    ctx->pc = 0x206404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29576));
    // 0x206408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x206408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20640c: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x20640Cu;
    ctx->pc = 0x206410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20640Cu;
    // 0x206410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x206414u;
    // 0x206414: 0x0  nop
    ctx->pc = 0x206414u;
    // NOP
label_206418:
    // 0x206418: 0xc0831c4  jal         func_20C710
    ctx->pc = 0x206418u;
    SET_GPR_U32(ctx, 31, 0x206420u);
    ctx->pc = 0x20C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C710u, 0x206418u, 0x206420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206420u;
label_206420:
    // 0x206420: 0xc08191a  jal         func_206468
    ctx->pc = 0x206420u;
    SET_GPR_U32(ctx, 31, 0x206428u);
    ctx->pc = 0x206424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206420u;
    // 0x206424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206468u, 0x206420u, 0x206428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206428u;
label_206428:
    // 0x206428: 0xae1101bc  sw          $s1, 0x1BC($s0)
    ctx->pc = 0x206428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 17));
    // 0x20642c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206430: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x206430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x206434: 0xae0201d0  sw          $v0, 0x1D0($s0)
    ctx->pc = 0x206434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 2));
    // 0x206438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20643c: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x20643cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x206440: 0xc081810  jal         func_206040
    ctx->pc = 0x206440u;
    SET_GPR_U32(ctx, 31, 0x206448u);
    ctx->pc = 0x206444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206440u;
    // 0x206444: 0xae0001dc  sw          $zero, 0x1DC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206040u, 0x206440u, 0x206448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206448u;
label_206448:
    // 0x206448: 0xc0831c4  jal         func_20C710
    ctx->pc = 0x206448u;
    SET_GPR_U32(ctx, 31, 0x206450u);
    ctx->pc = 0x20644Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206448u;
    // 0x20644c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C710u, 0x206448u, 0x206450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206450u;
label_206450:
    // 0x206450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206454: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20645c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20645cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206460: 0x8080930  j           func_2024C0
    ctx->pc = 0x206460u;
    ctx->pc = 0x206464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206460u;
    // 0x206464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024C0u;
    sub_002024C0_0x2024c0(rdram, ctx, runtime); return;
    ctx->pc = 0x206468u;
}
