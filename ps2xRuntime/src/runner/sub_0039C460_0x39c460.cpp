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

// Function: sub_0039C460
// Address: 0x39c460 - 0x39c518
void sub_0039C460_0x39c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C460_0x39c460");
#endif

    switch (ctx->pc) {
        case 0x39c460u: goto label_39c460;
        case 0x39c464u: goto label_39c464;
        case 0x39c468u: goto label_39c468;
        case 0x39c46cu: goto label_39c46c;
        case 0x39c470u: goto label_39c470;
        case 0x39c474u: goto label_39c474;
        case 0x39c478u: goto label_39c478;
        case 0x39c47cu: goto label_39c47c;
        case 0x39c480u: goto label_39c480;
        case 0x39c484u: goto label_39c484;
        case 0x39c488u: goto label_39c488;
        case 0x39c48cu: goto label_39c48c;
        case 0x39c490u: goto label_39c490;
        case 0x39c494u: goto label_39c494;
        case 0x39c498u: goto label_39c498;
        case 0x39c49cu: goto label_39c49c;
        case 0x39c4a0u: goto label_39c4a0;
        case 0x39c4a4u: goto label_39c4a4;
        case 0x39c4a8u: goto label_39c4a8;
        case 0x39c4acu: goto label_39c4ac;
        case 0x39c4b0u: goto label_39c4b0;
        case 0x39c4b4u: goto label_39c4b4;
        case 0x39c4b8u: goto label_39c4b8;
        case 0x39c4bcu: goto label_39c4bc;
        case 0x39c4c0u: goto label_39c4c0;
        case 0x39c4c4u: goto label_39c4c4;
        case 0x39c4c8u: goto label_39c4c8;
        case 0x39c4ccu: goto label_39c4cc;
        case 0x39c4d0u: goto label_39c4d0;
        case 0x39c4d4u: goto label_39c4d4;
        case 0x39c4d8u: goto label_39c4d8;
        case 0x39c4dcu: goto label_39c4dc;
        case 0x39c4e0u: goto label_39c4e0;
        case 0x39c4e4u: goto label_39c4e4;
        case 0x39c4e8u: goto label_39c4e8;
        case 0x39c4ecu: goto label_39c4ec;
        case 0x39c4f0u: goto label_39c4f0;
        case 0x39c4f4u: goto label_39c4f4;
        case 0x39c4f8u: goto label_39c4f8;
        case 0x39c4fcu: goto label_39c4fc;
        case 0x39c500u: goto label_39c500;
        case 0x39c504u: goto label_39c504;
        case 0x39c508u: goto label_39c508;
        case 0x39c50cu: goto label_39c50c;
        case 0x39c510u: goto label_39c510;
        case 0x39c514u: goto label_39c514;
        default: break;
    }

    ctx->pc = 0x39c460u;

label_39c460:
    // 0x39c460: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39c464:
    // 0x39c464: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x39c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_39c468:
    // 0x39c468: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39c468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_39c46c:
    // 0x39c46c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39c46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39c470:
    // 0x39c470: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x39c470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39c474:
    // 0x39c474: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39c474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39c478:
    // 0x39c478: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x39c478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39c47c:
    // 0x39c47c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39c47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39c480:
    // 0x39c480: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x39c480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_39c484:
    // 0x39c484: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39c484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39c488:
    // 0x39c488: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39c488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c48c:
    // 0x39c48c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c490:
    // 0x39c490: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x39c490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_39c494:
    // 0x39c494: 0xc0b2ebc  jal         func_2CBAF0
label_39c498:
    if (ctx->pc == 0x39C498u) {
        ctx->pc = 0x39C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C494u;
        // 0x39c498: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C49Cu;
        goto label_39c49c;
    }
    ctx->pc = 0x39C494u;
    SET_GPR_U32(ctx, 31, 0x39C49Cu);
    ctx->pc = 0x39C498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C494u;
    // 0x39c498: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x39C494u, 0x39C49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C49Cu;
