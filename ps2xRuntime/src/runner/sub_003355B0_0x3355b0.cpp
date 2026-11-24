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

// Function: sub_003355B0
// Address: 0x3355b0 - 0x335b64
void sub_003355B0_0x3355b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003355B0_0x3355b0");
#endif

    switch (ctx->pc) {
        case 0x335630u: goto label_335630;
        case 0x3356b0u: goto label_3356b0;
        case 0x3356c4u: goto label_3356c4;
        case 0x3356d4u: goto label_3356d4;
        case 0x3356ecu: goto label_3356ec;
        case 0x3356fcu: goto label_3356fc;
        case 0x335728u: goto label_335728;
        case 0x335740u: goto label_335740;
        case 0x33575cu: goto label_33575c;
        case 0x33576cu: goto label_33576c;
        case 0x335780u: goto label_335780;
        case 0x3357a8u: goto label_3357a8;
        case 0x3357b8u: goto label_3357b8;
        case 0x3357e8u: goto label_3357e8;
        case 0x335810u: goto label_335810;
        case 0x335828u: goto label_335828;
        case 0x335830u: goto label_335830;
        case 0x33587cu: goto label_33587c;
        case 0x335968u: goto label_335968;
        case 0x335970u: goto label_335970;
        case 0x3359a0u: goto label_3359a0;
        case 0x3359a8u: goto label_3359a8;
        case 0x3359b8u: goto label_3359b8;
        case 0x3359e8u: goto label_3359e8;
        case 0x335a10u: goto label_335a10;
        case 0x335a28u: goto label_335a28;
        case 0x335a30u: goto label_335a30;
        case 0x335a7cu: goto label_335a7c;
        case 0x335b48u: goto label_335b48;
        default: break;
    }

    ctx->pc = 0x3355b0u;

    // 0x3355b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3355b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3355b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3355b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3355b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3355b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3355bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3355bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3355c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3355c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3355c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3355c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3355c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3355c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3355cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3355ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355d0: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x3355d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3355d4: 0x10a300e0  beq         $a1, $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x3355D4u;
    {
        const bool branch_taken_0x3355d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3355D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3355D4u;
        // 0x3355d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3355d4) {
            ctx->pc = 0x335958u;
            goto label_335958;
        }
    }
    ctx->pc = 0x3355DCu;
    // 0x3355dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3355dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3355e0: 0x10a300d5  beq         $a1, $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x3355E0u;
    {
        const bool branch_taken_0x3355e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3355E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3355E0u;
        // 0x3355e4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3355e0) {
            ctx->pc = 0x335938u;
            goto label_335938;
        }
    }
    ctx->pc = 0x3355E8u;
    // 0x3355e8: 0x10a3001d  beq         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3355E8u;
    {
        const bool branch_taken_0x3355e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3355e8) {
            ctx->pc = 0x335660u;
            goto label_335660;
        }
    }
    ctx->pc = 0x3355F0u;
    // 0x3355f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3355f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3355f4: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3355F4u;
    {
        const bool branch_taken_0x3355f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3355f4) {
            ctx->pc = 0x335640u;
            goto label_335640;
        }
    }
    ctx->pc = 0x3355FCu;
    // 0x3355fc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3355FCu;
    {
        const bool branch_taken_0x3355fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3355fc) {
            ctx->pc = 0x335610u;
            goto label_335610;
        }
    }
    ctx->pc = 0x335604u;
    // 0x335604: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x335604u;
    {
        const bool branch_taken_0x335604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335604) {
            ctx->pc = 0x335B48u;
            goto label_335b48;
        }
    }
    ctx->pc = 0x33560Cu;
    // 0x33560c: 0x0  nop
    ctx->pc = 0x33560cu;
    // NOP
