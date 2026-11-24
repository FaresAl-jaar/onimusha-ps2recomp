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

// Function: sub_0034AA30
// Address: 0x34aa30 - 0x34b458
void sub_0034AA30_0x34aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034AA30_0x34aa30");
#endif

    switch (ctx->pc) {
        case 0x34aa90u: goto label_34aa90;
        case 0x34aaa0u: goto label_34aaa0;
        case 0x34aaf4u: goto label_34aaf4;
        case 0x34ab04u: goto label_34ab04;
        case 0x34ab14u: goto label_34ab14;
        case 0x34ab70u: goto label_34ab70;
        case 0x34ab80u: goto label_34ab80;
        case 0x34ac38u: goto label_34ac38;
        case 0x34ad20u: goto label_34ad20;
        case 0x34ad40u: goto label_34ad40;
        case 0x34ad78u: goto label_34ad78;
        case 0x34ada0u: goto label_34ada0;
        case 0x34adb0u: goto label_34adb0;
        case 0x34add0u: goto label_34add0;
        case 0x34ae04u: goto label_34ae04;
        case 0x34ae1cu: goto label_34ae1c;
        case 0x34ae80u: goto label_34ae80;
        case 0x34ae94u: goto label_34ae94;
        case 0x34aea4u: goto label_34aea4;
        case 0x34aeecu: goto label_34aeec;
        case 0x34af00u: goto label_34af00;
        case 0x34af10u: goto label_34af10;
        case 0x34af20u: goto label_34af20;
        case 0x34af98u: goto label_34af98;
        case 0x34afc4u: goto label_34afc4;
        case 0x34afe0u: goto label_34afe0;
        case 0x34b034u: goto label_34b034;
        case 0x34b04cu: goto label_34b04c;
        case 0x34b094u: goto label_34b094;
        case 0x34b0a4u: goto label_34b0a4;
        case 0x34b0b4u: goto label_34b0b4;
        case 0x34b110u: goto label_34b110;
        case 0x34b120u: goto label_34b120;
        case 0x34b148u: goto label_34b148;
        case 0x34b160u: goto label_34b160;
        case 0x34b218u: goto label_34b218;
        case 0x34b230u: goto label_34b230;
        case 0x34b248u: goto label_34b248;
        case 0x34b2a4u: goto label_34b2a4;
        case 0x34b2e4u: goto label_34b2e4;
        case 0x34b318u: goto label_34b318;
        case 0x34b328u: goto label_34b328;
        case 0x34b394u: goto label_34b394;
        case 0x34b440u: goto label_34b440;
        default: break;
    }

    ctx->pc = 0x34aa30u;

    // 0x34aa30: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x34aa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x34aa34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34aa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34aa38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x34aa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x34aa3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x34aa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x34aa40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34aa40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aa44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34aa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x34aa48: 0x90830521  lbu         $v1, 0x521($a0)
    ctx->pc = 0x34aa48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x34aa4c: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x34aa4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x34aa50: 0x1020027b  beqz        $at, . + 4 + (0x27B << 2)
    ctx->pc = 0x34AA50u;
    {
        const bool branch_taken_0x34aa50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA50u;
        // 0x34aa54: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aa50) {
            ctx->pc = 0x34B440u;
            goto label_34b440;
        }
    }
    ctx->pc = 0x34AA58u;
    // 0x34aa58: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x34aa58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x34aa5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34aa60: 0x24a5f640  addiu       $a1, $a1, -0x9C0
    ctx->pc = 0x34aa60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964800));
    // 0x34aa64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x34aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x34aa68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x34aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34aa6c: 0x600008  jr          $v1
    ctx->pc = 0x34AA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x34AA78u: goto label_34aa78;
            case 0x34AAB0u: goto label_34aab0;
            case 0x34AAD0u: goto label_34aad0;
            case 0x34AC30u: goto label_34ac30;
            case 0x34AC60u: goto label_34ac60;
            case 0x34AD10u: goto label_34ad10;
            case 0x34B070u: goto label_34b070;
            case 0x34B220u: goto label_34b220;
            case 0x34B308u: goto label_34b308;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AA6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x34AA74u;
    // 0x34aa74: 0x0  nop
    ctx->pc = 0x34aa74u;
    // NOP
label_34aa78:
    // 0x34aa78: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34AA78u;
    {
        const bool branch_taken_0x34aa78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aa78) {
            ctx->pc = 0x34AA98u;
            goto label_34aa98;
        }
    }
    ctx->pc = 0x34AA80u;
    // 0x34aa80: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x34aa80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x34aa84: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x34aa84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x34aa88: 0xc0aa780  jal         func_2A9E00
    ctx->pc = 0x34AA88u;
    SET_GPR_U32(ctx, 31, 0x34AA90u);
    ctx->pc = 0x34AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AA88u;
    // 0x34aa8c: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E00u, 0x34AA88u, 0x34AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AA90u;
label_34aa90:
    // 0x34aa90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34AA90u;
    {
        const bool branch_taken_0x34aa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA90u;
        // 0x34aa94: 0xae420560  sw          $v0, 0x560($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aa90) {
            ctx->pc = 0x34AAA0u;
            goto label_34aaa0;
        }
    }
    ctx->pc = 0x34AA98u;
label_34aa98:
    // 0x34aa98: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34AA98u;
    SET_GPR_U32(ctx, 31, 0x34AAA0u);
    ctx->pc = 0x34AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AA98u;
    // 0x34aa9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34AA98u, 0x34AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AAA0u;
label_34aaa0:
    // 0x34aaa0: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x34aaa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x34aaa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34aaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34aaa8: 0x10000265  b           . + 4 + (0x265 << 2)
    ctx->pc = 0x34AAA8u;
    {
        const bool branch_taken_0x34aaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AAA8u;
        // 0x34aaac: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aaa8) {
            ctx->pc = 0x34B440u;
            goto label_34b440;
        }
    }
    ctx->pc = 0x34AAB0u;
label_34aab0:
    // 0x34aab0: 0x86420526  lh          $v0, 0x526($s2)
    ctx->pc = 0x34aab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1318)));
    // 0x34aab4: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x34aab4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x34aab8: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x34aab8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x34aabc: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x34aabcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x34aac0: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x34aac0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x34aac4: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x34aac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x34aac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34aacc: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x34aaccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
label_34aad0:
    // 0x34aad0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x34aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x34aad4: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x34aad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x34aad8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x34aad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x34aadc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34aae0: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x34aae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x34aae4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x34aae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34aae8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34aae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34aaec: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x34AAECu;
    SET_GPR_U32(ctx, 31, 0x34AAF4u);
    ctx->pc = 0x34AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AAECu;
    // 0x34aaf0: 0x264600a0  addiu       $a2, $s2, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x34AAECu, 0x34AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AAF4u;
label_34aaf4:
    // 0x34aaf4: 0x8e460560  lw          $a2, 0x560($s2)
    ctx->pc = 0x34aaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    // 0x34aaf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34aaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aafc: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x34AAFCu;
    SET_GPR_U32(ctx, 31, 0x34AB04u);
    ctx->pc = 0x34AB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AAFCu;
    // 0x34ab00: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x34AAFCu, 0x34AB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB04u;
