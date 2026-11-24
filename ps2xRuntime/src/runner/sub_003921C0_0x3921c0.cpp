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

// Function: sub_003921C0
// Address: 0x3921c0 - 0x392460
void sub_003921C0_0x3921c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003921C0_0x3921c0");
#endif

    switch (ctx->pc) {
        case 0x3921fcu: goto label_3921fc;
        case 0x392204u: goto label_392204;
        case 0x392274u: goto label_392274;
        case 0x392280u: goto label_392280;
        case 0x392288u: goto label_392288;
        case 0x392318u: goto label_392318;
        case 0x392338u: goto label_392338;
        case 0x392348u: goto label_392348;
        case 0x3923e8u: goto label_3923e8;
        case 0x39240cu: goto label_39240c;
        case 0x39241cu: goto label_39241c;
        default: break;
    }

    ctx->pc = 0x3921c0u;

    // 0x3921c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3921c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3921c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3921c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3921c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3921c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3921cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3921ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3921d0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3921d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3921d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3921d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3921d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3921d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3921dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3921dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3921e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3921e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3921e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3921e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3921e8: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x3921e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3921ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3921ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3921f0: 0x26c40278  addiu       $a0, $s6, 0x278
    ctx->pc = 0x3921f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 632));
    // 0x3921f4: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x3921F4u;
    SET_GPR_U32(ctx, 31, 0x3921FCu);
    ctx->pc = 0x3921F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3921F4u;
    // 0x3921f8: 0x38450001  xori        $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x3921F4u, 0x3921FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3921FCu;
label_3921fc:
    // 0x3921fc: 0xc0b78e0  jal         func_2DE380
    ctx->pc = 0x3921FCu;
    SET_GPR_U32(ctx, 31, 0x392204u);
    ctx->pc = 0x392200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3921FCu;
    // 0x392200: 0x26c40278  addiu       $a0, $s6, 0x278 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE380u, 0x3921FCu, 0x392204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392204u;
label_392204:
    // 0x392204: 0x92c20002  lbu         $v0, 0x2($s6)
    ctx->pc = 0x392204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x392208: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x392208u;
    {
        const bool branch_taken_0x392208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392208) {
            ctx->pc = 0x392278u;
            goto label_392278;
        }
    }
    ctx->pc = 0x392210u;
    // 0x392210: 0x86c5026c  lh          $a1, 0x26C($s6)
    ctx->pc = 0x392210u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 620)));
    // 0x392214: 0x3406fff7  ori         $a2, $zero, 0xFFF7
    ctx->pc = 0x392214u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65527);
    // 0x392218: 0x86c3026e  lh          $v1, 0x26E($s6)
    ctx->pc = 0x392218u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 622)));
    // 0x39221c: 0x86c20272  lh          $v0, 0x272($s6)
    ctx->pc = 0x39221cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 626)));
    // 0x392220: 0x8ec9027c  lw          $t1, 0x27C($s6)
    ctx->pc = 0x392220u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 636)));
    // 0x392224: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x392224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x392228: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x392228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x39222c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x39222cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x392230: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x392230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x392234: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x392234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x392238: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x392238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x39223c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x39223cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x392240: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x392240u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x392244: 0x24850099  addiu       $a1, $a0, 0x99
    ctx->pc = 0x392244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 153));
    // 0x392248: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x392248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39224c: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x39224cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x392250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x392250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x392254: 0x24a70014  addiu       $a3, $a1, 0x14
    ctx->pc = 0x392254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x392258: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x392258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x39225c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x392260: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x392260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x392264: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x392264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x392268: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x392268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39226c: 0xc09c488  jal         func_271220
    ctx->pc = 0x39226Cu;
    SET_GPR_U32(ctx, 31, 0x392274u);
    ctx->pc = 0x392270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39226Cu;
    // 0x392270: 0x24480014  addiu       $t0, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271220u, 0x39226Cu, 0x392274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392274u;
label_392274:
    // 0x392274: 0x0  nop
    ctx->pc = 0x392274u;
    // NOP
label_392278:
    // 0x392278: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x392278u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39227c: 0x24120019  addiu       $s2, $zero, 0x19
    ctx->pc = 0x39227cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_392280:
    // 0x392280: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x392280u;
    {
        const bool branch_taken_0x392280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392280u;
        // 0x392284: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392280) {
            ctx->pc = 0x392428u;
            goto label_392428;
        }
    }
    ctx->pc = 0x392288u;
