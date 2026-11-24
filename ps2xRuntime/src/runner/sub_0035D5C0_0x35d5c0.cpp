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

// Function: sub_0035D5C0
// Address: 0x35d5c0 - 0x35d6ac
void sub_0035D5C0_0x35d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D5C0_0x35d5c0");
#endif

    switch (ctx->pc) {
        case 0x35d610u: goto label_35d610;
        case 0x35d638u: goto label_35d638;
        case 0x35d660u: goto label_35d660;
        default: break;
    }

    ctx->pc = 0x35d5c0u;

    // 0x35d5c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x35d5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x35d5c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x35d5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x35d5c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35d5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x35d5cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35d5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35d5d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x35d5d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d5d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35d5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35d5d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x35d5d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d5dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35d5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35d5e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x35d5e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d5e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35d5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35d5e8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x35d5e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d5ec: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x35d5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d5f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35d5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d5f4: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x35d5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x35d5f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35d5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d5fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d5fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d600: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x35d600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x35d604: 0x2508d550  addiu       $t0, $t0, -0x2AB0
    ctx->pc = 0x35d604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956368));
    // 0x35d608: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x35D608u;
    SET_GPR_U32(ctx, 31, 0x35D610u);
    ctx->pc = 0x35D60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D608u;
    // 0x35d60c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x35D608u, 0x35D610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D610u;
label_35d610:
    // 0x35d610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35d610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d614: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x35D614u;
    {
        const bool branch_taken_0x35d614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D614u;
        // 0x35d618: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d614) {
            ctx->pc = 0x35D680u;
            goto label_35d680;
        }
    }
    ctx->pc = 0x35D61Cu;
    // 0x35d61c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x35d61cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d620: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x35d620u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d624: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x35d624u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d62c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x35d62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35d630: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x35D630u;
    SET_GPR_U32(ctx, 31, 0x35D638u);
    ctx->pc = 0x35D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D630u;
    // 0x35d634: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x35D630u, 0x35D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D638u;
label_35d638:
    // 0x35d638: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x35d638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x35d63c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x35d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x35d640: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x35d640u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d648: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x35d648u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x35d64c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d650: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x35d650u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x35d654: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x35d654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x35d658: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x35D658u;
    SET_GPR_U32(ctx, 31, 0x35D660u);
    ctx->pc = 0x35D65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D658u;
    // 0x35d65c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x35D658u, 0x35D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D660u;
label_35d660:
    // 0x35d660: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x35d660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x35d664: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35d664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35d668: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x35d668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x35d66c: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x35d66cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x35d670: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x35d670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x35d674: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35D674u;
    {
        const bool branch_taken_0x35d674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D674u;
        // 0x35d678: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d674) {
            ctx->pc = 0x35D688u;
            goto label_35d688;
        }
    }
    ctx->pc = 0x35D67Cu;
    // 0x35d67c: 0x0  nop
    ctx->pc = 0x35d67cu;
    // NOP
label_35d680:
    // 0x35d680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d684: 0x0  nop
    ctx->pc = 0x35d684u;
    // NOP
label_35d688:
    // 0x35d688: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x35d688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35d68c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35d68cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35d690: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35d690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35d694: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35d694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d698: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35d698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d69c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35d69cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d6a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35d6a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x35D6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D6A4u;
        // 0x35d6a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D6ACu;
}