label_34ab04:
    // 0x34ab04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34AB04u;
    {
        const bool branch_taken_0x34ab04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB04u;
        // 0x34ab08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ab04) {
            ctx->pc = 0x34AB18u;
            goto label_34ab18;
        }
    }
    ctx->pc = 0x34AB0Cu;
    // 0x34ab0c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34AB0Cu;
    SET_GPR_U32(ctx, 31, 0x34AB14u);
    ctx->pc = 0x34AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AB0Cu;
    // 0x34ab10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34AB0Cu, 0x34AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB14u;
label_34ab14:
    // 0x34ab14: 0x0  nop
    ctx->pc = 0x34ab14u;
    // NOP
label_34ab18:
    // 0x34ab18: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34ab18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34ab1c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x34ab1cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x34ab20: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x34ab20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34ab24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34ab24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ab28: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x34ab28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34ab2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34ab2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ab30: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34ab30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34ab34: 0x7fa90090  sq          $t1, 0x90($sp)
    ctx->pc = 0x34ab34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 9));
    // 0x34ab38: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x34ab38u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x34ab3c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34ab3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34ab40: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x34ab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
    // 0x34ab44: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x34ab44u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x34ab48: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34ab48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34ab4c: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x34ab4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x34ab50: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x34ab50u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x34ab54: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34ab54u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34ab58: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x34ab58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34ab5c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34ab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34ab60: 0x92460568  lbu         $a2, 0x568($s2)
    ctx->pc = 0x34ab60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x34ab64: 0xc64c0564  lwc1        $f12, 0x564($s2)
    ctx->pc = 0x34ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34ab68: 0xc0c0900  jal         func_302400
    ctx->pc = 0x34AB68u;
    SET_GPR_U32(ctx, 31, 0x34AB70u);
    ctx->pc = 0x34AB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AB68u;
    // 0x34ab6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x34AB68u, 0x34AB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB70u;
label_34ab70:
    // 0x34ab70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34AB70u;
    {
        const bool branch_taken_0x34ab70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB70u;
        // 0x34ab74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ab70) {
            ctx->pc = 0x34AB80u;
            goto label_34ab80;
        }
    }
    ctx->pc = 0x34AB78u;
    // 0x34ab78: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34AB78u;
    SET_GPR_U32(ctx, 31, 0x34AB80u);
    ctx->pc = 0x34AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AB78u;
    // 0x34ab7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34AB78u, 0x34AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB80u;
label_34ab80:
    // 0x34ab80: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x34ab80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x34ab84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34AB84u;
    {
        const bool branch_taken_0x34ab84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB84u;
        // 0x34ab88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ab84) {
            ctx->pc = 0x34AB98u;
            goto label_34ab98;
        }
    }
    ctx->pc = 0x34AB8Cu;
    // 0x34ab8c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34AB8Cu;
    {
        const bool branch_taken_0x34ab8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ab8c) {
            ctx->pc = 0x34AC18u;
            goto label_34ac18;
        }
    }
    ctx->pc = 0x34AB94u;
    // 0x34ab94: 0x0  nop
    ctx->pc = 0x34ab94u;
    // NOP
label_34ab98:
    // 0x34ab98: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x34ab98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x34ab9c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x34ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x34aba0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34aba4: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x34aba4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34aba8: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x34aba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x34abac: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34ABACu;
    {
        const bool branch_taken_0x34abac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34abac) {
            ctx->pc = 0x34ABE8u;
            goto label_34abe8;
        }
    }
    ctx->pc = 0x34ABB4u;
    // 0x34abb4: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x34abb4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x34abb8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x34abb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x34abbc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34ABBCu;
    {
        const bool branch_taken_0x34abbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABBCu;
        // 0x34abc0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34abbc) {
            ctx->pc = 0x34AC10u;
            goto label_34ac10;
        }
    }
    ctx->pc = 0x34ABC4u;
    // 0x34abc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34abc8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x34abc8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34abcc: 0x0  nop
    ctx->pc = 0x34abccu;
    // NOP
    // 0x34abd0: 0x0  nop
    ctx->pc = 0x34abd0u;
    // NOP
    // 0x34abd4: 0x2010  mfhi        $a0
    ctx->pc = 0x34abd4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34abd8: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x34abd8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34abdc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34ABDCu;
    {
        const bool branch_taken_0x34abdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABDCu;
        // 0x34abe0: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34abdc) {
            ctx->pc = 0x34AC10u;
            goto label_34ac10;
        }
    }
    ctx->pc = 0x34ABE4u;
    // 0x34abe4: 0x0  nop
    ctx->pc = 0x34abe4u;
    // NOP
label_34abe8:
    // 0x34abe8: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x34abe8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x34abec: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x34abecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34abf0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34ABF0u;
    {
        const bool branch_taken_0x34abf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34abf0) {
            ctx->pc = 0x34AC10u;
            goto label_34ac10;
        }
    }
    ctx->pc = 0x34ABF8u;
    // 0x34abf8: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x34abf8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34abfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ac00: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x34ac00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ac04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34AC04u;
    {
        const bool branch_taken_0x34ac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC04u;
        // 0x34ac08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac04) {
            ctx->pc = 0x34AC18u;
            goto label_34ac18;
        }
    }
    ctx->pc = 0x34AC0Cu;
    // 0x34ac0c: 0x0  nop
    ctx->pc = 0x34ac0cu;
    // NOP
label_34ac10:
    // 0x34ac10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ac14: 0x0  nop
    ctx->pc = 0x34ac14u;
    // NOP
label_34ac18:
    // 0x34ac18: 0x14600209  bnez        $v1, . + 4 + (0x209 << 2)
    ctx->pc = 0x34AC18u;
    {
        const bool branch_taken_0x34ac18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ac18) {
            ctx->pc = 0x34B440u;
            goto label_34b440;
        }
    }
    ctx->pc = 0x34AC20u;
    // 0x34ac20: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x34ac20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x34ac24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34ac28: 0x10000205  b           . + 4 + (0x205 << 2)
    ctx->pc = 0x34AC28u;
    {
        const bool branch_taken_0x34ac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC28u;
        // 0x34ac2c: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac28) {
            ctx->pc = 0x34B440u;
            goto label_34b440;
        }
    }
    ctx->pc = 0x34AC30u;
label_34ac30:
    // 0x34ac30: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x34AC30u;
    SET_GPR_U32(ctx, 31, 0x34AC38u);
    ctx->pc = 0x34AC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AC30u;
    // 0x34ac34: 0x8e440560  lw          $a0, 0x560($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x34AC30u, 0x34AC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AC38u;