label_335610:
    // 0x335610: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x335610u;
    {
        const bool branch_taken_0x335610 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x335610) {
            ctx->pc = 0x335628u;
            goto label_335628;
        }
    }
    ctx->pc = 0x335618u;
    // 0x335618: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x335618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x33561c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33561Cu;
    {
        const bool branch_taken_0x33561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33561Cu;
        // 0x335620: 0xa6030732  sh          $v1, 0x732($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1842), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33561c) {
            ctx->pc = 0x335630u;
            goto label_335630;
        }
    }
    ctx->pc = 0x335624u;
    // 0x335624: 0x0  nop
    ctx->pc = 0x335624u;
    // NOP
label_335628:
    // 0x335628: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x335628u;
    SET_GPR_U32(ctx, 31, 0x335630u);
    ctx->pc = 0x33562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335628u;
    // 0x33562c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x335628u, 0x335630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335630u;
label_335630:
    // 0x335630: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x335630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x335634: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x335634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x335638: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x335638u;
    {
        const bool branch_taken_0x335638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335638u;
        // 0x33563c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335638) {
            ctx->pc = 0x335B48u;
            goto label_335b48;
        }
    }
    ctx->pc = 0x335640u;
label_335640:
    // 0x335640: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x335640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x335644: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x335644u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x335648: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x335648u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x33564c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x33564cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x335650: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x335650u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x335654: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x335654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x335658: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x335658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33565c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x33565cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_335660:
    // 0x335660: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x335660u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x335664: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x335664u;
    {
        const bool branch_taken_0x335664 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x335668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335664u;
        // 0x335668: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335664) {
            ctx->pc = 0x335678u;
            goto label_335678;
        }
    }
    ctx->pc = 0x33566Cu;
    // 0x33566c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33566Cu;
    {
        const bool branch_taken_0x33566c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33566c) {
            ctx->pc = 0x335678u;
            goto label_335678;
        }
    }
    ctx->pc = 0x335674u;
    // 0x335674: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x335674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_335678:
    // 0x335678: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x335678u;
    {
        const bool branch_taken_0x335678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335678) {
            ctx->pc = 0x3357A0u;
            goto label_3357a0;
        }
    }
    ctx->pc = 0x335680u;
    // 0x335680: 0x92030730  lbu         $v1, 0x730($s0)
    ctx->pc = 0x335680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1840)));
    // 0x335684: 0x24020555  addiu       $v0, $zero, 0x555
    ctx->pc = 0x335684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1365));
    // 0x335688: 0x86050732  lh          $a1, 0x732($s0)
    ctx->pc = 0x335688u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1842)));
    // 0x33568c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x33568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x335690: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x335690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x335694: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x335694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x335698: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x335698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33569c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33569cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3356a0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3356a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3356a4: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3356a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3356a8: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3356A8u;
    SET_GPR_U32(ctx, 31, 0x3356B0u);
    ctx->pc = 0x3356ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3356A8u;
    // 0x3356ac: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3356A8u, 0x3356B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3356B0u;
label_3356b0:
    // 0x3356b0: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x3356b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
    // 0x3356b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3356b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3356b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3356b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3356bc: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3356BCu;
    SET_GPR_U32(ctx, 31, 0x3356C4u);
    ctx->pc = 0x3356C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3356BCu;
    // 0x3356c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3356BCu, 0x3356C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3356C4u;
label_3356c4:
    // 0x3356c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3356c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3356c8: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x3356c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3356cc: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3356CCu;
    SET_GPR_U32(ctx, 31, 0x3356D4u);
    ctx->pc = 0x3356D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3356CCu;
    // 0x3356d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3356CCu, 0x3356D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3356D4u;
label_3356d4:
    // 0x3356d4: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3356D4u;
    {
        const bool branch_taken_0x3356d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3356D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356D4u;
        // 0x3356d8: 0x92120730  lbu         $s2, 0x730($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356d4) {
            ctx->pc = 0x335790u;
            goto label_335790;
        }
    }
    ctx->pc = 0x3356DCu;
    // 0x3356dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3356dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3356e0: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x3356e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x3356e4: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x3356E4u;
    SET_GPR_U32(ctx, 31, 0x3356ECu);
    ctx->pc = 0x3356E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3356E4u;
    // 0x3356e8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x3356E4u, 0x3356ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3356ECu;