label_392288:
    // 0x392288: 0x86c20272  lh          $v0, 0x272($s6)
    ctx->pc = 0x392288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 626)));
    // 0x39228c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x39228cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x392290: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x392290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x392294: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x392294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x392298: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39229c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x39229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x3922a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3922a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3922a4: 0x90430016  lbu         $v1, 0x16($v0)
    ctx->pc = 0x3922a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x3922a8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3922A8u;
    {
        const bool branch_taken_0x3922a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3922ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922A8u;
        // 0x3922ac: 0x24460014  addiu       $a2, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3922a8) {
            ctx->pc = 0x3922BCu;
            goto label_3922bc;
        }
    }
    ctx->pc = 0x3922B0u;
    // 0x3922b0: 0x3c15004e  lui         $s5, 0x4E
    ctx->pc = 0x3922b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)78 << 16));
    // 0x3922b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3922B4u;
    {
        const bool branch_taken_0x3922b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3922B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922B4u;
        // 0x3922b8: 0x26b56b98  addiu       $s5, $s5, 0x6B98 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 27544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3922b4) {
            ctx->pc = 0x3922C4u;
            goto label_3922c4;
        }
    }
    ctx->pc = 0x3922BCu;
label_3922bc:
    // 0x3922bc: 0x3c15004e  lui         $s5, 0x4E
    ctx->pc = 0x3922bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)78 << 16));
    // 0x3922c0: 0x26b56ba4  addiu       $s5, $s5, 0x6BA4
    ctx->pc = 0x3922c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 27556));
label_3922c4:
    // 0x3922c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3922c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3922c8: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3922C8u;
    {
        const bool branch_taken_0x3922c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3922c8) {
            ctx->pc = 0x392318u;
            goto label_392318;
        }
    }
    ctx->pc = 0x3922D0u;
    // 0x3922d0: 0x86a30008  lh          $v1, 0x8($s5)
    ctx->pc = 0x3922d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3922d4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3922D4u;
    {
        const bool branch_taken_0x3922d4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3922D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922D4u;
        // 0x3922d8: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3922d4) {
            ctx->pc = 0x3922E4u;
            goto label_3922e4;
        }
    }
    ctx->pc = 0x3922DCu;
    // 0x3922dc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3922dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3922e0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3922e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3922e4:
    // 0x3922e4: 0x86a3000a  lh          $v1, 0xA($s5)
    ctx->pc = 0x3922e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x3922e8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x3922e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3922ec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3922ECu;
    {
        const bool branch_taken_0x3922ec = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3922F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922ECu;
        // 0x3922f0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3922ec) {
            ctx->pc = 0x3922FCu;
            goto label_3922fc;
        }
    }
    ctx->pc = 0x3922F4u;
    // 0x3922f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3922f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3922f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3922f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3922fc:
    // 0x3922fc: 0x94c80000  lhu         $t0, 0x0($a2)
    ctx->pc = 0x3922fcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x392300: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x392300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x392304: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x392304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x392308: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x392308u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39230c: 0x34478080  ori         $a3, $v0, 0x8080
    ctx->pc = 0x39230cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x392310: 0xc0ed8f8  jal         func_3B63E0
    ctx->pc = 0x392310u;
    SET_GPR_U32(ctx, 31, 0x392318u);
    ctx->pc = 0x392314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392310u;
    // 0x392314: 0x3406fff5  ori         $a2, $zero, 0xFFF5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63E0u, 0x392310u, 0x392318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392318u;
label_392318:
    // 0x392318: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x392318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x39231c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x39231cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x392320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392324: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x392324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392328: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x392328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39232c: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x39232cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x392330: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x392330u;
    SET_GPR_U32(ctx, 31, 0x392338u);
    ctx->pc = 0x392334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392330u;
    // 0x392334: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x392330u, 0x392338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392338u;
label_392338:
    // 0x392338: 0x26310016  addiu       $s1, $s1, 0x16
    ctx->pc = 0x392338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
    // 0x39233c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x39233cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x392340: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x392340u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x392344: 0x0  nop
    ctx->pc = 0x392344u;
    // NOP