label_34ac38:
    // 0x34ac38: 0xae400560  sw          $zero, 0x560($s2)
    ctx->pc = 0x34ac38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1376), GPR_U32(ctx, 0));
    // 0x34ac3c: 0x86430528  lh          $v1, 0x528($s2)
    ctx->pc = 0x34ac3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1320)));
    // 0x34ac40: 0xa6430512  sh          $v1, 0x512($s2)
    ctx->pc = 0x34ac40u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x34ac44: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x34ac44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x34ac48: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x34ac48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ac4c: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x34ac4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ac50: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x34ac50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x34ac54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34ac58: 0xa2430521  sb          $v1, 0x521($s2)
    ctx->pc = 0x34ac58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ac5c: 0x0  nop
    ctx->pc = 0x34ac5cu;
    // NOP
label_34ac60:
    // 0x34ac60: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x34ac60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x34ac64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34AC64u;
    {
        const bool branch_taken_0x34ac64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC64u;
        // 0x34ac68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac64) {
            ctx->pc = 0x34AC78u;
            goto label_34ac78;
        }
    }
    ctx->pc = 0x34AC6Cu;
    // 0x34ac6c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34AC6Cu;
    {
        const bool branch_taken_0x34ac6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ac6c) {
            ctx->pc = 0x34ACF8u;
            goto label_34acf8;
        }
    }
    ctx->pc = 0x34AC74u;
    // 0x34ac74: 0x0  nop
    ctx->pc = 0x34ac74u;
    // NOP
label_34ac78:
    // 0x34ac78: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x34ac78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x34ac7c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x34ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x34ac80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34ac84: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x34ac84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34ac88: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x34ac88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x34ac8c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34AC8Cu;
    {
        const bool branch_taken_0x34ac8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34ac8c) {
            ctx->pc = 0x34ACC8u;
            goto label_34acc8;
        }
    }
    ctx->pc = 0x34AC94u;
    // 0x34ac94: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x34ac94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x34ac98: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x34ac98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x34ac9c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34AC9Cu;
    {
        const bool branch_taken_0x34ac9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC9Cu;
        // 0x34aca0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac9c) {
            ctx->pc = 0x34ACF0u;
            goto label_34acf0;
        }
    }
    ctx->pc = 0x34ACA4u;
    // 0x34aca4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34aca8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x34aca8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34acac: 0x0  nop
    ctx->pc = 0x34acacu;
    // NOP
    // 0x34acb0: 0x0  nop
    ctx->pc = 0x34acb0u;
    // NOP
    // 0x34acb4: 0x2010  mfhi        $a0
    ctx->pc = 0x34acb4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34acb8: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x34acb8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34acbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34ACBCu;
    {
        const bool branch_taken_0x34acbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ACBCu;
        // 0x34acc0: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34acbc) {
            ctx->pc = 0x34ACF0u;
            goto label_34acf0;
        }
    }
    ctx->pc = 0x34ACC4u;
    // 0x34acc4: 0x0  nop
    ctx->pc = 0x34acc4u;
    // NOP
label_34acc8:
    // 0x34acc8: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x34acc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x34accc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x34acccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34acd0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34ACD0u;
    {
        const bool branch_taken_0x34acd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34acd0) {
            ctx->pc = 0x34ACF0u;
            goto label_34acf0;
        }
    }
    ctx->pc = 0x34ACD8u;
    // 0x34acd8: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x34acd8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34acdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ace0: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x34ace0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ace4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34ACE4u;
    {
        const bool branch_taken_0x34ace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ACE4u;
        // 0x34ace8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ace4) {
            ctx->pc = 0x34ACF8u;
            goto label_34acf8;
        }
    }
    ctx->pc = 0x34ACECu;
    // 0x34acec: 0x0  nop
    ctx->pc = 0x34acecu;
    // NOP
label_34acf0:
    // 0x34acf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34acf4: 0x0  nop
    ctx->pc = 0x34acf4u;
    // NOP
label_34acf8:
    // 0x34acf8: 0x146001d1  bnez        $v1, . + 4 + (0x1D1 << 2)
    ctx->pc = 0x34ACF8u;
    {
        const bool branch_taken_0x34acf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34acf8) {
            ctx->pc = 0x34B440u;
            goto label_34b440;
        }
    }
    ctx->pc = 0x34AD00u;
    // 0x34ad00: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x34ad00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x34ad04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34ad08: 0x100001cd  b           . + 4 + (0x1CD << 2)
    ctx->pc = 0x34AD08u;
    {
        const bool branch_taken_0x34ad08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD08u;
        // 0x34ad0c: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ad08) {
            ctx->pc = 0x34B440u;
            goto label_34b440;
        }
    }
    ctx->pc = 0x34AD10u;
label_34ad10:
    // 0x34ad10: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34AD10u;
    {
        const bool branch_taken_0x34ad10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x34AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD10u;
        // 0x34ad14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ad10) {
            ctx->pc = 0x34AD28u;
            goto label_34ad28;
        }
    }
    ctx->pc = 0x34AD18u;
    // 0x34ad18: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34AD18u;
    SET_GPR_U32(ctx, 31, 0x34AD20u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34AD18u, 0x34AD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD20u;
label_34ad20:
    // 0x34ad20: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x34AD20u;
    {
        const bool branch_taken_0x34ad20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ad20) {
            ctx->pc = 0x34B440u;
            goto label_34b440;
        }
    }
    ctx->pc = 0x34AD28u;
label_34ad28:
    // 0x34ad28: 0x8e450518  lw          $a1, 0x518($s2)
    ctx->pc = 0x34ad28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x34ad2c: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x34AD2Cu;
    {
        const bool branch_taken_0x34ad2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD2Cu;
        // 0x34ad30: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ad2c) {
            ctx->pc = 0x34AD88u;
            goto label_34ad88;
        }
    }
    ctx->pc = 0x34AD34u;
    // 0x34ad34: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x34ad34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ad38: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x34AD38u;
    SET_GPR_U32(ctx, 31, 0x34AD40u);
    ctx->pc = 0x34AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AD38u;
    // 0x34ad3c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x34AD38u, 0x34AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD40u;
label_34ad40:
    // 0x34ad40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34AD40u;
    {
        const bool branch_taken_0x34ad40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ad40) {
            ctx->pc = 0x34AD50u;
            goto label_34ad50;
        }
    }
    ctx->pc = 0x34AD48u;
    // 0x34ad48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34ad48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ad4c: 0x0  nop
    ctx->pc = 0x34ad4cu;
    // NOP
label_34ad50:
    // 0x34ad50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34AD50u;
    {
        const bool branch_taken_0x34ad50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ad50) {
            ctx->pc = 0x34AD70u;
            goto label_34ad70;
        }
    }
    ctx->pc = 0x34AD58u;
    // 0x34ad58: 0x8c4229c0  lw          $v0, 0x29C0($v0)
    ctx->pc = 0x34ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x34ad5c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x34ad5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ad60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34AD60u;
    {
        const bool branch_taken_0x34ad60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ad60) {
            ctx->pc = 0x34AD70u;
            goto label_34ad70;
        }
    }
    ctx->pc = 0x34AD68u;
    // 0x34ad68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34ad68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ad6c: 0x0  nop
    ctx->pc = 0x34ad6cu;
    // NOP