label_3356ec:
    // 0x3356ec: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3356ECu;
    {
        const bool branch_taken_0x3356ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3356F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356ECu;
        // 0x3356f0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356ec) {
            ctx->pc = 0x335790u;
            goto label_335790;
        }
    }
    ctx->pc = 0x3356F4u;
    // 0x3356f4: 0xc096cf8  jal         func_25B3E0
    ctx->pc = 0x3356F4u;
    SET_GPR_U32(ctx, 31, 0x3356FCu);
    ctx->pc = 0x3356F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3356F4u;
    // 0x3356f8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B3E0u, 0x3356F4u, 0x3356FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3356FCu;
label_3356fc:
    // 0x3356fc: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3356FCu;
    {
        const bool branch_taken_0x3356fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356FCu;
        // 0x335700: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356fc) {
            ctx->pc = 0x335790u;
            goto label_335790;
        }
    }
    ctx->pc = 0x335704u;
    // 0x335704: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x335704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x335708: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x335708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33570c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x33570cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x335710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x335710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x335714: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x335714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x335718: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x335718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33571c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x33571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x335720: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x335720u;
    SET_GPR_U32(ctx, 31, 0x335728u);
    ctx->pc = 0x335724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335720u;
    // 0x335724: 0x24520550  addiu       $s2, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x335720u, 0x335728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335728u;
label_335728:
    // 0x335728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x335728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33572c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x33572cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x335730: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x335730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x335734: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x335734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x335738: 0xc097340  jal         func_25CD00
    ctx->pc = 0x335738u;
    SET_GPR_U32(ctx, 31, 0x335740u);
    ctx->pc = 0x33573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335738u;
    // 0x33573c: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD00u, 0x335738u, 0x335740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335740u;
label_335740:
    // 0x335740: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x335740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335744: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x335744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x335748: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x335748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33574c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x33574cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x335750: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x335750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x335754: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x335754u;
    SET_GPR_U32(ctx, 31, 0x33575Cu);
    ctx->pc = 0x335758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335754u;
    // 0x335758: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x335754u, 0x33575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33575Cu;
label_33575c:
    // 0x33575c: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x33575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x335760: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x335760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x335764: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x335764u;
    SET_GPR_U32(ctx, 31, 0x33576Cu);
    ctx->pc = 0x335768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335764u;
    // 0x335768: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x335764u, 0x33576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33576Cu;
label_33576c:
    // 0x33576c: 0x8e26085c  lw          $a2, 0x85C($s1)
    ctx->pc = 0x33576cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2140)));
    // 0x335770: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x335770u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x335774: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x335774u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x335778: 0xc0aae08  jal         func_2AB820
    ctx->pc = 0x335778u;
    SET_GPR_U32(ctx, 31, 0x335780u);
    ctx->pc = 0x33577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335778u;
    // 0x33577c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB820u, 0x335778u, 0x335780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335780u;
label_335780:
    // 0x335780: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x335780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x335784: 0x92020731  lbu         $v0, 0x731($s0)
    ctx->pc = 0x335784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1841)));
    // 0x335788: 0xa2420046  sb          $v0, 0x46($s2)
    ctx->pc = 0x335788u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x33578c: 0xa6400044  sh          $zero, 0x44($s2)
    ctx->pc = 0x33578cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 68), (uint16_t)GPR_U32(ctx, 0));
label_335790:
    // 0x335790: 0x92020730  lbu         $v0, 0x730($s0)
    ctx->pc = 0x335790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1840)));
    // 0x335794: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x335794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x335798: 0xa2020730  sb          $v0, 0x730($s0)
    ctx->pc = 0x335798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1840), (uint8_t)GPR_U32(ctx, 2));
    // 0x33579c: 0x0  nop
    ctx->pc = 0x33579cu;
    // NOP