label_392348:
    // 0x392348: 0x2a62000f  slti        $v0, $s3, 0xF
    ctx->pc = 0x392348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x39234c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x39234Cu;
    {
        const bool branch_taken_0x39234c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39234c) {
            ctx->pc = 0x392288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392288;
        }
    }
    ctx->pc = 0x392354u;
    // 0x392354: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x392354u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x392358: 0x2a82000a  slti        $v0, $s4, 0xA
    ctx->pc = 0x392358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x39235c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x39235Cu;
    {
        const bool branch_taken_0x39235c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39235Cu;
        // 0x392360: 0x26520016  addiu       $s2, $s2, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39235c) {
            ctx->pc = 0x392280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392280;
        }
    }
    ctx->pc = 0x392364u;
    // 0x392364: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x392364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x392368: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x392368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x39236c: 0x84287004  lh          $t0, 0x7004($at)
    ctx->pc = 0x39236cu;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E7004u));
    // 0x392370: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x392370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x392374: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x392374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x392378: 0x344a8080  ori         $t2, $v0, 0x8080
    ctx->pc = 0x392378u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x39237c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x39237cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x392380: 0x27a9008a  addiu       $t1, $sp, 0x8A
    ctx->pc = 0x392380u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 138));
    // 0x392384: 0x27b0008c  addiu       $s0, $sp, 0x8C
    ctx->pc = 0x392384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x392388: 0x27ab008e  addiu       $t3, $sp, 0x8E
    ctx->pc = 0x392388u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 142));
    // 0x39238c: 0x24847000  addiu       $a0, $a0, 0x7000
    ctx->pc = 0x39238cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x392390: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x392390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x392394: 0xc81023  subu        $v0, $a2, $t0
    ctx->pc = 0x392394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x392398: 0x84257008  lh          $a1, 0x7008($at)
    ctx->pc = 0x392398u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 28680)));
    // 0x39239c: 0xa7a20088  sh          $v0, 0x88($sp)
    ctx->pc = 0x39239cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 136), (uint16_t)GPR_U32(ctx, 2));
    // 0x3923a0: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x3923a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3923a4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x3923a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x3923a8: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x3923a8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3923ac: 0x84227006  lh          $v0, 0x7006($at)
    ctx->pc = 0x3923acu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E7006u));
    // 0x3923b0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3923b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3923b4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x3923b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x3923b8: 0x2442014a  addiu       $v0, $v0, 0x14A
    ctx->pc = 0x3923b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
    // 0x3923bc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3923bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3923c0: 0x8422700a  lh          $v0, 0x700A($at)
    ctx->pc = 0x3923c0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E700Au));
    // 0x3923c4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3923c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3923c8: 0x244200dc  addiu       $v0, $v0, 0xDC
    ctx->pc = 0x3923c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x3923cc: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x3923ccu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3923d0: 0x95260000  lhu         $a2, 0x0($t1)
    ctx->pc = 0x3923d0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3923d4: 0x97a50088  lhu         $a1, 0x88($sp)
    ctx->pc = 0x3923d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3923d8: 0x96080000  lhu         $t0, 0x0($s0)
    ctx->pc = 0x3923d8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3923dc: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x3923dcu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3923e0: 0xc09c720  jal         func_271C80
    ctx->pc = 0x3923E0u;
    SET_GPR_U32(ctx, 31, 0x3923E8u);
    ctx->pc = 0x3923E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3923E0u;
    // 0x3923e4: 0x3407fff5  ori         $a3, $zero, 0xFFF5 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271C80u, 0x3923E0u, 0x3923E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3923E8u;
label_3923e8:
    // 0x3923e8: 0x240201e9  addiu       $v0, $zero, 0x1E9
    ctx->pc = 0x3923e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 489));
    // 0x3923ec: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3923ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3923f0: 0xa7a20088  sh          $v0, 0x88($sp)
    ctx->pc = 0x3923f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 136), (uint16_t)GPR_U32(ctx, 2));
    // 0x3923f4: 0x26c6026e  addiu       $a2, $s6, 0x26E
    ctx->pc = 0x3923f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 622));
    // 0x3923f8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3923f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3923fc: 0x24841400  addiu       $a0, $a0, 0x1400
    ctx->pc = 0x3923fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    // 0x392400: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x392400u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x392404: 0xc0dc8a0  jal         func_372280
    ctx->pc = 0x392404u;
    SET_GPR_U32(ctx, 31, 0x39240Cu);
    ctx->pc = 0x392408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392404u;
    // 0x392408: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372280u, 0x392404u, 0x39240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39240Cu;
label_39240c:
    // 0x39240c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x39240cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x392410: 0x3405fff5  ori         $a1, $zero, 0xFFF5
    ctx->pc = 0x392410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x392414: 0xc0cec34  jal         func_33B0D0
    ctx->pc = 0x392414u;
    SET_GPR_U32(ctx, 31, 0x39241Cu);
    ctx->pc = 0x392418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392414u;
    // 0x392418: 0x248440c0  addiu       $a0, $a0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B0D0u, 0x392414u, 0x39241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39241Cu;
label_39241c:
    // 0x39241c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39241Cu;
    {
        const bool branch_taken_0x39241c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39241c) {
            ctx->pc = 0x392438u;
            goto label_392438;
        }
    }
    ctx->pc = 0x392424u;
    // 0x392424: 0x0  nop
    ctx->pc = 0x392424u;
    // NOP
label_392428:
    // 0x392428: 0x24110099  addiu       $s1, $zero, 0x99
    ctx->pc = 0x392428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x39242c: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x39242Cu;
    {
        const bool branch_taken_0x39242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39242Cu;
        // 0x392430: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39242c) {
            ctx->pc = 0x392348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392348;
        }
    }
    ctx->pc = 0x392434u;
    // 0x392434: 0x0  nop
    ctx->pc = 0x392434u;
    // NOP
label_392438:
    // 0x392438: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x392438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39243c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x39243cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x392440: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x392440u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x392444: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x392444u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x392448: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x392448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39244c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39244cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x392450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x392450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x392454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x392454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x392458: 0x3e00008  jr          $ra
    ctx->pc = 0x392458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392458u;
        // 0x39245c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392460u;
}