label_34ad70:
    // 0x34ad70: 0xc097864  jal         func_25E190
    ctx->pc = 0x34AD70u;
    SET_GPR_U32(ctx, 31, 0x34AD78u);
    ctx->pc = 0x34AD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AD70u;
    // 0x34ad74: 0x8e440518  lw          $a0, 0x518($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x34AD70u, 0x34AD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD78u;
label_34ad78:
    // 0x34ad78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34AD78u;
    {
        const bool branch_taken_0x34ad78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ad78) {
            ctx->pc = 0x34AD90u;
            goto label_34ad90;
        }
    }
    ctx->pc = 0x34AD80u;
    // 0x34ad80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34AD80u;
    {
        const bool branch_taken_0x34ad80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD80u;
        // 0x34ad84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ad80) {
            ctx->pc = 0x34AD90u;
            goto label_34ad90;
        }
    }
    ctx->pc = 0x34AD88u;
label_34ad88:
    // 0x34ad88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34ad88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ad8c: 0x0  nop
    ctx->pc = 0x34ad8cu;
    // NOP
label_34ad90:
    // 0x34ad90: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x34ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x34ad94: 0x27a500d4  addiu       $a1, $sp, 0xD4
    ctx->pc = 0x34ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x34ad98: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x34AD98u;
    SET_GPR_U32(ctx, 31, 0x34ADA0u);
    ctx->pc = 0x34AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AD98u;
    // 0x34ad9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x34AD98u, 0x34ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ADA0u;
label_34ada0:
    // 0x34ada0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34ADA0u;
    {
        const bool branch_taken_0x34ada0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ADA0u;
        // 0x34ada4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ada0) {
            ctx->pc = 0x34ADB8u;
            goto label_34adb8;
        }
    }
    ctx->pc = 0x34ADA8u;
    // 0x34ada8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34ADA8u;
    SET_GPR_U32(ctx, 31, 0x34ADB0u);
    ctx->pc = 0x34ADACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ADA8u;
    // 0x34adac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34ADA8u, 0x34ADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ADB0u;
label_34adb0:
    // 0x34adb0: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x34ADB0u;
    {
        const bool branch_taken_0x34adb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34adb0) {
            ctx->pc = 0x34B440u;
            goto label_34b440;
        }
    }
    ctx->pc = 0x34ADB8u;
label_34adb8:
    // 0x34adb8: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x34ADB8u;
    {
        const bool branch_taken_0x34adb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34adb8) {
            ctx->pc = 0x34AEB0u;
            goto label_34aeb0;
        }
    }
    ctx->pc = 0x34ADC0u;
    // 0x34adc0: 0x8e450518  lw          $a1, 0x518($s2)
    ctx->pc = 0x34adc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x34adc4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x34adc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x34adc8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x34ADC8u;
    SET_GPR_U32(ctx, 31, 0x34ADD0u);
    ctx->pc = 0x34ADCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ADC8u;
    // 0x34adcc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x34ADC8u, 0x34ADD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ADD0u;
label_34add0:
    // 0x34add0: 0x90430733  lbu         $v1, 0x733($v0)
    ctx->pc = 0x34add0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1843)));
    // 0x34add4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34add4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34add8: 0x8c46004c  lw          $a2, 0x4C($v0)
    ctx->pc = 0x34add8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x34addc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34addcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34ade0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x34ade0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34ade4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x34ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x34ade8: 0x90a50730  lbu         $a1, 0x730($a1)
    ctx->pc = 0x34ade8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1840)));
    // 0x34adec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34adecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34adf0: 0x8cc30094  lw          $v1, 0x94($a2)
    ctx->pc = 0x34adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x34adf4: 0x24460700  addiu       $a2, $v0, 0x700
    ctx->pc = 0x34adf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x34adf8: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x34adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x34adfc: 0xc041442  jal         func_105108
    ctx->pc = 0x34ADFCu;
    SET_GPR_U32(ctx, 31, 0x34AE04u);
    ctx->pc = 0x34AE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ADFCu;
    // 0x34ae00: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x34ADFCu, 0x34AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE04u;
label_34ae04:
    // 0x34ae04: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x34ae04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34ae08: 0x26440550  addiu       $a0, $s2, 0x550
    ctx->pc = 0x34ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x34ae0c: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x34ae0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x34ae10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34ae10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ae14: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x34AE14u;
    SET_GPR_U32(ctx, 31, 0x34AE1Cu);
    ctx->pc = 0x34AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AE14u;
    // 0x34ae18: 0x7e420550  sq          $v0, 0x550($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 1360), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x34AE14u, 0x34AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE1Cu;
label_34ae1c:
    // 0x34ae1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34AE1Cu;
    {
        const bool branch_taken_0x34ae1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ae1c) {
            ctx->pc = 0x34AE30u;
            goto label_34ae30;
        }
    }
    ctx->pc = 0x34AE24u;
    // 0x34ae24: 0xc6400554  lwc1        $f0, 0x554($s2)
    ctx->pc = 0x34ae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ae28: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x34ae28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x34ae2c: 0x0  nop
    ctx->pc = 0x34ae2cu;
    // NOP
label_34ae30:
    // 0x34ae30: 0x92440569  lbu         $a0, 0x569($s2)
    ctx->pc = 0x34ae30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1385)));
    // 0x34ae34: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x34ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x34ae38: 0x2442f5f0  addiu       $v0, $v0, -0xA10
    ctx->pc = 0x34ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964720));
    // 0x34ae3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34ae40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34ae44: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x34ae44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34ae48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34ae4c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x34ae4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ae50: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x34AE50u;
    {
        const bool branch_taken_0x34ae50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE50u;
        // 0x34ae54: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae50) {
            ctx->pc = 0x34AF30u;
            goto label_34af30;
        }
    }
    ctx->pc = 0x34AE58u;
    // 0x34ae58: 0x860300c2  lh          $v1, 0xC2($s0)
    ctx->pc = 0x34ae58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x34ae5c: 0x2442f5f6  addiu       $v0, $v0, -0xA0A
    ctx->pc = 0x34ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964726));
    // 0x34ae60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34ae64: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x34ae64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ae68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x34ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34ae6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34ae70: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x34ae70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x34ae74: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x34ae74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x34ae78: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x34AE78u;
    SET_GPR_U32(ctx, 31, 0x34AE80u);
    ctx->pc = 0x34AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AE78u;
    // 0x34ae7c: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x34AE78u, 0x34AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE80u;
label_34ae80:
    // 0x34ae80: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x34ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x34ae84: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x34ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34ae88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34ae88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34ae8c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x34AE8Cu;
    SET_GPR_U32(ctx, 31, 0x34AE94u);
    ctx->pc = 0x34AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AE8Cu;
    // 0x34ae90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x34AE8Cu, 0x34AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE94u;
label_34ae94:
    // 0x34ae94: 0x26440550  addiu       $a0, $s2, 0x550
    ctx->pc = 0x34ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x34ae98: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x34ae98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34ae9c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x34AE9Cu;
    SET_GPR_U32(ctx, 31, 0x34AEA4u);
    ctx->pc = 0x34AEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AE9Cu;
    // 0x34aea0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x34AE9Cu, 0x34AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AEA4u;