label_3357a0:
    // 0x3357a0: 0xc0c0818  jal         func_302060
    ctx->pc = 0x3357A0u;
    SET_GPR_U32(ctx, 31, 0x3357A8u);
    ctx->pc = 0x3357A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3357A0u;
    // 0x3357a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x3357A0u, 0x3357A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3357A8u;
label_3357a8:
    // 0x3357a8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3357A8u;
    {
        const bool branch_taken_0x3357a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3357ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3357A8u;
        // 0x3357ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3357a8) {
            ctx->pc = 0x335820u;
            goto label_335820;
        }
    }
    ctx->pc = 0x3357B0u;
    // 0x3357b0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3357b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3357b4: 0x0  nop
    ctx->pc = 0x3357b4u;
    // NOP
label_3357b8:
    // 0x3357b8: 0x86230594  lh          $v1, 0x594($s1)
    ctx->pc = 0x3357b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1428)));
    // 0x3357bc: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x3357bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3357c0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3357C0u;
    {
        const bool branch_taken_0x3357c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3357C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3357C0u;
        // 0x3357c4: 0x28610074  slti        $at, $v1, 0x74 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)116) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3357c0) {
            ctx->pc = 0x335810u;
            goto label_335810;
        }
    }
    ctx->pc = 0x3357C8u;
    // 0x3357c8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x3357C8u;
    {
        const bool branch_taken_0x3357c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3357CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3357C8u;
        // 0x3357cc: 0x28620041  slti        $v0, $v1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3357c8) {
            ctx->pc = 0x335810u;
            goto label_335810;
        }
    }
    ctx->pc = 0x3357D0u;
    // 0x3357d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3357D0u;
    {
        const bool branch_taken_0x3357d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3357d0) {
            ctx->pc = 0x3357E0u;
            goto label_3357e0;
        }
    }
    ctx->pc = 0x3357D8u;
    // 0x3357d8: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x3357d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3357dc: 0xa2220596  sb          $v0, 0x596($s1)
    ctx->pc = 0x3357dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1430), (uint8_t)GPR_U32(ctx, 2));
label_3357e0:
    // 0x3357e0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3357E0u;
    SET_GPR_U32(ctx, 31, 0x3357E8u);
    ctx->pc = 0x3357E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3357E0u;
    // 0x3357e4: 0x8e240590  lw          $a0, 0x590($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3357E0u, 0x3357E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3357E8u;
label_3357e8:
    // 0x3357e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3357E8u;
    {
        const bool branch_taken_0x3357e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3357e8) {
            ctx->pc = 0x335810u;
            goto label_335810;
        }
    }
    ctx->pc = 0x3357F0u;
    // 0x3357f0: 0x92260596  lbu         $a2, 0x596($s1)
    ctx->pc = 0x3357f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1430)));
    // 0x3357f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3357f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3357f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3357f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3357fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3357fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335800: 0x26250550  addiu       $a1, $s1, 0x550
    ctx->pc = 0x335800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x335804: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x335804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335808: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x335808u;
    SET_GPR_U32(ctx, 31, 0x335810u);
    ctx->pc = 0x33580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335808u;
    // 0x33580c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x335808u, 0x335810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335810u;
label_335810:
    // 0x335810: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x335810u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x335814: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x335814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x335818: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x335818u;
    {
        const bool branch_taken_0x335818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335818u;
        // 0x33581c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335818) {
            ctx->pc = 0x3357B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3357b8;
        }
    }
    ctx->pc = 0x335820u;
label_335820:
    // 0x335820: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x335820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335824: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x335824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_335828:
    // 0x335828: 0xc096c80  jal         func_25B200
    ctx->pc = 0x335828u;
    SET_GPR_U32(ctx, 31, 0x335830u);
    ctx->pc = 0x33582Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335828u;
    // 0x33582c: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x335828u, 0x335830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335830u;