label_39c49c:
    // 0x39c49c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39c49cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39c4a0:
    // 0x39c4a0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_39c4a4:
    if (ctx->pc == 0x39C4A4u) {
        ctx->pc = 0x39C4A8u;
        goto label_39c4a8;
    }
    ctx->pc = 0x39C4A0u;
    {
        const bool branch_taken_0x39c4a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c4a0) {
            ctx->pc = 0x39C4B0u;
            goto label_39c4b0;
        }
    }
    ctx->pc = 0x39C4A8u;
label_39c4a8:
    // 0x39c4a8: 0x10000013  b           . + 4 + (0x13 << 2)
label_39c4ac:
    if (ctx->pc == 0x39C4ACu) {
        ctx->pc = 0x39C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4A8u;
        // 0x39c4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C4B0u;
        goto label_39c4b0;
    }
    ctx->pc = 0x39C4A8u;
    {
        const bool branch_taken_0x39c4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4A8u;
        // 0x39c4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c4a8) {
            ctx->pc = 0x39C4F8u;
            goto label_39c4f8;
        }
    }
    ctx->pc = 0x39C4B0u;
label_39c4b0:
    // 0x39c4b0: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x39c4b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_39c4b4:
    // 0x39c4b4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x39c4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_39c4b8:
    // 0x39c4b8: 0x320f809  jalr        $t9
label_39c4bc:
    if (ctx->pc == 0x39C4BCu) {
        ctx->pc = 0x39C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4B8u;
        // 0x39c4bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C4C0u;
        goto label_39c4c0;
    }
    ctx->pc = 0x39C4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C4C0u);
        ctx->pc = 0x39C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4B8u;
        // 0x39c4bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C4B8u, 0x39C4C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C4C0u;
label_39c4c0:
    // 0x39c4c0: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x39c4c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_39c4c4:
    // 0x39c4c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_39c4c8:
    // 0x39c4c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39c4cc:
    // 0x39c4cc: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x39c4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_39c4d0:
    // 0x39c4d0: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x39c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_39c4d4:
    // 0x39c4d4: 0xa63300c2  sh          $s3, 0xC2($s1)
    ctx->pc = 0x39c4d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 19));
label_39c4d8:
    // 0x39c4d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x39c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39c4dc:
    // 0x39c4dc: 0xae222b28  sw          $v0, 0x2B28($s1)
    ctx->pc = 0x39c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11048), GPR_U32(ctx, 2));
label_39c4e0:
    // 0x39c4e0: 0x920208e8  lbu         $v0, 0x8E8($s0)
    ctx->pc = 0x39c4e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_39c4e4:
    // 0x39c4e4: 0xa2222b25  sb          $v0, 0x2B25($s1)
    ctx->pc = 0x39c4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11045), (uint8_t)GPR_U32(ctx, 2));
label_39c4e8:
    // 0x39c4e8: 0xc0e6948  jal         func_39A520
label_39c4ec:
    if (ctx->pc == 0x39C4ECu) {
        ctx->pc = 0x39C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4E8u;
        // 0x39c4ec: 0xa2322b24  sb          $s2, 0x2B24($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11044), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C4F0u;
        goto label_39c4f0;
    }
    ctx->pc = 0x39C4E8u;
    SET_GPR_U32(ctx, 31, 0x39C4F0u);
    ctx->pc = 0x39C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C4E8u;
    // 0x39c4ec: 0xa2322b24  sb          $s2, 0x2B24($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 11044), (uint8_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A520u, 0x39C4E8u, 0x39C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C4F0u;
label_39c4f0:
    // 0x39c4f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x39c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39c4f4:
    // 0x39c4f4: 0x0  nop
    ctx->pc = 0x39c4f4u;
    // NOP
label_39c4f8:
    // 0x39c4f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x39c4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39c4fc:
    // 0x39c4fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39c4fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39c500:
    // 0x39c500: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39c500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39c504:
    // 0x39c504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39c504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39c508:
    // 0x39c508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39c508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39c50c:
    // 0x39c50c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39c50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39c510:
    // 0x39c510: 0x3e00008  jr          $ra
label_39c514:
    if (ctx->pc == 0x39C514u) {
        ctx->pc = 0x39C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C510u;
        // 0x39c514: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C518u;
        goto label_fallthrough_0x39c510;
    }
    ctx->pc = 0x39C510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C510u;
        // 0x39c514: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39c510:
    ctx->pc = 0x39C518u;
}