label_34aea4:
    // 0x34aea4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34AEA4u;
    {
        const bool branch_taken_0x34aea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aea4) {
            ctx->pc = 0x34AF30u;
            goto label_34af30;
        }
    }
    ctx->pc = 0x34AEACu;
    // 0x34aeac: 0x0  nop
    ctx->pc = 0x34aeacu;
    // NOP
label_34aeb0:
    // 0x34aeb0: 0x92460569  lbu         $a2, 0x569($s2)
    ctx->pc = 0x34aeb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1385)));
    // 0x34aeb4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x34aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x34aeb8: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x34aeb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x34aebc: 0x2463f5f8  addiu       $v1, $v1, -0xA08
    ctx->pc = 0x34aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964728));
    // 0x34aec0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x34aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34aec4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x34aec4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x34aec8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x34aec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x34aecc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x34aeccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x34aed0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x34aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x34aed4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x34aed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34aed8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34aedc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x34aedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x34aee0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x34aee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x34aee4: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x34AEE4u;
    SET_GPR_U32(ctx, 31, 0x34AEECu);
    ctx->pc = 0x34AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AEE4u;
    // 0x34aee8: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x34AEE4u, 0x34AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AEECu;
label_34aeec:
    // 0x34aeec: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x34aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x34aef0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x34aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34aef4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34aef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34aef8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x34AEF8u;
    SET_GPR_U32(ctx, 31, 0x34AF00u);
    ctx->pc = 0x34AEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AEF8u;
    // 0x34aefc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x34AEF8u, 0x34AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF00u;
label_34af00:
    // 0x34af00: 0x26440550  addiu       $a0, $s2, 0x550
    ctx->pc = 0x34af00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x34af04: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x34af04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34af08: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x34AF08u;
    SET_GPR_U32(ctx, 31, 0x34AF10u);
    ctx->pc = 0x34AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AF08u;
    // 0x34af0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x34AF08u, 0x34AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF10u;
label_34af10:
    // 0x34af10: 0x26440550  addiu       $a0, $s2, 0x550
    ctx->pc = 0x34af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x34af14: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x34af14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x34af18: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x34AF18u;
    SET_GPR_U32(ctx, 31, 0x34AF20u);
    ctx->pc = 0x34AF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AF18u;
    // 0x34af1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x34AF18u, 0x34AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF20u;
label_34af20:
    // 0x34af20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34AF20u;
    {
        const bool branch_taken_0x34af20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34af20) {
            ctx->pc = 0x34AF30u;
            goto label_34af30;
        }
    }
    ctx->pc = 0x34AF28u;
    // 0x34af28: 0xc6400554  lwc1        $f0, 0x554($s2)
    ctx->pc = 0x34af28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34af2c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x34af2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_34af30:
    // 0x34af30: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x34af30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34af34: 0xe6400554  swc1        $f0, 0x554($s2)
    ctx->pc = 0x34af34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1364), bits); }
    // 0x34af38: 0xc6400550  lwc1        $f0, 0x550($s2)
    ctx->pc = 0x34af38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34af3c: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x34af3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x34af40: 0xc6400558  lwc1        $f0, 0x558($s2)
    ctx->pc = 0x34af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34af44: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x34af44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x34af48: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x34af48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34af4c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x34af4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34af50: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x34af50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34af54: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x34AF54u;
    {
        const bool branch_taken_0x34af54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF54u;
        // 0x34af58: 0x3c024461  lui         $v0, 0x4461 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34af54) {
            ctx->pc = 0x34AF70u;
            goto label_34af70;
        }
    }
    ctx->pc = 0x34AF5Cu;
    // 0x34af5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34af5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34af60: 0x0  nop
    ctx->pc = 0x34af60u;
    // NOP
    // 0x34af64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34af64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34af68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34AF68u;
    {
        const bool branch_taken_0x34af68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF68u;
        // 0x34af6c: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34af68) {
            ctx->pc = 0x34AF88u;
            goto label_34af88;
        }
    }
    ctx->pc = 0x34AF70u;
label_34af70:
    // 0x34af70: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x34af70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x34af74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34af74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34af78: 0x0  nop
    ctx->pc = 0x34af78u;
    // NOP
    // 0x34af7c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x34af7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x34af80: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x34af80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x34af84: 0x0  nop
    ctx->pc = 0x34af84u;
    // NOP
label_34af88:
    // 0x34af88: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x34af88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x34af8c: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x34af8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x34af90: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x34AF90u;
    SET_GPR_U32(ctx, 31, 0x34AF98u);
    ctx->pc = 0x34AF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AF90u;
    // 0x34af94: 0x24a55c70  addiu       $a1, $a1, 0x5C70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x34AF90u, 0x34AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF98u;
label_34af98:
    // 0x34af98: 0x92460569  lbu         $a2, 0x569($s2)
    ctx->pc = 0x34af98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1385)));
    // 0x34af9c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x34af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x34afa0: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x34afa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x34afa4: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x34afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
    // 0x34afa8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x34afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x34afac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x34afacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x34afb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34afb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34afb8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x34afb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34afbc: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x34AFBCu;
    SET_GPR_U32(ctx, 31, 0x34AFC4u);
    ctx->pc = 0x34AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AFBCu;
    // 0x34afc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x34AFBCu, 0x34AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AFC4u;
label_34afc4:
    // 0x34afc4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x34afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x34afc8: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x34AFC8u;
    {
        const bool branch_taken_0x34afc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AFC8u;
        // 0x34afcc: 0xa2420568  sb          $v0, 0x568($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34afc8) {
            ctx->pc = 0x34B040u;
            goto label_34b040;
        }
    }
    ctx->pc = 0x34AFD0u;
    // 0x34afd0: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x34afd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x34afd4: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x34afd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x34afd8: 0xc0aa780  jal         func_2A9E00
    ctx->pc = 0x34AFD8u;
    SET_GPR_U32(ctx, 31, 0x34AFE0u);
    ctx->pc = 0x34AFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AFD8u;
    // 0x34afdc: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E00u, 0x34AFD8u, 0x34AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AFE0u;
label_34afe0:
    // 0x34afe0: 0xae420560  sw          $v0, 0x560($s2)
    ctx->pc = 0x34afe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1376), GPR_U32(ctx, 2));
    // 0x34afe4: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x34afe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x34afe8: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x34afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x34afec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34AFECu;
    {
        const bool branch_taken_0x34afec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34afec) {
            ctx->pc = 0x34B000u;
            goto label_34b000;
        }
    }
    ctx->pc = 0x34AFF4u;
    // 0x34aff4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x34AFF4u;
    {
        const bool branch_taken_0x34aff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aff4) {
            ctx->pc = 0x34B050u;
            goto label_34b050;
        }
    }
    ctx->pc = 0x34AFFCu;
    // 0x34affc: 0x0  nop
    ctx->pc = 0x34affcu;
    // NOP