label_335830:
    // 0x335830: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x335830u;
    {
        const bool branch_taken_0x335830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335830) {
            ctx->pc = 0x335890u;
            goto label_335890;
        }
    }
    ctx->pc = 0x335838u;
    // 0x335838: 0x86440594  lh          $a0, 0x594($s2)
    ctx->pc = 0x335838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x33583c: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x33583cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x335840: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x335840u;
    {
        const bool branch_taken_0x335840 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x335840) {
            ctx->pc = 0x335880u;
            goto label_335880;
        }
    }
    ctx->pc = 0x335848u;
    // 0x335848: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x335848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x33584c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x33584cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x335850: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x335850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x335854: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x335854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x335858: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x335858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33585c: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x33585cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x335860: 0x26470580  addiu       $a3, $s2, 0x580
    ctx->pc = 0x335860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x335864: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x335864u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335868: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x335868u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33586c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33586cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335870: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x335870u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335874: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x335874u;
    SET_GPR_U32(ctx, 31, 0x33587Cu);
    ctx->pc = 0x335878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335874u;
    // 0x335878: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x335874u, 0x33587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33587Cu;
label_33587c:
    // 0x33587c: 0x0  nop
    ctx->pc = 0x33587cu;
    // NOP
label_335880:
    // 0x335880: 0x86430594  lh          $v1, 0x594($s2)
    ctx->pc = 0x335880u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x335884: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x335884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x335888: 0xa6430594  sh          $v1, 0x594($s2)
    ctx->pc = 0x335888u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1428), (uint16_t)GPR_U32(ctx, 3));
    // 0x33588c: 0x0  nop
    ctx->pc = 0x33588cu;
    // NOP
label_335890:
    // 0x335890: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x335890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x335894: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x335894u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x335898: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x335898u;
    {
        const bool branch_taken_0x335898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335898u;
        // 0x33589c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335898) {
            ctx->pc = 0x335828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335828;
        }
    }
    ctx->pc = 0x3358A0u;
    // 0x3358a0: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3358a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3358a4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3358A4u;
    {
        const bool branch_taken_0x3358a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3358a4) {
            ctx->pc = 0x335918u;
            goto label_335918;
        }
    }
    ctx->pc = 0x3358ACu;
    // 0x3358ac: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3358acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3358b0: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3358b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3358b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3358b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3358b8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3358b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3358bc: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3358bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3358c0: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3358C0u;
    {
        const bool branch_taken_0x3358c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3358c0) {
            ctx->pc = 0x3358F8u;
            goto label_3358f8;
        }
    }
    ctx->pc = 0x3358C8u;
    // 0x3358c8: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3358c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3358cc: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3358ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3358d0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3358D0u;
    {
        const bool branch_taken_0x3358d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3358D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3358D0u;
        // 0x3358d4: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3358d0) {
            ctx->pc = 0x335918u;
            goto label_335918;
        }
    }
    ctx->pc = 0x3358D8u;
    // 0x3358d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3358d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3358dc: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3358dcu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3358e0: 0x0  nop
    ctx->pc = 0x3358e0u;
    // NOP
    // 0x3358e4: 0x0  nop
    ctx->pc = 0x3358e4u;
    // NOP
    // 0x3358e8: 0x2010  mfhi        $a0
    ctx->pc = 0x3358e8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3358ec: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3358ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3358f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3358F0u;
    {
        const bool branch_taken_0x3358f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3358F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3358F0u;
        // 0x3358f4: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3358f0) {
            ctx->pc = 0x335918u;
            goto label_335918;
        }
    }
    ctx->pc = 0x3358F8u;
label_3358f8:
    // 0x3358f8: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3358f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3358fc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3358fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x335900: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x335900u;
    {
        const bool branch_taken_0x335900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x335900) {
            ctx->pc = 0x335918u;
            goto label_335918;
        }
    }
    ctx->pc = 0x335908u;
    // 0x335908: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x335908u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33590c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33590cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335910: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x335910u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x335914: 0x0  nop
    ctx->pc = 0x335914u;
    // NOP