label_34b000:
    // 0x34b000: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x34b000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x34b004: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x34b004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x34b008: 0x3c023500  lui         $v0, 0x3500
    ctx->pc = 0x34b008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13568 << 16));
    // 0x34b00c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x34b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x34b010: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x34b010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x34b014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34b014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b018: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x34b018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x34b01c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34b01cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b020: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34b020u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b024: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x34b024u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b028: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x34b028u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b02c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x34B02Cu;
    SET_GPR_U32(ctx, 31, 0x34B034u);
    ctx->pc = 0x34B030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B02Cu;
    // 0x34b030: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x34B02Cu, 0x34B034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B034u;
label_34b034:
    // 0x34b034: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34B034u;
    {
        const bool branch_taken_0x34b034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b034) {
            ctx->pc = 0x34B050u;
            goto label_34b050;
        }
    }
    ctx->pc = 0x34B03Cu;
    // 0x34b03c: 0x0  nop
    ctx->pc = 0x34b03cu;
    // NOP
label_34b040:
    // 0x34b040: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34b040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b044: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34B044u;
    SET_GPR_U32(ctx, 31, 0x34B04Cu);
    ctx->pc = 0x34B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B044u;
    // 0x34b048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34B044u, 0x34B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B04Cu;
label_34b04c:
    // 0x34b04c: 0x0  nop
    ctx->pc = 0x34b04cu;
    // NOP
label_34b050:
    // 0x34b050: 0x8642052a  lh          $v0, 0x52A($s2)
    ctx->pc = 0x34b050u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1322)));
    // 0x34b054: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x34b054u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x34b058: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x34b058u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x34b05c: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x34b05cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b060: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x34b060u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b064: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x34b064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x34b068: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34b068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34b06c: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x34b06cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
label_34b070:
    // 0x34b070: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x34b070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x34b074: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x34b074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x34b078: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x34b078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x34b07c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34b080: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x34b080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x34b084: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x34b084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34b088: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34b088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34b08c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x34B08Cu;
    SET_GPR_U32(ctx, 31, 0x34B094u);
    ctx->pc = 0x34B090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B08Cu;
    // 0x34b090: 0x264600a0  addiu       $a2, $s2, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x34B08Cu, 0x34B094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B094u;
label_34b094:
    // 0x34b094: 0x8e460560  lw          $a2, 0x560($s2)
    ctx->pc = 0x34b094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    // 0x34b098: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34b098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b09c: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x34B09Cu;
    SET_GPR_U32(ctx, 31, 0x34B0A4u);
    ctx->pc = 0x34B0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B09Cu;
    // 0x34b0a0: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x34B09Cu, 0x34B0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B0A4u;
label_34b0a4:
    // 0x34b0a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34B0A4u;
    {
        const bool branch_taken_0x34b0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B0A4u;
        // 0x34b0a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b0a4) {
            ctx->pc = 0x34B0B8u;
            goto label_34b0b8;
        }
    }
    ctx->pc = 0x34B0ACu;
    // 0x34b0ac: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34B0ACu;
    SET_GPR_U32(ctx, 31, 0x34B0B4u);
    ctx->pc = 0x34B0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B0ACu;
    // 0x34b0b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34B0ACu, 0x34B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B0B4u;
label_34b0b4:
    // 0x34b0b4: 0x0  nop
    ctx->pc = 0x34b0b4u;
    // NOP
label_34b0b8:
    // 0x34b0b8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34b0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34b0bc: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x34b0bcu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x34b0c0: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x34b0c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34b0c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34b0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b0c8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x34b0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34b0cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34b0ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b0d0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34b0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34b0d4: 0x7fa90090  sq          $t1, 0x90($sp)
    ctx->pc = 0x34b0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 9));
    // 0x34b0d8: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x34b0d8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x34b0dc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34b0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34b0e0: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x34b0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
    // 0x34b0e4: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x34b0e4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x34b0e8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34b0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34b0ec: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x34b0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x34b0f0: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x34b0f0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x34b0f4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34b0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34b0f8: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x34b0f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34b0fc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34b0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34b100: 0x92460568  lbu         $a2, 0x568($s2)
    ctx->pc = 0x34b100u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x34b104: 0xc64c0564  lwc1        $f12, 0x564($s2)
    ctx->pc = 0x34b104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34b108: 0xc0c0900  jal         func_302400
    ctx->pc = 0x34B108u;
    SET_GPR_U32(ctx, 31, 0x34B110u);
    ctx->pc = 0x34B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B108u;
    // 0x34b10c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x34B108u, 0x34B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B110u;
label_34b110:
    // 0x34b110: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B110u;
    {
        const bool branch_taken_0x34b110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B110u;
        // 0x34b114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b110) {
            ctx->pc = 0x34B120u;
            goto label_34b120;
        }
    }
    ctx->pc = 0x34B118u;
    // 0x34b118: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34B118u;
    SET_GPR_U32(ctx, 31, 0x34B120u);
    ctx->pc = 0x34B11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B118u;
    // 0x34b11c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34B118u, 0x34B120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B120u;
label_34b120:
    // 0x34b120: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x34b120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x34b124: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x34b124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x34b128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34b128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b12c: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x34b12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x34b130: 0x26460080  addiu       $a2, $s2, 0x80
    ctx->pc = 0x34b130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x34b134: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x34b134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34b138: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x34b138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34b13c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x34b13cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b140: 0xc0c0980  jal         func_302600
    ctx->pc = 0x34B140u;
    SET_GPR_U32(ctx, 31, 0x34B148u);
    ctx->pc = 0x34B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B140u;
    // 0x34b144: 0x27aa00dc  addiu       $t2, $sp, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x34B140u, 0x34B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B148u;
label_34b148:
    // 0x34b148: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34B148u;
    {
        const bool branch_taken_0x34b148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b148) {
            ctx->pc = 0x34B170u;
            goto label_34b170;
        }
    }
    ctx->pc = 0x34B150u;
    // 0x34b150: 0x8e460560  lw          $a2, 0x560($s2)
    ctx->pc = 0x34b150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    // 0x34b154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34b154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b158: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x34B158u;
    SET_GPR_U32(ctx, 31, 0x34B160u);
    ctx->pc = 0x34B15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B158u;
    // 0x34b15c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x34B158u, 0x34B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B160u;
label_34b160:
    // 0x34b160: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x34b160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x34b164: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34b164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34b168: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x34B168u;
    {
        const bool branch_taken_0x34b168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B168u;
        // 0x34b16c: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b168) {
            ctx->pc = 0x34B440u;
            goto label_34b440;
        }
    }
    ctx->pc = 0x34B170u;
label_34b170:
    // 0x34b170: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x34b170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x34b174: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34B174u;
    {
        const bool branch_taken_0x34b174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B174u;
        // 0x34b178: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b174) {
            ctx->pc = 0x34B188u;
            goto label_34b188;
        }
    }
    ctx->pc = 0x34B17Cu;
    // 0x34b17c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34B17Cu;
    {
        const bool branch_taken_0x34b17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b17c) {
            ctx->pc = 0x34B208u;
            goto label_34b208;
        }
    }
    ctx->pc = 0x34B184u;
    // 0x34b184: 0x0  nop
    ctx->pc = 0x34b184u;
    // NOP
label_34b188:
    // 0x34b188: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x34b188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x34b18c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x34b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x34b190: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34b190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34b194: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x34b194u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34b198: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x34b198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x34b19c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34B19Cu;
    {
        const bool branch_taken_0x34b19c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34b19c) {
            ctx->pc = 0x34B1D8u;
            goto label_34b1d8;
        }
    }
    ctx->pc = 0x34B1A4u;
    // 0x34b1a4: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x34b1a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x34b1a8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x34b1a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x34b1ac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34B1ACu;
    {
        const bool branch_taken_0x34b1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B1ACu;
        // 0x34b1b0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b1ac) {
            ctx->pc = 0x34B200u;
            goto label_34b200;
        }
    }
    ctx->pc = 0x34B1B4u;
    // 0x34b1b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b1b8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x34b1b8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34b1bc: 0x0  nop
    ctx->pc = 0x34b1bcu;
    // NOP
    // 0x34b1c0: 0x0  nop
    ctx->pc = 0x34b1c0u;
    // NOP
    // 0x34b1c4: 0x2010  mfhi        $a0
    ctx->pc = 0x34b1c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34b1c8: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x34b1c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34b1cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34B1CCu;
    {
        const bool branch_taken_0x34b1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B1CCu;
        // 0x34b1d0: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b1cc) {
            ctx->pc = 0x34B200u;
            goto label_34b200;
        }
    }
    ctx->pc = 0x34B1D4u;
    // 0x34b1d4: 0x0  nop
    ctx->pc = 0x34b1d4u;
    // NOP
label_34b1d8:
    // 0x34b1d8: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x34b1d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x34b1dc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x34b1dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34b1e0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34B1E0u;
    {
        const bool branch_taken_0x34b1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b1e0) {
            ctx->pc = 0x34B200u;
            goto label_34b200;
        }
    }
    ctx->pc = 0x34B1E8u;
    // 0x34b1e8: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x34b1e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34b1ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b1f0: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x34b1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b1f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34B1F4u;
    {
        const bool branch_taken_0x34b1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B1F4u;
        // 0x34b1f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b1f4) {
            ctx->pc = 0x34B208u;
            goto label_34b208;
        }
    }
    ctx->pc = 0x34B1FCu;
    // 0x34b1fc: 0x0  nop
    ctx->pc = 0x34b1fcu;
    // NOP
label_34b200:
    // 0x34b200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b204: 0x0  nop
    ctx->pc = 0x34b204u;
    // NOP
label_34b208:
    // 0x34b208: 0x1460008d  bnez        $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x34B208u;
    {
        const bool branch_taken_0x34b208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B208u;
        // 0x34b20c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b208) {
            ctx->pc = 0x34B440u;
            goto label_34b440;
        }
    }
    ctx->pc = 0x34B210u;
    // 0x34b210: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34B210u;
    SET_GPR_U32(ctx, 31, 0x34B218u);
    ctx->pc = 0x34B214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B210u;
    // 0x34b214: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34B210u, 0x34B218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B218u;
label_34b218:
    // 0x34b218: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x34B218u;
    {
        const bool branch_taken_0x34b218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b218) {
            ctx->pc = 0x34B440u;
            goto label_34b440;
        }
    }
    ctx->pc = 0x34B220u;
label_34b220:
    // 0x34b220: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x34b220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34b224: 0xa2420568  sb          $v0, 0x568($s2)
    ctx->pc = 0x34b224u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1384), (uint8_t)GPR_U32(ctx, 2));
    // 0x34b228: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x34B228u;
    SET_GPR_U32(ctx, 31, 0x34B230u);
    ctx->pc = 0x34B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B228u;
    // 0x34b22c: 0x8e440560  lw          $a0, 0x560($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x34B228u, 0x34B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B230u;
label_34b230:
    // 0x34b230: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x34B230u;
    {
        const bool branch_taken_0x34b230 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B230u;
        // 0x34b234: 0xae400560  sw          $zero, 0x560($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b230) {
            ctx->pc = 0x34B2E8u;
            goto label_34b2e8;
        }
    }
    ctx->pc = 0x34B238u;
    // 0x34b238: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x34b238u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x34b23c: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x34b23cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x34b240: 0xc0a99c8  jal         func_2A6720
    ctx->pc = 0x34B240u;
    SET_GPR_U32(ctx, 31, 0x34B248u);
    ctx->pc = 0x34B244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B240u;
    // 0x34b244: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6720u, 0x34B240u, 0x34B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B248u;
label_34b248:
    // 0x34b248: 0xae420560  sw          $v0, 0x560($s2)
    ctx->pc = 0x34b248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1376), GPR_U32(ctx, 2));
    // 0x34b24c: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x34b24cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x34b250: 0x24020097  addiu       $v0, $zero, 0x97
    ctx->pc = 0x34b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x34b254: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x34B254u;
    {
        const bool branch_taken_0x34b254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34b254) {
            ctx->pc = 0x34B2B0u;
            goto label_34b2b0;
        }
    }
    ctx->pc = 0x34B25Cu;
    // 0x34b25c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x34b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x34b260: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B260u;
    {
        const bool branch_taken_0x34b260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34b260) {
            ctx->pc = 0x34B270u;
            goto label_34b270;
        }
    }
    ctx->pc = 0x34B268u;
    // 0x34b268: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x34B268u;
    {
        const bool branch_taken_0x34b268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b268) {
            ctx->pc = 0x34B2E8u;
            goto label_34b2e8;
        }
    }
    ctx->pc = 0x34B270u;
label_34b270:
    // 0x34b270: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x34b270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x34b274: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x34b274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x34b278: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x34b278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x34b27c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x34b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x34b280: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x34b280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x34b284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34b284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b288: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x34b288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x34b28c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34b28cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b290: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34b290u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b294: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x34b294u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b298: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x34b298u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b29c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x34B29Cu;
    SET_GPR_U32(ctx, 31, 0x34B2A4u);
    ctx->pc = 0x34B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B29Cu;
    // 0x34b2a0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x34B29Cu, 0x34B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B2A4u;
label_34b2a4:
    // 0x34b2a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x34B2A4u;
    {
        const bool branch_taken_0x34b2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b2a4) {
            ctx->pc = 0x34B2E8u;
            goto label_34b2e8;
        }
    }
    ctx->pc = 0x34B2ACu;
    // 0x34b2ac: 0x0  nop
    ctx->pc = 0x34b2acu;
    // NOP
label_34b2b0:
    // 0x34b2b0: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x34b2b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x34b2b4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x34b2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x34b2b8: 0x3c021d00  lui         $v0, 0x1D00
    ctx->pc = 0x34b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7424 << 16));
    // 0x34b2bc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x34b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x34b2c0: 0x34459702  ori         $a1, $v0, 0x9702
    ctx->pc = 0x34b2c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38658);
    // 0x34b2c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34b2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b2c8: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x34b2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x34b2cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34b2ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b2d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34b2d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b2d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x34b2d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b2d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x34b2d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b2dc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x34B2DCu;
    SET_GPR_U32(ctx, 31, 0x34B2E4u);
    ctx->pc = 0x34B2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B2DCu;
    // 0x34b2e0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x34B2DCu, 0x34B2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B2E4u;