label_335918:
    // 0x335918: 0x92030730  lbu         $v1, 0x730($s0)
    ctx->pc = 0x335918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1840)));
    // 0x33591c: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x33591cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x335920: 0x14600089  bnez        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x335920u;
    {
        const bool branch_taken_0x335920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x335920) {
            ctx->pc = 0x335B48u;
            goto label_335b48;
        }
    }
    ctx->pc = 0x335928u;
    // 0x335928: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x335928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x33592c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33592cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x335930: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x335930u;
    {
        const bool branch_taken_0x335930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335930u;
        // 0x335934: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335930) {
            ctx->pc = 0x335B48u;
            goto label_335b48;
        }
    }
    ctx->pc = 0x335938u;
label_335938:
    // 0x335938: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x335938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x33593c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x33593cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x335940: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x335940u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x335944: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x335944u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x335948: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x335948u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x33594c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x33594cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x335950: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x335950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x335954: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x335954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_335958:
    // 0x335958: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x335958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33595c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x33595cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335960: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x335960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335964: 0x0  nop
    ctx->pc = 0x335964u;
    // NOP
label_335968:
    // 0x335968: 0xc096c80  jal         func_25B200
    ctx->pc = 0x335968u;
    SET_GPR_U32(ctx, 31, 0x335970u);
    ctx->pc = 0x33596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335968u;
    // 0x33596c: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x335968u, 0x335970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335970u;
label_335970:
    // 0x335970: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x335970u;
    {
        const bool branch_taken_0x335970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335970) {
            ctx->pc = 0x335980u;
            goto label_335980;
        }
    }
    ctx->pc = 0x335978u;
    // 0x335978: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x335978u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33597c: 0x0  nop
    ctx->pc = 0x33597cu;
    // NOP
label_335980:
    // 0x335980: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x335980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x335984: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x335984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x335988: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x335988u;
    {
        const bool branch_taken_0x335988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335988u;
        // 0x33598c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335988) {
            ctx->pc = 0x335968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335968;
        }
    }
    ctx->pc = 0x335990u;
    // 0x335990: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x335990u;
    {
        const bool branch_taken_0x335990 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x335994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335990u;
        // 0x335994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335990) {
            ctx->pc = 0x3359A0u;
            goto label_3359a0;
        }
    }
    ctx->pc = 0x335998u;
    // 0x335998: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x335998u;
    SET_GPR_U32(ctx, 31, 0x3359A0u);
    ctx->pc = 0x33599Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335998u;
    // 0x33599c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x335998u, 0x3359A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3359A0u;
label_3359a0:
    // 0x3359a0: 0xc0c0818  jal         func_302060
    ctx->pc = 0x3359A0u;
    SET_GPR_U32(ctx, 31, 0x3359A8u);
    ctx->pc = 0x3359A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3359A0u;
    // 0x3359a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x3359A0u, 0x3359A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3359A8u;
label_3359a8:
    // 0x3359a8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3359A8u;
    {
        const bool branch_taken_0x3359a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3359ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359A8u;
        // 0x3359ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3359a8) {
            ctx->pc = 0x335A20u;
            goto label_335a20;
        }
    }
    ctx->pc = 0x3359B0u;
    // 0x3359b0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3359b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3359b4: 0x0  nop
    ctx->pc = 0x3359b4u;
    // NOP
label_3359b8:
    // 0x3359b8: 0x86430594  lh          $v1, 0x594($s2)
    ctx->pc = 0x3359b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x3359bc: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x3359bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3359c0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3359C0u;
    {
        const bool branch_taken_0x3359c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3359C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359C0u;
        // 0x3359c4: 0x28610074  slti        $at, $v1, 0x74 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)116) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3359c0) {
            ctx->pc = 0x335A10u;
            goto label_335a10;
        }
    }
    ctx->pc = 0x3359C8u;
    // 0x3359c8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x3359C8u;
    {
        const bool branch_taken_0x3359c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3359CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359C8u;
        // 0x3359cc: 0x28620041  slti        $v0, $v1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3359c8) {
            ctx->pc = 0x335A10u;
            goto label_335a10;
        }
    }
    ctx->pc = 0x3359D0u;
    // 0x3359d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3359D0u;
    {
        const bool branch_taken_0x3359d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3359d0) {
            ctx->pc = 0x3359E0u;
            goto label_3359e0;
        }
    }
    ctx->pc = 0x3359D8u;
    // 0x3359d8: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x3359d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3359dc: 0xa2420596  sb          $v0, 0x596($s2)
    ctx->pc = 0x3359dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1430), (uint8_t)GPR_U32(ctx, 2));