label_34b2e4:
    // 0x34b2e4: 0x0  nop
    ctx->pc = 0x34b2e4u;
    // NOP
label_34b2e8:
    // 0x34b2e8: 0x8642052a  lh          $v0, 0x52A($s2)
    ctx->pc = 0x34b2e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1322)));
    // 0x34b2ec: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x34b2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x34b2f0: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x34b2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x34b2f4: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x34b2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b2f8: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x34b2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b2fc: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x34b2fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x34b300: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34b300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34b304: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x34b304u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
label_34b308:
    // 0x34b308: 0x8e460560  lw          $a2, 0x560($s2)
    ctx->pc = 0x34b308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    // 0x34b30c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34b30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b310: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x34B310u;
    SET_GPR_U32(ctx, 31, 0x34B318u);
    ctx->pc = 0x34B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B310u;
    // 0x34b314: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x34B310u, 0x34B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B318u;
label_34b318:
    // 0x34b318: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B318u;
    {
        const bool branch_taken_0x34b318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B318u;
        // 0x34b31c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b318) {
            ctx->pc = 0x34B328u;
            goto label_34b328;
        }
    }
    ctx->pc = 0x34B320u;
    // 0x34b320: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34B320u;
    SET_GPR_U32(ctx, 31, 0x34B328u);
    ctx->pc = 0x34B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B320u;
    // 0x34b324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34B320u, 0x34B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B328u;
label_34b328:
    // 0x34b328: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x34b328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x34b32c: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x34B32Cu;
    {
        const bool branch_taken_0x34b32c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x34B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B32Cu;
        // 0x34b330: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b32c) {
            ctx->pc = 0x34B398u;
            goto label_34b398;
        }
    }
    ctx->pc = 0x34B334u;
    // 0x34b334: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x34B334u;
    {
        const bool branch_taken_0x34b334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b334) {
            ctx->pc = 0x34B398u;
            goto label_34b398;
        }
    }
    ctx->pc = 0x34B33Cu;
    // 0x34b33c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34b33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34b340: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x34b340u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34b344: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x34b344u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x34b348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34b348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b34c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x34b34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34b350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34b350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b354: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34b354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34b358: 0x7fa90090  sq          $t1, 0x90($sp)
    ctx->pc = 0x34b358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 9));
    // 0x34b35c: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x34b35cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x34b360: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34b360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34b364: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x34b364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
    // 0x34b368: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x34b368u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x34b36c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34b36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34b370: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x34b370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x34b374: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x34b374u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x34b378: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34b378u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34b37c: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x34b37cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34b380: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34b380u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34b384: 0x92460568  lbu         $a2, 0x568($s2)
    ctx->pc = 0x34b384u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x34b388: 0xc64c0564  lwc1        $f12, 0x564($s2)
    ctx->pc = 0x34b388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34b38c: 0xc0c0900  jal         func_302400
    ctx->pc = 0x34B38Cu;
    SET_GPR_U32(ctx, 31, 0x34B394u);
    ctx->pc = 0x34B390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B38Cu;
    // 0x34b390: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x34B38Cu, 0x34B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B394u;
label_34b394:
    // 0x34b394: 0x0  nop
    ctx->pc = 0x34b394u;
    // NOP
label_34b398:
    // 0x34b398: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x34b398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x34b39c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34B39Cu;
    {
        const bool branch_taken_0x34b39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B39Cu;
        // 0x34b3a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b39c) {
            ctx->pc = 0x34B3B0u;
            goto label_34b3b0;
        }
    }
    ctx->pc = 0x34B3A4u;
    // 0x34b3a4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34B3A4u;
    {
        const bool branch_taken_0x34b3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b3a4) {
            ctx->pc = 0x34B430u;
            goto label_34b430;
        }
    }
    ctx->pc = 0x34B3ACu;
    // 0x34b3ac: 0x0  nop
    ctx->pc = 0x34b3acu;
    // NOP
label_34b3b0:
    // 0x34b3b0: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x34b3b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x34b3b4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x34b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x34b3b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34b3bc: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x34b3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34b3c0: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x34b3c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x34b3c4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34B3C4u;
    {
        const bool branch_taken_0x34b3c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34b3c4) {
            ctx->pc = 0x34B400u;
            goto label_34b400;
        }
    }
    ctx->pc = 0x34B3CCu;
    // 0x34b3cc: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x34b3ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x34b3d0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x34b3d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x34b3d4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34B3D4u;
    {
        const bool branch_taken_0x34b3d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B3D4u;
        // 0x34b3d8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b3d4) {
            ctx->pc = 0x34B428u;
            goto label_34b428;
        }
    }
    ctx->pc = 0x34B3DCu;
    // 0x34b3dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b3e0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x34b3e0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34b3e4: 0x0  nop
    ctx->pc = 0x34b3e4u;
    // NOP
    // 0x34b3e8: 0x0  nop
    ctx->pc = 0x34b3e8u;
    // NOP
    // 0x34b3ec: 0x2010  mfhi        $a0
    ctx->pc = 0x34b3ecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34b3f0: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x34b3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34b3f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34B3F4u;
    {
        const bool branch_taken_0x34b3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B3F4u;
        // 0x34b3f8: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b3f4) {
            ctx->pc = 0x34B428u;
            goto label_34b428;
        }
    }
    ctx->pc = 0x34B3FCu;
    // 0x34b3fc: 0x0  nop
    ctx->pc = 0x34b3fcu;
    // NOP
label_34b400:
    // 0x34b400: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x34b400u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x34b404: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x34b404u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34b408: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34B408u;
    {
        const bool branch_taken_0x34b408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b408) {
            ctx->pc = 0x34B428u;
            goto label_34b428;
        }
    }
    ctx->pc = 0x34B410u;
    // 0x34b410: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x34b410u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34b414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b418: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x34b418u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b41c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34B41Cu;
    {
        const bool branch_taken_0x34b41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B41Cu;
        // 0x34b420: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b41c) {
            ctx->pc = 0x34B430u;
            goto label_34b430;
        }
    }
    ctx->pc = 0x34B424u;
    // 0x34b424: 0x0  nop
    ctx->pc = 0x34b424u;
    // NOP
label_34b428:
    // 0x34b428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b42c: 0x0  nop
    ctx->pc = 0x34b42cu;
    // NOP
label_34b430:
    // 0x34b430: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B430u;
    {
        const bool branch_taken_0x34b430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B430u;
        // 0x34b434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b430) {
            ctx->pc = 0x34B440u;
            goto label_34b440;
        }
    }
    ctx->pc = 0x34B438u;
    // 0x34b438: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34B438u;
    SET_GPR_U32(ctx, 31, 0x34B440u);
    ctx->pc = 0x34B43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B438u;
    // 0x34b43c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34B438u, 0x34B440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B440u;
label_34b440:
    // 0x34b440: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34b440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34b444: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x34b444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34b448: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34b448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34b44c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34b44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b450: 0x3e00008  jr          $ra
    ctx->pc = 0x34B450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B450u;
        // 0x34b454: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B458u;
}