label_3359e0:
    // 0x3359e0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3359E0u;
    SET_GPR_U32(ctx, 31, 0x3359E8u);
    ctx->pc = 0x3359E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3359E0u;
    // 0x3359e4: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3359E0u, 0x3359E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3359E8u;
label_3359e8:
    // 0x3359e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3359E8u;
    {
        const bool branch_taken_0x3359e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3359e8) {
            ctx->pc = 0x335A10u;
            goto label_335a10;
        }
    }
    ctx->pc = 0x3359F0u;
    // 0x3359f0: 0x92460596  lbu         $a2, 0x596($s2)
    ctx->pc = 0x3359f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1430)));
    // 0x3359f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3359f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3359f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3359f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3359fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3359fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a00: 0x26450550  addiu       $a1, $s2, 0x550
    ctx->pc = 0x335a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x335a04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x335a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a08: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x335A08u;
    SET_GPR_U32(ctx, 31, 0x335A10u);
    ctx->pc = 0x335A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335A08u;
    // 0x335a0c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x335A08u, 0x335A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335A10u;
label_335a10:
    // 0x335a10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x335a10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x335a14: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x335a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x335a18: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x335A18u;
    {
        const bool branch_taken_0x335a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A18u;
        // 0x335a1c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335a18) {
            ctx->pc = 0x3359B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3359b8;
        }
    }
    ctx->pc = 0x335A20u;
label_335a20:
    // 0x335a20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x335a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a24: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x335a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_335a28:
    // 0x335a28: 0xc096c80  jal         func_25B200
    ctx->pc = 0x335A28u;
    SET_GPR_U32(ctx, 31, 0x335A30u);
    ctx->pc = 0x335A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335A28u;
    // 0x335a2c: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x335A28u, 0x335A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335A30u;
label_335a30:
    // 0x335a30: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x335A30u;
    {
        const bool branch_taken_0x335a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335a30) {
            ctx->pc = 0x335A90u;
            goto label_335a90;
        }
    }
    ctx->pc = 0x335A38u;
    // 0x335a38: 0x86440594  lh          $a0, 0x594($s2)
    ctx->pc = 0x335a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x335a3c: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x335a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x335a40: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x335A40u;
    {
        const bool branch_taken_0x335a40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x335a40) {
            ctx->pc = 0x335A80u;
            goto label_335a80;
        }
    }
    ctx->pc = 0x335A48u;
    // 0x335a48: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x335a48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x335a4c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x335a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x335a50: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x335a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x335a54: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x335a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x335a58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x335a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a5c: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x335a5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x335a60: 0x26470580  addiu       $a3, $s2, 0x580
    ctx->pc = 0x335a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x335a64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x335a64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x335a68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x335a6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a70: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x335a70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a74: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x335A74u;
    SET_GPR_U32(ctx, 31, 0x335A7Cu);
    ctx->pc = 0x335A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335A74u;
    // 0x335a78: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x335A74u, 0x335A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335A7Cu;
label_335a7c:
    // 0x335a7c: 0x0  nop
    ctx->pc = 0x335a7cu;
    // NOP
label_335a80:
    // 0x335a80: 0x86430594  lh          $v1, 0x594($s2)
    ctx->pc = 0x335a80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x335a84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x335a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x335a88: 0xa6430594  sh          $v1, 0x594($s2)
    ctx->pc = 0x335a88u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1428), (uint16_t)GPR_U32(ctx, 3));
    // 0x335a8c: 0x0  nop
    ctx->pc = 0x335a8cu;
    // NOP
label_335a90:
    // 0x335a90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x335a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x335a94: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x335a94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x335a98: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x335A98u;
    {
        const bool branch_taken_0x335a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A98u;
        // 0x335a9c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335a98) {
            ctx->pc = 0x335A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335a28;
        }
    }
    ctx->pc = 0x335AA0u;
    // 0x335aa0: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x335aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x335aa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x335AA4u;
    {
        const bool branch_taken_0x335aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x335AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335AA4u;
        // 0x335aa8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335aa4) {
            ctx->pc = 0x335AB8u;
            goto label_335ab8;
        }
    }
    ctx->pc = 0x335AACu;
    // 0x335aac: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x335AACu;
    {
        const bool branch_taken_0x335aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335aac) {
            ctx->pc = 0x335B38u;
            goto label_335b38;
        }
    }
    ctx->pc = 0x335AB4u;
    // 0x335ab4: 0x0  nop
    ctx->pc = 0x335ab4u;
    // NOP
label_335ab8:
    // 0x335ab8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x335ab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x335abc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x335abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x335ac0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335ac4: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x335ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x335ac8: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x335ac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x335acc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x335ACCu;
    {
        const bool branch_taken_0x335acc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x335acc) {
            ctx->pc = 0x335B08u;
            goto label_335b08;
        }
    }
    ctx->pc = 0x335AD4u;
    // 0x335ad4: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x335ad4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x335ad8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x335ad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x335adc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x335ADCu;
    {
        const bool branch_taken_0x335adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335ADCu;
        // 0x335ae0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335adc) {
            ctx->pc = 0x335B30u;
            goto label_335b30;
        }
    }
    ctx->pc = 0x335AE4u;
    // 0x335ae4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335ae8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x335ae8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x335aec: 0x0  nop
    ctx->pc = 0x335aecu;
    // NOP
    // 0x335af0: 0x0  nop
    ctx->pc = 0x335af0u;
    // NOP
    // 0x335af4: 0x2010  mfhi        $a0
    ctx->pc = 0x335af4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x335af8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x335af8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x335afc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x335AFCu;
    {
        const bool branch_taken_0x335afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335AFCu;
        // 0x335b00: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335afc) {
            ctx->pc = 0x335B30u;
            goto label_335b30;
        }
    }
    ctx->pc = 0x335B04u;
    // 0x335b04: 0x0  nop
    ctx->pc = 0x335b04u;
    // NOP
label_335b08:
    // 0x335b08: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x335b08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x335b0c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x335b0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x335b10: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x335B10u;
    {
        const bool branch_taken_0x335b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x335b10) {
            ctx->pc = 0x335B30u;
            goto label_335b30;
        }
    }
    ctx->pc = 0x335B18u;
    // 0x335b18: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x335b18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x335b1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335b20: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x335b20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x335b24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x335B24u;
    {
        const bool branch_taken_0x335b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B24u;
        // 0x335b28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b24) {
            ctx->pc = 0x335B38u;
            goto label_335b38;
        }
    }
    ctx->pc = 0x335B2Cu;
    // 0x335b2c: 0x0  nop
    ctx->pc = 0x335b2cu;
    // NOP
label_335b30:
    // 0x335b30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335b34: 0x0  nop
    ctx->pc = 0x335b34u;
    // NOP
label_335b38:
    // 0x335b38: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x335B38u;
    {
        const bool branch_taken_0x335b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B38u;
        // 0x335b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b38) {
            ctx->pc = 0x335B48u;
            goto label_335b48;
        }
    }
    ctx->pc = 0x335B40u;
    // 0x335b40: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x335B40u;
    SET_GPR_U32(ctx, 31, 0x335B48u);
    ctx->pc = 0x335B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335B40u;
    // 0x335b44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x335B40u, 0x335B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335B48u;
label_335b48:
    // 0x335b48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x335b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x335b4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x335b4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x335b50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x335b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x335b54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x335b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335b58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x335b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x335B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B5Cu;
        // 0x335b60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335B64u;
}
