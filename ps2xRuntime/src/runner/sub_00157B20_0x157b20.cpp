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

// Function: sub_00157B20
// Address: 0x157b20 - 0x158780
void sub_00157B20_0x157b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157B20_0x157b20");
#endif

    switch (ctx->pc) {
        case 0x157b50u: goto label_157b50;
        case 0x157b88u: goto label_157b88;
        case 0x157b90u: goto label_157b90;
        case 0x157c4cu: goto label_157c4c;
        case 0x157c54u: goto label_157c54;
        case 0x157c5cu: goto label_157c5c;
        case 0x157ca4u: goto label_157ca4;
        case 0x157cb0u: goto label_157cb0;
        case 0x157cb8u: goto label_157cb8;
        case 0x157cc0u: goto label_157cc0;
        case 0x157cccu: goto label_157ccc;
        case 0x157cd8u: goto label_157cd8;
        case 0x157ce4u: goto label_157ce4;
        case 0x157cf0u: goto label_157cf0;
        case 0x157d0cu: goto label_157d0c;
        case 0x157d1cu: goto label_157d1c;
        case 0x157d38u: goto label_157d38;
        case 0x157d54u: goto label_157d54;
        case 0x157dc4u: goto label_157dc4;
        case 0x157dd0u: goto label_157dd0;
        case 0x157dd8u: goto label_157dd8;
        case 0x157e24u: goto label_157e24;
        case 0x157e5cu: goto label_157e5c;
        case 0x157e70u: goto label_157e70;
        case 0x157e78u: goto label_157e78;
        case 0x157e84u: goto label_157e84;
        case 0x157e90u: goto label_157e90;
        case 0x157e9cu: goto label_157e9c;
        case 0x157ea4u: goto label_157ea4;
        case 0x157edcu: goto label_157edc;
        case 0x157eecu: goto label_157eec;
        case 0x157f04u: goto label_157f04;
        case 0x157f0cu: goto label_157f0c;
        case 0x157f14u: goto label_157f14;
        case 0x157f1cu: goto label_157f1c;
        case 0x157f48u: goto label_157f48;
        case 0x157f5cu: goto label_157f5c;
        case 0x157f6cu: goto label_157f6c;
        case 0x157f8cu: goto label_157f8c;
        case 0x157f98u: goto label_157f98;
        case 0x157facu: goto label_157fac;
        case 0x157fbcu: goto label_157fbc;
        case 0x157fd0u: goto label_157fd0;
        case 0x157fdcu: goto label_157fdc;
        case 0x158008u: goto label_158008;
        case 0x158024u: goto label_158024;
        case 0x15803cu: goto label_15803c;
        case 0x158044u: goto label_158044;
        case 0x158060u: goto label_158060;
        case 0x15807cu: goto label_15807c;
        case 0x158090u: goto label_158090;
        case 0x1580a4u: goto label_1580a4;
        case 0x1580b0u: goto label_1580b0;
        case 0x1580b8u: goto label_1580b8;
        case 0x1580d0u: goto label_1580d0;
        case 0x1580f8u: goto label_1580f8;
        case 0x158118u: goto label_158118;
        case 0x158120u: goto label_158120;
        case 0x15812cu: goto label_15812c;
        case 0x158144u: goto label_158144;
        case 0x15815cu: goto label_15815c;
        case 0x158178u: goto label_158178;
        case 0x158190u: goto label_158190;
        case 0x1581a4u: goto label_1581a4;
        case 0x1581bcu: goto label_1581bc;
        case 0x1581ccu: goto label_1581cc;
        case 0x1581d8u: goto label_1581d8;
        case 0x1581e4u: goto label_1581e4;
        case 0x1581f0u: goto label_1581f0;
        case 0x1581fcu: goto label_1581fc;
        case 0x158208u: goto label_158208;
        case 0x158214u: goto label_158214;
        case 0x158248u: goto label_158248;
        case 0x158254u: goto label_158254;
        case 0x158260u: goto label_158260;
        case 0x158268u: goto label_158268;
        case 0x158274u: goto label_158274;
        case 0x158280u: goto label_158280;
        case 0x15828cu: goto label_15828c;
        case 0x158298u: goto label_158298;
        case 0x1582a0u: goto label_1582a0;
        case 0x1582acu: goto label_1582ac;
        case 0x1582b4u: goto label_1582b4;
        case 0x1582c0u: goto label_1582c0;
        case 0x1582c8u: goto label_1582c8;
        case 0x1582d4u: goto label_1582d4;
        case 0x1582e0u: goto label_1582e0;
        case 0x1582ecu: goto label_1582ec;
        case 0x1582f8u: goto label_1582f8;
        case 0x158304u: goto label_158304;
        case 0x158310u: goto label_158310;
        case 0x15831cu: goto label_15831c;
        case 0x158328u: goto label_158328;
        case 0x158334u: goto label_158334;
        case 0x158340u: goto label_158340;
        case 0x158490u: goto label_158490;
        case 0x158500u: goto label_158500;
        case 0x158590u: goto label_158590;
        case 0x1585c0u: goto label_1585c0;
        case 0x1585d0u: goto label_1585d0;
        case 0x158634u: goto label_158634;
        case 0x15867cu: goto label_15867c;
        case 0x158688u: goto label_158688;
        case 0x1586ecu: goto label_1586ec;
        case 0x158758u: goto label_158758;
        case 0x158760u: goto label_158760;
        default: break;
    }

    ctx->pc = 0x157b20u;

    // 0x157b20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x157b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x157b24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x157b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157b28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x157b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x157b2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x157b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x157b30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x157b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x157b34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x157b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x157b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x157b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x157b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b44: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x157b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x157b48: 0xc05d4c8  jal         func_175320
    ctx->pc = 0x157B48u;
    SET_GPR_U32(ctx, 31, 0x157B50u);
    ctx->pc = 0x157B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B48u;
    // 0x157b4c: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175320u, 0x157B48u, 0x157B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B50u;
label_157b50:
    // 0x157b50: 0x8e037a30  lw          $v1, 0x7A30($s0)
    ctx->pc = 0x157b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31280)));
    // 0x157b54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x157b58: 0xae037a30  sw          $v1, 0x7A30($s0)
    ctx->pc = 0x157b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31280), GPR_U32(ctx, 3));
    // 0x157b5c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x157b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x157b60: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x157b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x157b64: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x157B64u;
    {
        const bool branch_taken_0x157b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B64u;
        // 0x157b68: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b64) {
            ctx->pc = 0x157B80u;
            goto label_157b80;
        }
    }
    ctx->pc = 0x157B6Cu;
    // 0x157b6c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x157b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x157b70: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x157b70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x157b74: 0x100002fa  b           . + 4 + (0x2FA << 2)
    ctx->pc = 0x157B74u;
    {
        const bool branch_taken_0x157b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B74u;
        // 0x157b78: 0xa6000004  sh          $zero, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b74) {
            ctx->pc = 0x158760u;
            goto label_158760;
        }
    }
    ctx->pc = 0x157B7Cu;
    // 0x157b7c: 0x0  nop
    ctx->pc = 0x157b7cu;
    // NOP
label_157b80:
    // 0x157b80: 0xc05654c  jal         func_159530
    ctx->pc = 0x157B80u;
    SET_GPR_U32(ctx, 31, 0x157B88u);
    ctx->pc = 0x157B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B80u;
    // 0x157b84: 0x2604796c  addiu       $a0, $s0, 0x796C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31084));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159530u, 0x157B80u, 0x157B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B88u;
label_157b88:
    // 0x157b88: 0xc056234  jal         func_1588D0
    ctx->pc = 0x157B88u;
    SET_GPR_U32(ctx, 31, 0x157B90u);
    ctx->pc = 0x157B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B88u;
    // 0x157b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1588D0u, 0x157B88u, 0x157B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B90u;
label_157b90:
    // 0x157b90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x157b94: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x157b94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x157b98: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x157b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x157b9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x157B9Cu;
    {
        const bool branch_taken_0x157b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B9Cu;
        // 0x157ba0: 0x30820800  andi        $v0, $a0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b9c) {
            ctx->pc = 0x157BD0u;
            goto label_157bd0;
        }
    }
    ctx->pc = 0x157BA4u;
    // 0x157ba4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x157BA4u;
    {
        const bool branch_taken_0x157ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BA4u;
        // 0x157ba8: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ba4) {
            ctx->pc = 0x157C20u;
            goto label_157c20;
        }
    }
    ctx->pc = 0x157BACu;
    // 0x157bac: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x157bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x157bb0: 0x8c230fe0  lw          $v1, 0xFE0($at)
    ctx->pc = 0x157bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4064)));
    // 0x157bb4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x157bb8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x157BB8u;
    {
        const bool branch_taken_0x157bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157bb8) {
            ctx->pc = 0x157C20u;
            goto label_157c20;
        }
    }
    ctx->pc = 0x157BC0u;
    // 0x157bc0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x157bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x157bc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x157bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x157bc8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x157BC8u;
    {
        const bool branch_taken_0x157bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BC8u;
        // 0x157bcc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bc8) {
            ctx->pc = 0x157C20u;
            goto label_157c20;
        }
    }
    ctx->pc = 0x157BD0u;
label_157bd0:
    // 0x157bd0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x157bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x157bd4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x157bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x157bd8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x157BD8u;
    {
        const bool branch_taken_0x157bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BD8u;
        // 0x157bdc: 0x30820800  andi        $v0, $a0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bd8) {
            ctx->pc = 0x157C20u;
            goto label_157c20;
        }
    }
    ctx->pc = 0x157BE0u;
    // 0x157be0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x157BE0u;
    {
        const bool branch_taken_0x157be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BE0u;
        // 0x157be4: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157be0) {
            ctx->pc = 0x157C20u;
            goto label_157c20;
        }
    }
    ctx->pc = 0x157BE8u;
    // 0x157be8: 0x8c22cec0  lw          $v0, -0x3140($at)
    ctx->pc = 0x157be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x157bec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x157becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x157bf0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x157BF0u;
    {
        const bool branch_taken_0x157bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157bf0) {
            ctx->pc = 0x157C20u;
            goto label_157c20;
        }
    }
    ctx->pc = 0x157BF8u;
    // 0x157bf8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x157bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x157bfc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x157bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x157c00: 0x8c230fe0  lw          $v1, 0xFE0($at)
    ctx->pc = 0x157c00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x810FE0u));
    // 0x157c04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x157c08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157C08u;
    {
        const bool branch_taken_0x157c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c08) {
            ctx->pc = 0x157C20u;
            goto label_157c20;
        }
    }
    ctx->pc = 0x157C10u;
    // 0x157c10: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x157c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x157c14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x157c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x157c18: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x157c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x157c1c: 0x0  nop
    ctx->pc = 0x157c1cu;
    // NOP
label_157c20:
    // 0x157c20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x157c24: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x157c24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x157c28: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x157c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x157c2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x157c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x157c30: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x157c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x157c34: 0x24846ac0  addiu       $a0, $a0, 0x6AC0
    ctx->pc = 0x157c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    // 0x157c38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x157c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x157c40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x157c44: 0xc0544c0  jal         func_151300
    ctx->pc = 0x157C44u;
    SET_GPR_U32(ctx, 31, 0x157C4Cu);
    ctx->pc = 0x157C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C44u;
    // 0x157c48: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151300u, 0x157C44u, 0x157C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C4Cu;
label_157c4c:
    // 0x157c4c: 0xc0b2c50  jal         func_2CB140
    ctx->pc = 0x157C4Cu;
    SET_GPR_U32(ctx, 31, 0x157C54u);
    ctx->pc = 0x2CB140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB140u, 0x157C4Cu, 0x157C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C54u;
label_157c54:
    // 0x157c54: 0xc0b368c  jal         func_2CDA30
    ctx->pc = 0x157C54u;
    SET_GPR_U32(ctx, 31, 0x157C5Cu);
    ctx->pc = 0x2CDA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA30u, 0x157C54u, 0x157C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C5Cu;
label_157c5c:
    // 0x157c5c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x157c60: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x157c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x157c64: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x157c64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x157c68: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x157c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x157c6c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x157C6Cu;
    {
        const bool branch_taken_0x157c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157c6c) {
            ctx->pc = 0x157CA8u;
            goto label_157ca8;
        }
    }
    ctx->pc = 0x157C74u;
    // 0x157c74: 0x97828824  lhu         $v0, -0x77DC($gp)
    ctx->pc = 0x157c74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936612)));
    // 0x157c78: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x157C78u;
    {
        const bool branch_taken_0x157c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C78u;
        // 0x157c7c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c78) {
            ctx->pc = 0x157CA8u;
            goto label_157ca8;
        }
    }
    ctx->pc = 0x157C80u;
    // 0x157c80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x157c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x157c84: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x157c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x157c88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x157c8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157C8Cu;
    {
        const bool branch_taken_0x157c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C8Cu;
        // 0x157c90: 0x30828000  andi        $v0, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c8c) {
            ctx->pc = 0x157CA8u;
            goto label_157ca8;
        }
    }
    ctx->pc = 0x157C94u;
    // 0x157c94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157C94u;
    {
        const bool branch_taken_0x157c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157c94) {
            ctx->pc = 0x157CA8u;
            goto label_157ca8;
        }
    }
    ctx->pc = 0x157C9Cu;
    // 0x157c9c: 0xc099810  jal         func_266040
    ctx->pc = 0x157C9Cu;
    SET_GPR_U32(ctx, 31, 0x157CA4u);
    ctx->pc = 0x266040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266040u, 0x157C9Cu, 0x157CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CA4u;
label_157ca4:
    // 0x157ca4: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x157ca4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_157ca8:
    // 0x157ca8: 0xc0991e8  jal         func_2647A0
    ctx->pc = 0x157CA8u;
    SET_GPR_U32(ctx, 31, 0x157CB0u);
    ctx->pc = 0x2647A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2647A0u, 0x157CA8u, 0x157CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CB0u;
label_157cb0:
    // 0x157cb0: 0xc0d36e4  jal         func_34DB90
    ctx->pc = 0x157CB0u;
    SET_GPR_U32(ctx, 31, 0x157CB8u);
    ctx->pc = 0x34DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DB90u, 0x157CB0u, 0x157CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CB8u;
label_157cb8:
    // 0x157cb8: 0xc0d36f4  jal         func_34DBD0
    ctx->pc = 0x157CB8u;
    SET_GPR_U32(ctx, 31, 0x157CC0u);
    ctx->pc = 0x34DBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DBD0u, 0x157CB8u, 0x157CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CC0u;
label_157cc0:
    // 0x157cc0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x157cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x157cc4: 0xc094fcc  jal         func_253F30
    ctx->pc = 0x157CC4u;
    SET_GPR_U32(ctx, 31, 0x157CCCu);
    ctx->pc = 0x157CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CC4u;
    // 0x157cc8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F30u, 0x157CC4u, 0x157CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CCCu;
label_157ccc:
    // 0x157ccc: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x157cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x157cd0: 0xc0c2d80  jal         func_30B600
    ctx->pc = 0x157CD0u;
    SET_GPR_U32(ctx, 31, 0x157CD8u);
    ctx->pc = 0x157CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CD0u;
    // 0x157cd4: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B600u, 0x157CD0u, 0x157CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CD8u;
label_157cd8:
    // 0x157cd8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x157cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x157cdc: 0xc0bd4a8  jal         func_2F52A0
    ctx->pc = 0x157CDCu;
    SET_GPR_U32(ctx, 31, 0x157CE4u);
    ctx->pc = 0x157CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CDCu;
    // 0x157ce0: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F52A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F52A0u, 0x157CDCu, 0x157CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CE4u;
label_157ce4:
    // 0x157ce4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x157ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x157ce8: 0xc0bd510  jal         func_2F5440
    ctx->pc = 0x157CE8u;
    SET_GPR_U32(ctx, 31, 0x157CF0u);
    ctx->pc = 0x157CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CE8u;
    // 0x157cec: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5440u, 0x157CE8u, 0x157CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CF0u;
label_157cf0:
    // 0x157cf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157cf4: 0x1043029a  beq         $v0, $v1, . + 4 + (0x29A << 2)
    ctx->pc = 0x157CF4u;
    {
        const bool branch_taken_0x157cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x157CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CF4u;
        // 0x157cf8: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cf4) {
            ctx->pc = 0x158760u;
            goto label_158760;
        }
    }
    ctx->pc = 0x157CFCu;
    // 0x157cfc: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x157cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x157d00: 0x94256ac4  lhu         $a1, 0x6AC4($at)
    ctx->pc = 0x157d00u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
    // 0x157d04: 0xc054590  jal         func_151640
    ctx->pc = 0x157D04u;
    SET_GPR_U32(ctx, 31, 0x157D0Cu);
    ctx->pc = 0x157D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D04u;
    // 0x157d08: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151640u, 0x157D04u, 0x157D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D0Cu;
label_157d0c:
    // 0x157d0c: 0x14400294  bnez        $v0, . + 4 + (0x294 << 2)
    ctx->pc = 0x157D0Cu;
    {
        const bool branch_taken_0x157d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157d0c) {
            ctx->pc = 0x158760u;
            goto label_158760;
        }
    }
    ctx->pc = 0x157D14u;
    // 0x157d14: 0xc0b369c  jal         func_2CDA70
    ctx->pc = 0x157D14u;
    SET_GPR_U32(ctx, 31, 0x157D1Cu);
    ctx->pc = 0x2CDA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA70u, 0x157D14u, 0x157D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D1Cu;
label_157d1c:
    // 0x157d1c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x157d20: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x157d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x157d24: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x157d24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x157d28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x157d2c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x157D2Cu;
    {
        const bool branch_taken_0x157d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D2Cu;
        // 0x157d30: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d2c) {
            ctx->pc = 0x157DB8u;
            goto label_157db8;
        }
    }
    ctx->pc = 0x157D34u;
    // 0x157d34: 0x27928060  addiu       $s2, $gp, -0x7FA0
    ctx->pc = 0x157d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_157d38:
    // 0x157d38: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x157d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x157d3c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x157D3Cu;
    {
        const bool branch_taken_0x157d3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d3c) {
            ctx->pc = 0x157D58u;
            goto label_157d58;
        }
    }
    ctx->pc = 0x157D44u;
    // 0x157d44: 0x8f828a10  lw          $v0, -0x75F0($gp)
    ctx->pc = 0x157d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x157d48: 0x24a404e0  addiu       $a0, $a1, 0x4E0
    ctx->pc = 0x157d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1248));
    // 0x157d4c: 0xc099530  jal         func_2654C0
    ctx->pc = 0x157D4Cu;
    SET_GPR_U32(ctx, 31, 0x157D54u);
    ctx->pc = 0x157D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D4Cu;
    // 0x157d50: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2654C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2654C0u, 0x157D4Cu, 0x157D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D54u;
label_157d54:
    // 0x157d54: 0x0  nop
    ctx->pc = 0x157d54u;
    // NOP
label_157d58:
    // 0x157d58: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x157d58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x157d5c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x157d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x157d60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x157D60u;
    {
        const bool branch_taken_0x157d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D60u;
        // 0x157d64: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d60) {
            ctx->pc = 0x157D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157d38;
        }
    }
    ctx->pc = 0x157D68u;
    // 0x157d68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x157d6c: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x157d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x157d70: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x157d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x157d74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x157D74u;
    {
        const bool branch_taken_0x157d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d74) {
            ctx->pc = 0x157DB8u;
            goto label_157db8;
        }
    }
    ctx->pc = 0x157D7Cu;
    // 0x157d7c: 0x8f828060  lw          $v0, -0x7FA0($gp)
    ctx->pc = 0x157d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x157d80: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x157D80u;
    {
        const bool branch_taken_0x157d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d80) {
            ctx->pc = 0x157DB8u;
            goto label_157db8;
        }
    }
    ctx->pc = 0x157D88u;
    // 0x157d88: 0x8f848064  lw          $a0, -0x7F9C($gp)
    ctx->pc = 0x157d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x157d8c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x157D8Cu;
    {
        const bool branch_taken_0x157d8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d8c) {
            ctx->pc = 0x157DB8u;
            goto label_157db8;
        }
    }
    ctx->pc = 0x157D94u;
    // 0x157d94: 0xdc420500  ld          $v0, 0x500($v0)
    ctx->pc = 0x157d94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 1280)));
    // 0x157d98: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x157d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x157d9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157D9Cu;
    {
        const bool branch_taken_0x157d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d9c) {
            ctx->pc = 0x157DB8u;
            goto label_157db8;
        }
    }
    ctx->pc = 0x157DA4u;
    // 0x157da4: 0xdc830500  ld          $v1, 0x500($a0)
    ctx->pc = 0x157da4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x157da8: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x157da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x157dac: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x157dacu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x157db0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x157db4: 0xfc820500  sd          $v0, 0x500($a0)
    ctx->pc = 0x157db4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1280), GPR_U64(ctx, 2));
label_157db8:
    // 0x157db8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x157db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x157dbc: 0xc052c68  jal         func_14B1A0
    ctx->pc = 0x157DBCu;
    SET_GPR_U32(ctx, 31, 0x157DC4u);
    ctx->pc = 0x157DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DBCu;
    // 0x157dc0: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B1A0u, 0x157DBCu, 0x157DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DC4u;
label_157dc4:
    // 0x157dc4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x157dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x157dc8: 0xc051048  jal         func_144120
    ctx->pc = 0x157DC8u;
    SET_GPR_U32(ctx, 31, 0x157DD0u);
    ctx->pc = 0x157DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DC8u;
    // 0x157dcc: 0x248486e0  addiu       $a0, $a0, -0x7920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x157DC8u, 0x157DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DD0u;
label_157dd0:
    // 0x157dd0: 0xc07cab4  jal         func_1F2AD0
    ctx->pc = 0x157DD0u;
    SET_GPR_U32(ctx, 31, 0x157DD8u);
    ctx->pc = 0x1F2AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2AD0u, 0x157DD0u, 0x157DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DD8u;
label_157dd8:
    // 0x157dd8: 0x9782881c  lhu         $v0, -0x77E4($gp)
    ctx->pc = 0x157dd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x157ddc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157DDCu;
    {
        const bool branch_taken_0x157ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DDCu;
        // 0x157de0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ddc) {
            ctx->pc = 0x157DF0u;
            goto label_157df0;
        }
    }
    ctx->pc = 0x157DE4u;
    // 0x157de4: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x157de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x157de8: 0xa022e000  sb          $v0, -0x2000($at)
    ctx->pc = 0x157de8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8DE000u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE000u, _value); } while (0);
    // 0x157dec: 0x0  nop
    ctx->pc = 0x157decu;
    // NOP
label_157df0:
    // 0x157df0: 0x8f8286e4  lw          $v0, -0x791C($gp)
    ctx->pc = 0x157df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936292)));
    // 0x157df4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157DF4u;
    {
        const bool branch_taken_0x157df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DF4u;
        // 0x157df8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157df4) {
            ctx->pc = 0x157E08u;
            goto label_157e08;
        }
    }
    ctx->pc = 0x157DFCu;
    // 0x157dfc: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x157dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x157e00: 0xa022e000  sb          $v0, -0x2000($at)
    ctx->pc = 0x157e00u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8DE000u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE000u, _value); } while (0);
    // 0x157e04: 0x0  nop
    ctx->pc = 0x157e04u;
    // NOP
label_157e08:
    // 0x157e08: 0x97828818  lhu         $v0, -0x77E8($gp)
    ctx->pc = 0x157e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x157e0c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x157E0Cu;
    {
        const bool branch_taken_0x157e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157e0c) {
            ctx->pc = 0x157E70u;
            goto label_157e70;
        }
    }
    ctx->pc = 0x157E14u;
    // 0x157e14: 0x8f828c7c  lw          $v0, -0x7384($gp)
    ctx->pc = 0x157e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
    // 0x157e18: 0x26046840  addiu       $a0, $s0, 0x6840
    ctx->pc = 0x157e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26688));
    // 0x157e1c: 0xc06462c  jal         func_1918B0
    ctx->pc = 0x157E1Cu;
    SET_GPR_U32(ctx, 31, 0x157E24u);
    ctx->pc = 0x157E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E1Cu;
    // 0x157e20: 0xaf828c80  sw          $v0, -0x7380($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918B0u, 0x157E1Cu, 0x157E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E24u;
label_157e24:
    // 0x157e24: 0x8f848c7c  lw          $a0, -0x7384($gp)
    ctx->pc = 0x157e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
    // 0x157e28: 0x8f828c80  lw          $v0, -0x7380($gp)
    ctx->pc = 0x157e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x157e2c: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157E2Cu;
    {
        const bool branch_taken_0x157e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x157E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E2Cu;
        // 0x157e30: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e2c) {
            ctx->pc = 0x157E48u;
            goto label_157e48;
        }
    }
    ctx->pc = 0x157E34u;
    // 0x157e34: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x157e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x157e38: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x157e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x157e3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x157e40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x157E40u;
    {
        const bool branch_taken_0x157e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157e40) {
            ctx->pc = 0x157E70u;
            goto label_157e70;
        }
    }
    ctx->pc = 0x157E48u;
label_157e48:
    // 0x157e48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x157e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x157e4c: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157E4Cu;
    {
        const bool branch_taken_0x157e4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x157e4c) {
            ctx->pc = 0x157E68u;
            goto label_157e68;
        }
    }
    ctx->pc = 0x157E54u;
    // 0x157e54: 0xc0ec6f4  jal         func_3B1BD0
    ctx->pc = 0x157E54u;
    SET_GPR_U32(ctx, 31, 0x157E5Cu);
    ctx->pc = 0x157E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E54u;
    // 0x157e58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1BD0u, 0x157E54u, 0x157E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E5Cu;
label_157e5c:
    // 0x157e5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157E5Cu;
    {
        const bool branch_taken_0x157e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157e5c) {
            ctx->pc = 0x157E70u;
            goto label_157e70;
        }
    }
    ctx->pc = 0x157E64u;
    // 0x157e64: 0x0  nop
    ctx->pc = 0x157e64u;
    // NOP
label_157e68:
    // 0x157e68: 0xc0ec6f4  jal         func_3B1BD0
    ctx->pc = 0x157E68u;
    SET_GPR_U32(ctx, 31, 0x157E70u);
    ctx->pc = 0x157E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E68u;
    // 0x157e6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1BD0u, 0x157E68u, 0x157E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E70u;
label_157e70:
    // 0x157e70: 0xc056550  jal         func_159540
    ctx->pc = 0x157E70u;
    SET_GPR_U32(ctx, 31, 0x157E78u);
    ctx->pc = 0x157E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E70u;
    // 0x157e74: 0x2604796c  addiu       $a0, $s0, 0x796C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31084));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159540u, 0x157E70u, 0x157E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E78u;
label_157e78:
    // 0x157e78: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x157e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x157e7c: 0xc051858  jal         func_146160
    ctx->pc = 0x157E7Cu;
    SET_GPR_U32(ctx, 31, 0x157E84u);
    ctx->pc = 0x157E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E7Cu;
    // 0x157e80: 0x248487d0  addiu       $a0, $a0, -0x7830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146160u, 0x157E7Cu, 0x157E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E84u;
label_157e84:
    // 0x157e84: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x157e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x157e88: 0xc0c0e7c  jal         func_3039F0
    ctx->pc = 0x157E88u;
    SET_GPR_U32(ctx, 31, 0x157E90u);
    ctx->pc = 0x157E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E88u;
    // 0x157e8c: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3039F0u, 0x157E88u, 0x157E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E90u;
label_157e90:
    // 0x157e90: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x157e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x157e94: 0xc0c5e94  jal         func_317A50
    ctx->pc = 0x157E94u;
    SET_GPR_U32(ctx, 31, 0x157E9Cu);
    ctx->pc = 0x157E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E94u;
    // 0x157e98: 0x2484bb10  addiu       $a0, $a0, -0x44F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317A50u, 0x157E94u, 0x157E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E9Cu;
label_157e9c:
    // 0x157e9c: 0xc05a070  jal         func_1681C0
    ctx->pc = 0x157E9Cu;
    SET_GPR_U32(ctx, 31, 0x157EA4u);
    ctx->pc = 0x157EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E9Cu;
    // 0x157ea0: 0x2784861c  addiu       $a0, $gp, -0x79E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936092));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1681C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681C0u, 0x157E9Cu, 0x157EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157EA4u;
label_157ea4:
    // 0x157ea4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x157ea8: 0x8c22cee0  lw          $v0, -0x3120($at)
    ctx->pc = 0x157ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEE0u));
    // 0x157eac: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x157eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x157eb0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x157EB0u;
    {
        const bool branch_taken_0x157eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EB0u;
        // 0x157eb4: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157eb0) {
            ctx->pc = 0x157EE0u;
            goto label_157ee0;
        }
    }
    ctx->pc = 0x157EB8u;
    // 0x157eb8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x157eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x157ebc: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x157ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x157ec0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x157ec4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157EC4u;
    {
        const bool branch_taken_0x157ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157ec4) {
            ctx->pc = 0x157EE0u;
            goto label_157ee0;
        }
    }
    ctx->pc = 0x157ECCu;
    // 0x157ecc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x157ECCu;
    {
        const bool branch_taken_0x157ecc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x157ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157ECCu;
        // 0x157ed0: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ecc) {
            ctx->pc = 0x157EE0u;
            goto label_157ee0;
        }
    }
    ctx->pc = 0x157ED4u;
    // 0x157ed4: 0xc04f868  jal         func_13E1A0
    ctx->pc = 0x157ED4u;
    SET_GPR_U32(ctx, 31, 0x157EDCu);
    ctx->pc = 0x157ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157ED4u;
    // 0x157ed8: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E1A0u, 0x157ED4u, 0x157EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157EDCu;
label_157edc:
    // 0x157edc: 0x0  nop
    ctx->pc = 0x157edcu;
    // NOP
label_157ee0:
    // 0x157ee0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x157ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x157ee4: 0xc05387c  jal         func_14E1F0
    ctx->pc = 0x157EE4u;
    SET_GPR_U32(ctx, 31, 0x157EECu);
    ctx->pc = 0x157EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157EE4u;
    // 0x157ee8: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E1F0u, 0x157EE4u, 0x157EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157EECu;
label_157eec:
    // 0x157eec: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x157eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x157ef0: 0x80256ac8  lb          $a1, 0x6AC8($at)
    ctx->pc = 0x157ef0u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x7E6AC8u));
    // 0x157ef4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x157ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x157ef8: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x157ef8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x157efc: 0xc0d8ed8  jal         func_363B60
    ctx->pc = 0x157EFCu;
    SET_GPR_U32(ctx, 31, 0x157F04u);
    ctx->pc = 0x157F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157EFCu;
    // 0x157f00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363B60u, 0x157EFCu, 0x157F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F04u;
label_157f04:
    // 0x157f04: 0xc0c76b4  jal         func_31DAD0
    ctx->pc = 0x157F04u;
    SET_GPR_U32(ctx, 31, 0x157F0Cu);
    ctx->pc = 0x31DAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DAD0u, 0x157F04u, 0x157F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F0Cu;
label_157f0c:
    // 0x157f0c: 0xc0b281c  jal         func_2CA070
    ctx->pc = 0x157F0Cu;
    SET_GPR_U32(ctx, 31, 0x157F14u);
    ctx->pc = 0x2CA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA070u, 0x157F0Cu, 0x157F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F14u;
label_157f14:
    // 0x157f14: 0xc09f998  jal         func_27E660
    ctx->pc = 0x157F14u;
    SET_GPR_U32(ctx, 31, 0x157F1Cu);
    ctx->pc = 0x27E660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E660u, 0x157F14u, 0x157F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F1Cu;
label_157f1c:
    // 0x157f1c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x157f20: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x157f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x157f24: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x157f24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x157f28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x157f2c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x157F2Cu;
    {
        const bool branch_taken_0x157f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F2Cu;
        // 0x157f30: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f2c) {
            ctx->pc = 0x157F60u;
            goto label_157f60;
        }
    }
    ctx->pc = 0x157F34u;
    // 0x157f34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x157f38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157F38u;
    {
        const bool branch_taken_0x157f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F38u;
        // 0x157f3c: 0x3c04008f  lui         $a0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f38) {
            ctx->pc = 0x157F50u;
            goto label_157f50;
        }
    }
    ctx->pc = 0x157F40u;
    // 0x157f40: 0xc0c8a44  jal         func_322910
    ctx->pc = 0x157F40u;
    SET_GPR_U32(ctx, 31, 0x157F48u);
    ctx->pc = 0x157F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F40u;
    // 0x157f44: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322910u, 0x157F40u, 0x157F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F48u;
label_157f48:
    // 0x157f48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x157F48u;
    {
        const bool branch_taken_0x157f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f48) {
            ctx->pc = 0x157F60u;
            goto label_157f60;
        }
    }
    ctx->pc = 0x157F50u;
label_157f50:
    // 0x157f50: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x157f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x157f54: 0xc0c8bd0  jal         func_322F40
    ctx->pc = 0x157F54u;
    SET_GPR_U32(ctx, 31, 0x157F5Cu);
    ctx->pc = 0x157F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F54u;
    // 0x157f58: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F40u, 0x157F54u, 0x157F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F5Cu;
label_157f5c:
    // 0x157f5c: 0x0  nop
    ctx->pc = 0x157f5cu;
    // NOP
label_157f60:
    // 0x157f60: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x157f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x157f64: 0xc0c84ac  jal         func_3212B0
    ctx->pc = 0x157F64u;
    SET_GPR_U32(ctx, 31, 0x157F6Cu);
    ctx->pc = 0x157F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F64u;
    // 0x157f68: 0x2484ea40  addiu       $a0, $a0, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3212B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3212B0u, 0x157F64u, 0x157F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F6Cu;
label_157f6c:
    // 0x157f6c: 0x9782881c  lhu         $v0, -0x77E4($gp)
    ctx->pc = 0x157f6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x157f70: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x157F70u;
    {
        const bool branch_taken_0x157f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157f70) {
            ctx->pc = 0x157FE0u;
            goto label_157fe0;
        }
    }
    ctx->pc = 0x157F78u;
    // 0x157f78: 0x8f828a10  lw          $v0, -0x75F0($gp)
    ctx->pc = 0x157f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x157f7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157F7Cu;
    {
        const bool branch_taken_0x157f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157f7c) {
            ctx->pc = 0x157F98u;
            goto label_157f98;
        }
    }
    ctx->pc = 0x157F84u;
    // 0x157f84: 0xc097f40  jal         func_25FD00
    ctx->pc = 0x157F84u;
    SET_GPR_U32(ctx, 31, 0x157F8Cu);
    ctx->pc = 0x25FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FD00u, 0x157F84u, 0x157F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F8Cu;
label_157f8c:
    // 0x157f8c: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x157f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x157f90: 0xc0a73ac  jal         func_29CEB0
    ctx->pc = 0x157F90u;
    SET_GPR_U32(ctx, 31, 0x157F98u);
    ctx->pc = 0x157F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F90u;
    // 0x157f94: 0x2484f610  addiu       $a0, $a0, -0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CEB0u, 0x157F90u, 0x157F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F98u;
label_157f98:
    // 0x157f98: 0x8f828a10  lw          $v0, -0x75F0($gp)
    ctx->pc = 0x157f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x157f9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157F9Cu;
    {
        const bool branch_taken_0x157f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F9Cu;
        // 0x157fa0: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f9c) {
            ctx->pc = 0x157FB0u;
            goto label_157fb0;
        }
    }
    ctx->pc = 0x157FA4u;
    // 0x157fa4: 0xc0a73ac  jal         func_29CEB0
    ctx->pc = 0x157FA4u;
    SET_GPR_U32(ctx, 31, 0x157FACu);
    ctx->pc = 0x157FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FA4u;
    // 0x157fa8: 0x248423a0  addiu       $a0, $a0, 0x23A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CEB0u, 0x157FA4u, 0x157FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FACu;
label_157fac:
    // 0x157fac: 0x0  nop
    ctx->pc = 0x157facu;
    // NOP
label_157fb0:
    // 0x157fb0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x157fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x157fb4: 0xc0a73ac  jal         func_29CEB0
    ctx->pc = 0x157FB4u;
    SET_GPR_U32(ctx, 31, 0x157FBCu);
    ctx->pc = 0x157FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FB4u;
    // 0x157fb8: 0x24842f20  addiu       $a0, $a0, 0x2F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CEB0u, 0x157FB4u, 0x157FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FBCu;
label_157fbc:
    // 0x157fbc: 0x8f828a10  lw          $v0, -0x75F0($gp)
    ctx->pc = 0x157fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x157fc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157FC0u;
    {
        const bool branch_taken_0x157fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FC0u;
        // 0x157fc4: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fc0) {
            ctx->pc = 0x157FD0u;
            goto label_157fd0;
        }
    }
    ctx->pc = 0x157FC8u;
    // 0x157fc8: 0xc0a73ac  jal         func_29CEB0
    ctx->pc = 0x157FC8u;
    SET_GPR_U32(ctx, 31, 0x157FD0u);
    ctx->pc = 0x157FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FC8u;
    // 0x157fcc: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CEB0u, 0x157FC8u, 0x157FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FD0u;
label_157fd0:
    // 0x157fd0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x157fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x157fd4: 0xc0a73ac  jal         func_29CEB0
    ctx->pc = 0x157FD4u;
    SET_GPR_U32(ctx, 31, 0x157FDCu);
    ctx->pc = 0x157FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FD4u;
    // 0x157fd8: 0x24840d40  addiu       $a0, $a0, 0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CEB0u, 0x157FD4u, 0x157FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FDCu;
label_157fdc:
    // 0x157fdc: 0x0  nop
    ctx->pc = 0x157fdcu;
    // NOP
label_157fe0:
    // 0x157fe0: 0x9782881c  lhu         $v0, -0x77E4($gp)
    ctx->pc = 0x157fe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x157fe4: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x157FE4u;
    {
        const bool branch_taken_0x157fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157fe4) {
            ctx->pc = 0x1580A8u;
            goto label_1580a8;
        }
    }
    ctx->pc = 0x157FECu;
    // 0x157fec: 0x8f828a10  lw          $v0, -0x75F0($gp)
    ctx->pc = 0x157fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x157ff0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157FF0u;
    {
        const bool branch_taken_0x157ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FF0u;
        // 0x157ff4: 0x3c04008c  lui         $a0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ff0) {
            ctx->pc = 0x158008u;
            goto label_158008;
        }
    }
    ctx->pc = 0x157FF8u;
    // 0x157ff8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x157ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x157ffc: 0x2484f610  addiu       $a0, $a0, -0x9F0
    ctx->pc = 0x157ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
    // 0x158000: 0xc0a7410  jal         func_29D040
    ctx->pc = 0x158000u;
    SET_GPR_U32(ctx, 31, 0x158008u);
    ctx->pc = 0x158004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158000u;
    // 0x158004: 0x24a53d30  addiu       $a1, $a1, 0x3D30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D040u, 0x158000u, 0x158008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158008u;
label_158008:
    // 0x158008: 0x8f828a10  lw          $v0, -0x75F0($gp)
    ctx->pc = 0x158008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x15800c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15800Cu;
    {
        const bool branch_taken_0x15800c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15800Cu;
        // 0x158010: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15800c) {
            ctx->pc = 0x158028u;
            goto label_158028;
        }
    }
    ctx->pc = 0x158014u;
    // 0x158014: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x158014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x158018: 0x248423a0  addiu       $a0, $a0, 0x23A0
    ctx->pc = 0x158018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9120));
    // 0x15801c: 0xc0a7410  jal         func_29D040
    ctx->pc = 0x15801Cu;
    SET_GPR_U32(ctx, 31, 0x158024u);
    ctx->pc = 0x158020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15801Cu;
    // 0x158020: 0x24a538a0  addiu       $a1, $a1, 0x38A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D040u, 0x15801Cu, 0x158024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158024u;
label_158024:
    // 0x158024: 0x0  nop
    ctx->pc = 0x158024u;
    // NOP
label_158028:
    // 0x158028: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x158028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x15802c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x15802cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x158030: 0x24842f20  addiu       $a0, $a0, 0x2F20
    ctx->pc = 0x158030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    // 0x158034: 0xc0a7410  jal         func_29D040
    ctx->pc = 0x158034u;
    SET_GPR_U32(ctx, 31, 0x15803Cu);
    ctx->pc = 0x158038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158034u;
    // 0x158038: 0x24a561e0  addiu       $a1, $a1, 0x61E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D040u, 0x158034u, 0x15803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15803Cu;
label_15803c:
    // 0x15803c: 0xc09f7c8  jal         func_27DF20
    ctx->pc = 0x15803Cu;
    SET_GPR_U32(ctx, 31, 0x158044u);
    ctx->pc = 0x27DF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DF20u, 0x15803Cu, 0x158044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158044u;
label_158044:
    // 0x158044: 0x8f828a10  lw          $v0, -0x75F0($gp)
    ctx->pc = 0x158044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x158048: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x158048u;
    {
        const bool branch_taken_0x158048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158048u;
        // 0x15804c: 0x3c04008c  lui         $a0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158048) {
            ctx->pc = 0x158060u;
            goto label_158060;
        }
    }
    ctx->pc = 0x158050u;
    // 0x158050: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x158050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x158054: 0x2484f610  addiu       $a0, $a0, -0x9F0
    ctx->pc = 0x158054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
    // 0x158058: 0xc0a7410  jal         func_29D040
    ctx->pc = 0x158058u;
    SET_GPR_U32(ctx, 31, 0x158060u);
    ctx->pc = 0x15805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158058u;
    // 0x15805c: 0x24a53d60  addiu       $a1, $a1, 0x3D60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D040u, 0x158058u, 0x158060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158060u;
label_158060:
    // 0x158060: 0x8f828a10  lw          $v0, -0x75F0($gp)
    ctx->pc = 0x158060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x158064: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x158064u;
    {
        const bool branch_taken_0x158064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158064u;
        // 0x158068: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158064) {
            ctx->pc = 0x158090u;
            goto label_158090;
        }
    }
    ctx->pc = 0x15806Cu;
    // 0x15806c: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x15806cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x158070: 0x248423a0  addiu       $a0, $a0, 0x23A0
    ctx->pc = 0x158070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9120));
    // 0x158074: 0xc0a7410  jal         func_29D040
    ctx->pc = 0x158074u;
    SET_GPR_U32(ctx, 31, 0x15807Cu);
    ctx->pc = 0x158078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158074u;
    // 0x158078: 0x24a538b0  addiu       $a1, $a1, 0x38B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D040u, 0x158074u, 0x15807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15807Cu;
label_15807c:
    // 0x15807c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x15807cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x158080: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x158080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x158084: 0x24844e70  addiu       $a0, $a0, 0x4E70
    ctx->pc = 0x158084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    // 0x158088: 0xc0a7410  jal         func_29D040
    ctx->pc = 0x158088u;
    SET_GPR_U32(ctx, 31, 0x158090u);
    ctx->pc = 0x15808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158088u;
    // 0x15808c: 0x24a5c880  addiu       $a1, $a1, -0x3780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D040u, 0x158088u, 0x158090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158090u;
label_158090:
    // 0x158090: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x158090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x158094: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x158094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x158098: 0x24842f20  addiu       $a0, $a0, 0x2F20
    ctx->pc = 0x158098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    // 0x15809c: 0xc0a7410  jal         func_29D040
    ctx->pc = 0x15809Cu;
    SET_GPR_U32(ctx, 31, 0x1580A4u);
    ctx->pc = 0x1580A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15809Cu;
    // 0x1580a0: 0x24a561f0  addiu       $a1, $a1, 0x61F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D040u, 0x15809Cu, 0x1580A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580A4u;
label_1580a4:
    // 0x1580a4: 0x0  nop
    ctx->pc = 0x1580a4u;
    // NOP
label_1580a8:
    // 0x1580a8: 0xc0a63d4  jal         func_298F50
    ctx->pc = 0x1580A8u;
    SET_GPR_U32(ctx, 31, 0x1580B0u);
    ctx->pc = 0x298F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298F50u, 0x1580A8u, 0x1580B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580B0u;
label_1580b0:
    // 0x1580b0: 0xc0e26e8  jal         func_389BA0
    ctx->pc = 0x1580B0u;
    SET_GPR_U32(ctx, 31, 0x1580B8u);
    ctx->pc = 0x389BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389BA0u, 0x1580B0u, 0x1580B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580B8u;
label_1580b8:
    // 0x1580b8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1580b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1580bc: 0x80256ac8  lb          $a1, 0x6AC8($at)
    ctx->pc = 0x1580bcu;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x7E6AC8u));
    // 0x1580c0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1580c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1580c4: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1580c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1580c8: 0xc0d8ed8  jal         func_363B60
    ctx->pc = 0x1580C8u;
    SET_GPR_U32(ctx, 31, 0x1580D0u);
    ctx->pc = 0x1580CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580C8u;
    // 0x1580cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363B60u, 0x1580C8u, 0x1580D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580D0u;
label_1580d0:
    // 0x1580d0: 0x9782881c  lhu         $v0, -0x77E4($gp)
    ctx->pc = 0x1580d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x1580d4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1580D4u;
    {
        const bool branch_taken_0x1580d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1580D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580D4u;
        // 0x1580d8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1580d4) {
            ctx->pc = 0x158118u;
            goto label_158118;
        }
    }
    ctx->pc = 0x1580DCu;
    // 0x1580dc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1580dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1580e0: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x1580e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x1580e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1580e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1580e8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1580E8u;
    {
        const bool branch_taken_0x1580e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1580e8) {
            ctx->pc = 0x158118u;
            goto label_158118;
        }
    }
    ctx->pc = 0x1580F0u;
    // 0x1580f0: 0xc09cd1c  jal         func_273470
    ctx->pc = 0x1580F0u;
    SET_GPR_U32(ctx, 31, 0x1580F8u);
    ctx->pc = 0x273470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273470u, 0x1580F0u, 0x1580F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580F8u;
label_1580f8:
    // 0x1580f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1580f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1580fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1580fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x158100: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x158100u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x158104: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x158104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x158108: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158108u;
    {
        const bool branch_taken_0x158108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158108) {
            ctx->pc = 0x158118u;
            goto label_158118;
        }
    }
    ctx->pc = 0x158110u;
    // 0x158110: 0xc0b8628  jal         func_2E18A0
    ctx->pc = 0x158110u;
    SET_GPR_U32(ctx, 31, 0x158118u);
    ctx->pc = 0x2E18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E18A0u, 0x158110u, 0x158118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158118u;
label_158118:
    // 0x158118: 0xc0741ac  jal         func_1D06B0
    ctx->pc = 0x158118u;
    SET_GPR_U32(ctx, 31, 0x158120u);
    ctx->pc = 0x1D06B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06B0u, 0x158118u, 0x158120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158120u;
label_158120:
    // 0x158120: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x158120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x158124: 0xc053890  jal         func_14E240
    ctx->pc = 0x158124u;
    SET_GPR_U32(ctx, 31, 0x15812Cu);
    ctx->pc = 0x158128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158124u;
    // 0x158128: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E240u, 0x158124u, 0x15812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15812Cu;
label_15812c:
    // 0x15812c: 0x9782881c  lhu         $v0, -0x77E4($gp)
    ctx->pc = 0x15812cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x158130: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x158130u;
    {
        const bool branch_taken_0x158130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158130u;
        // 0x158134: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158130) {
            ctx->pc = 0x158168u;
            goto label_158168;
        }
    }
    ctx->pc = 0x158138u;
    // 0x158138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15813c: 0xc05d78c  jal         func_175E30
    ctx->pc = 0x15813Cu;
    SET_GPR_U32(ctx, 31, 0x158144u);
    ctx->pc = 0x158140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15813Cu;
    // 0x158140: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175E30u, 0x15813Cu, 0x158144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158144u;
label_158144:
    // 0x158144: 0x9382863c  lbu         $v0, -0x79C4($gp)
    ctx->pc = 0x158144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x158148: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x158148u;
    {
        const bool branch_taken_0x158148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158148u;
        // 0x15814c: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158148) {
            ctx->pc = 0x158190u;
            goto label_158190;
        }
    }
    ctx->pc = 0x158150u;
    // 0x158150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158154: 0xc05d78c  jal         func_175E30
    ctx->pc = 0x158154u;
    SET_GPR_U32(ctx, 31, 0x15815Cu);
    ctx->pc = 0x158158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158154u;
    // 0x158158: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175E30u, 0x158154u, 0x15815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15815Cu;
label_15815c:
    // 0x15815c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15815Cu;
    {
        const bool branch_taken_0x15815c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15815c) {
            ctx->pc = 0x158190u;
            goto label_158190;
        }
    }
    ctx->pc = 0x158164u;
    // 0x158164: 0x0  nop
    ctx->pc = 0x158164u;
    // NOP
label_158168:
    // 0x158168: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x158168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x15816c: 0x24846690  addiu       $a0, $a0, 0x6690
    ctx->pc = 0x15816cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    // 0x158170: 0xc05d6bc  jal         func_175AF0
    ctx->pc = 0x158170u;
    SET_GPR_U32(ctx, 31, 0x158178u);
    ctx->pc = 0x158174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158170u;
    // 0x158174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175AF0u, 0x158170u, 0x158178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158178u;
label_158178:
    // 0x158178: 0x9382863c  lbu         $v0, -0x79C4($gp)
    ctx->pc = 0x158178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x15817c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15817Cu;
    {
        const bool branch_taken_0x15817c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15817Cu;
        // 0x158180: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15817c) {
            ctx->pc = 0x158190u;
            goto label_158190;
        }
    }
    ctx->pc = 0x158184u;
    // 0x158184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158188: 0xc05d6bc  jal         func_175AF0
    ctx->pc = 0x158188u;
    SET_GPR_U32(ctx, 31, 0x158190u);
    ctx->pc = 0x15818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158188u;
    // 0x15818c: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175AF0u, 0x158188u, 0x158190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158190u;
label_158190:
    // 0x158190: 0x9782881c  lhu         $v0, -0x77E4($gp)
    ctx->pc = 0x158190u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x158194: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158194u;
    {
        const bool branch_taken_0x158194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158194u;
        // 0x158198: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158194) {
            ctx->pc = 0x1581B0u;
            goto label_1581b0;
        }
    }
    ctx->pc = 0x15819Cu;
    // 0x15819c: 0xc05d9d0  jal         func_176740
    ctx->pc = 0x15819Cu;
    SET_GPR_U32(ctx, 31, 0x1581A4u);
    ctx->pc = 0x1581A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15819Cu;
    // 0x1581a0: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176740u, 0x15819Cu, 0x1581A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581A4u;
label_1581a4:
    // 0x1581a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1581A4u;
    {
        const bool branch_taken_0x1581a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1581a4) {
            ctx->pc = 0x1581C0u;
            goto label_1581c0;
        }
    }
    ctx->pc = 0x1581ACu;
    // 0x1581ac: 0x0  nop
    ctx->pc = 0x1581acu;
    // NOP
label_1581b0:
    // 0x1581b0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1581b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1581b4: 0xc05d854  jal         func_176150
    ctx->pc = 0x1581B4u;
    SET_GPR_U32(ctx, 31, 0x1581BCu);
    ctx->pc = 0x1581B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581B4u;
    // 0x1581b8: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176150u, 0x1581B4u, 0x1581BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581BCu;
label_1581bc:
    // 0x1581bc: 0x0  nop
    ctx->pc = 0x1581bcu;
    // NOP
label_1581c0:
    // 0x1581c0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1581c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1581c4: 0xc053894  jal         func_14E250
    ctx->pc = 0x1581C4u;
    SET_GPR_U32(ctx, 31, 0x1581CCu);
    ctx->pc = 0x1581C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581C4u;
    // 0x1581c8: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E250u, 0x1581C4u, 0x1581CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581CCu;
label_1581cc:
    // 0x1581cc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1581ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1581d0: 0xc04e340  jal         func_138D00
    ctx->pc = 0x1581D0u;
    SET_GPR_U32(ctx, 31, 0x1581D8u);
    ctx->pc = 0x1581D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581D0u;
    // 0x1581d4: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D00u, 0x1581D0u, 0x1581D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581D8u;
label_1581d8:
    // 0x1581d8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1581d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x1581dc: 0xc0b45a0  jal         func_2D1680
    ctx->pc = 0x1581DCu;
    SET_GPR_U32(ctx, 31, 0x1581E4u);
    ctx->pc = 0x1581E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581DCu;
    // 0x1581e0: 0x24846cc0  addiu       $a0, $a0, 0x6CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1680u, 0x1581DCu, 0x1581E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581E4u;
label_1581e4:
    // 0x1581e4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1581e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x1581e8: 0xc0b45a0  jal         func_2D1680
    ctx->pc = 0x1581E8u;
    SET_GPR_U32(ctx, 31, 0x1581F0u);
    ctx->pc = 0x1581ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581E8u;
    // 0x1581ec: 0x24846ee0  addiu       $a0, $a0, 0x6EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1680u, 0x1581E8u, 0x1581F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581F0u;
label_1581f0:
    // 0x1581f0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1581f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x1581f4: 0xc0b65f4  jal         func_2D97D0
    ctx->pc = 0x1581F4u;
    SET_GPR_U32(ctx, 31, 0x1581FCu);
    ctx->pc = 0x1581F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581F4u;
    // 0x1581f8: 0x24847100  addiu       $a0, $a0, 0x7100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D97D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D97D0u, 0x1581F4u, 0x1581FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581FCu;
label_1581fc:
    // 0x1581fc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1581fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x158200: 0xc0d01e4  jal         func_340790
    ctx->pc = 0x158200u;
    SET_GPR_U32(ctx, 31, 0x158208u);
    ctx->pc = 0x158204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158200u;
    // 0x158204: 0x248440d0  addiu       $a0, $a0, 0x40D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340790u, 0x158200u, 0x158208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158208u;
label_158208:
    // 0x158208: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x158208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x15820c: 0xc0d7fb4  jal         func_35FED0
    ctx->pc = 0x15820Cu;
    SET_GPR_U32(ctx, 31, 0x158214u);
    ctx->pc = 0x158210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15820Cu;
    // 0x158210: 0x2484a100  addiu       $a0, $a0, -0x5F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FED0u, 0x15820Cu, 0x158214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158214u;
label_158214:
    // 0x158214: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158218: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x158218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x15821c: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x15821cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x158220: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x158220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x158224: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x158224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x158228: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x158228u;
    {
        const bool branch_taken_0x158228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158228u;
        // 0x15822c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158228) {
            ctx->pc = 0x158248u;
            goto label_158248;
        }
    }
    ctx->pc = 0x158230u;
    // 0x158230: 0x8c22cef4  lw          $v0, -0x310C($at)
    ctx->pc = 0x158230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954740)));
    // 0x158234: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x158234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x158238: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158238u;
    {
        const bool branch_taken_0x158238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158238u;
        // 0x15823c: 0x3c04008c  lui         $a0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158238) {
            ctx->pc = 0x158248u;
            goto label_158248;
        }
    }
    ctx->pc = 0x158240u;
    // 0x158240: 0xc09c3b0  jal         func_270EC0
    ctx->pc = 0x158240u;
    SET_GPR_U32(ctx, 31, 0x158248u);
    ctx->pc = 0x158244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158240u;
    // 0x158244: 0x24840620  addiu       $a0, $a0, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270EC0u, 0x158240u, 0x158248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158248u;
label_158248:
    // 0x158248: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x158248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x15824c: 0xc0b5c0c  jal         func_2D7030
    ctx->pc = 0x15824Cu;
    SET_GPR_U32(ctx, 31, 0x158254u);
    ctx->pc = 0x158250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15824Cu;
    // 0x158250: 0x24846ee0  addiu       $a0, $a0, 0x6EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7030u, 0x15824Cu, 0x158254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158254u;
label_158254:
    // 0x158254: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x158254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x158258: 0xc0b5c0c  jal         func_2D7030
    ctx->pc = 0x158258u;
    SET_GPR_U32(ctx, 31, 0x158260u);
    ctx->pc = 0x15825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158258u;
    // 0x15825c: 0x24846cc0  addiu       $a0, $a0, 0x6CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7030u, 0x158258u, 0x158260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158260u;
label_158260:
    // 0x158260: 0xc0b9d9c  jal         func_2E7670
    ctx->pc = 0x158260u;
    SET_GPR_U32(ctx, 31, 0x158268u);
    ctx->pc = 0x2E7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7670u, 0x158260u, 0x158268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158268u;
label_158268:
    // 0x158268: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x158268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x15826c: 0xc0b683c  jal         func_2DA0F0
    ctx->pc = 0x15826Cu;
    SET_GPR_U32(ctx, 31, 0x158274u);
    ctx->pc = 0x158270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15826Cu;
    // 0x158270: 0x24847100  addiu       $a0, $a0, 0x7100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA0F0u, 0x15826Cu, 0x158274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158274u;
label_158274:
    // 0x158274: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x158274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x158278: 0xc04c1c8  jal         func_130720
    ctx->pc = 0x158278u;
    SET_GPR_U32(ctx, 31, 0x158280u);
    ctx->pc = 0x15827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158278u;
    // 0x15827c: 0x24846d20  addiu       $a0, $a0, 0x6D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130720u, 0x158278u, 0x158280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158280u;
label_158280:
    // 0x158280: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x158280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x158284: 0xc04c264  jal         func_130990
    ctx->pc = 0x158284u;
    SET_GPR_U32(ctx, 31, 0x15828Cu);
    ctx->pc = 0x158288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158284u;
    // 0x158288: 0x24846d20  addiu       $a0, $a0, 0x6D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130990u, 0x158284u, 0x15828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15828Cu;
label_15828c:
    // 0x15828c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x15828cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x158290: 0xc0c2a8c  jal         func_30AA30
    ctx->pc = 0x158290u;
    SET_GPR_U32(ctx, 31, 0x158298u);
    ctx->pc = 0x158294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158290u;
    // 0x158294: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AA30u, 0x158290u, 0x158298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158298u;
label_158298:
    // 0x158298: 0xc05a374  jal         func_168DD0
    ctx->pc = 0x158298u;
    SET_GPR_U32(ctx, 31, 0x1582A0u);
    ctx->pc = 0x15829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158298u;
    // 0x15829c: 0x2784861c  addiu       $a0, $gp, -0x79E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936092));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168DD0u, 0x158298u, 0x1582A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582A0u;
label_1582a0:
    // 0x1582a0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1582a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x1582a4: 0xc0ad0f0  jal         func_2B43C0
    ctx->pc = 0x1582A4u;
    SET_GPR_U32(ctx, 31, 0x1582ACu);
    ctx->pc = 0x1582A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1582A4u;
    // 0x1582a8: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B43C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B43C0u, 0x1582A4u, 0x1582ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582ACu;
label_1582ac:
    // 0x1582ac: 0xc0963ec  jal         func_258FB0
    ctx->pc = 0x1582ACu;
    SET_GPR_U32(ctx, 31, 0x1582B4u);
    ctx->pc = 0x258FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FB0u, 0x1582ACu, 0x1582B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582B4u;
label_1582b4:
    // 0x1582b4: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x1582b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x1582b8: 0xc0694e8  jal         func_1A53A0
    ctx->pc = 0x1582B8u;
    SET_GPR_U32(ctx, 31, 0x1582C0u);
    ctx->pc = 0x1582BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1582B8u;
    // 0x1582bc: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A53A0u, 0x1582B8u, 0x1582C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582C0u;
label_1582c0:
    // 0x1582c0: 0xc096430  jal         func_2590C0
    ctx->pc = 0x1582C0u;
    SET_GPR_U32(ctx, 31, 0x1582C8u);
    ctx->pc = 0x2590C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2590C0u, 0x1582C0u, 0x1582C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582C8u;
label_1582c8:
    // 0x1582c8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1582c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x1582cc: 0xc0ad10c  jal         func_2B4430
    ctx->pc = 0x1582CCu;
    SET_GPR_U32(ctx, 31, 0x1582D4u);
    ctx->pc = 0x1582D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1582CCu;
    // 0x1582d0: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4430u, 0x1582CCu, 0x1582D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582D4u;
label_1582d4:
    // 0x1582d4: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x1582d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x1582d8: 0xc061f5c  jal         func_187D70
    ctx->pc = 0x1582D8u;
    SET_GPR_U32(ctx, 31, 0x1582E0u);
    ctx->pc = 0x1582DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1582D8u;
    // 0x1582dc: 0x248410c0  addiu       $a0, $a0, 0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D70u, 0x1582D8u, 0x1582E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582E0u;
label_1582e0:
    // 0x1582e0: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x1582e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x1582e4: 0xc0c3670  jal         func_30D9C0
    ctx->pc = 0x1582E4u;
    SET_GPR_U32(ctx, 31, 0x1582ECu);
    ctx->pc = 0x1582E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1582E4u;
    // 0x1582e8: 0x2484b500  addiu       $a0, $a0, -0x4B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D9C0u, 0x1582E4u, 0x1582ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582ECu;
label_1582ec:
    // 0x1582ec: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x1582ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x1582f0: 0xc0c5e9c  jal         func_317A70
    ctx->pc = 0x1582F0u;
    SET_GPR_U32(ctx, 31, 0x1582F8u);
    ctx->pc = 0x1582F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1582F0u;
    // 0x1582f4: 0x2484bb10  addiu       $a0, $a0, -0x44F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317A70u, 0x1582F0u, 0x1582F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582F8u;
label_1582f8:
    // 0x1582f8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1582f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1582fc: 0xc0510c0  jal         func_144300
    ctx->pc = 0x1582FCu;
    SET_GPR_U32(ctx, 31, 0x158304u);
    ctx->pc = 0x158300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1582FCu;
    // 0x158300: 0x248486e0  addiu       $a0, $a0, -0x7920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144300u, 0x1582FCu, 0x158304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158304u;
label_158304:
    // 0x158304: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x158304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x158308: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x158308u;
    SET_GPR_U32(ctx, 31, 0x158310u);
    ctx->pc = 0x15830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158308u;
    // 0x15830c: 0x2484f610  addiu       $a0, $a0, -0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x158308u, 0x158310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158310u;
label_158310:
    // 0x158310: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x158310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x158314: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x158314u;
    SET_GPR_U32(ctx, 31, 0x15831Cu);
    ctx->pc = 0x158318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158314u;
    // 0x158318: 0x248423a0  addiu       $a0, $a0, 0x23A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x158314u, 0x15831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15831Cu;
label_15831c:
    // 0x15831c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x15831cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x158320: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x158320u;
    SET_GPR_U32(ctx, 31, 0x158328u);
    ctx->pc = 0x158324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158320u;
    // 0x158324: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x158320u, 0x158328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158328u;
label_158328:
    // 0x158328: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x158328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x15832c: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x15832Cu;
    SET_GPR_U32(ctx, 31, 0x158334u);
    ctx->pc = 0x158330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15832Cu;
    // 0x158330: 0x24842f20  addiu       $a0, $a0, 0x2F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x15832Cu, 0x158334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158334u;
label_158334:
    // 0x158334: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x158334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x158338: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x158338u;
    SET_GPR_U32(ctx, 31, 0x158340u);
    ctx->pc = 0x15833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158338u;
    // 0x15833c: 0x24840d40  addiu       $a0, $a0, 0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x158338u, 0x158340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158340u;
label_158340:
    // 0x158340: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158344: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x158344u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x158348: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x158348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x15834c: 0x14400086  bnez        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x15834Cu;
    {
        const bool branch_taken_0x15834c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15834Cu;
        // 0x158350: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15834c) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x158354u;
    // 0x158354: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x158354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x158358: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x158358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x15835c: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x15835Cu;
    {
        const bool branch_taken_0x15835c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15835Cu;
        // 0x158360: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15835c) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x158364u;
    // 0x158364: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x158364u;
    {
        const bool branch_taken_0x158364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158364u;
        // 0x158368: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158364) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x15836Cu;
    // 0x15836c: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x15836cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x158370: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x158370u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x158374: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x158374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x158378: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x158378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15837c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15837cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x158380: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x158380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158384: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x158384u;
    {
        const bool branch_taken_0x158384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158384) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x15838Cu;
    // 0x15838c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15838cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158390: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x158390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x158394: 0x8c26cec0  lw          $a2, -0x3140($at)
    ctx->pc = 0x158394u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x158398: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x158398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x15839c: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x15839Cu;
    {
        const bool branch_taken_0x15839c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1583A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15839Cu;
        // 0x1583a0: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15839c) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x1583A4u;
    // 0x1583a4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1583a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1583a8: 0x1460006f  bnez        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x1583A8u;
    {
        const bool branch_taken_0x1583a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1583a8) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x1583B0u;
    // 0x1583b0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1583b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1583b4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1583b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1583b8: 0x1460006b  bnez        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x1583B8u;
    {
        const bool branch_taken_0x1583b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1583BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583B8u;
        // 0x1583bc: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583b8) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x1583C0u;
    // 0x1583c0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1583c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1583c4: 0x14600068  bnez        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x1583C4u;
    {
        const bool branch_taken_0x1583c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1583C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583C4u;
        // 0x1583c8: 0x3c010069  lui         $at, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583c4) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x1583CCu;
    // 0x1583cc: 0x8c235f10  lw          $v1, 0x5F10($at)
    ctx->pc = 0x1583ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24336)));
    // 0x1583d0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1583d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1583d4: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x1583D4u;
    {
        const bool branch_taken_0x1583d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1583D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583D4u;
        // 0x1583d8: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583d4) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x1583DCu;
    // 0x1583dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1583dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1583e0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1583e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1583e4: 0x8ca329c0  lw          $v1, 0x29C0($a1)
    ctx->pc = 0x1583e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10688)));
    // 0x1583e8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1583e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1583ec: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1583ECu;
    {
        const bool branch_taken_0x1583ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1583ec) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x1583F4u;
    // 0x1583f4: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x1583f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x1583f8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1583f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1583fc: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1583FCu;
    {
        const bool branch_taken_0x1583fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1583fc) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x158404u;
    // 0x158404: 0x9044000a  lbu         $a0, 0xA($v0)
    ctx->pc = 0x158404u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x158408: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15840c: 0x10830056  beq         $a0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x15840Cu;
    {
        const bool branch_taken_0x15840c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15840c) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x158414u;
    // 0x158414: 0x8ca306c8  lw          $v1, 0x6C8($a1)
    ctx->pc = 0x158414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1736)));
    // 0x158418: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x158418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15841c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x15841cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x158420: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x158420u;
    {
        const bool branch_taken_0x158420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158420) {
            ctx->pc = 0x158434u;
            goto label_158434;
        }
    }
    ctx->pc = 0x158428u;
    // 0x158428: 0x90a3065c  lbu         $v1, 0x65C($a1)
    ctx->pc = 0x158428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1628)));
    // 0x15842c: 0x386300fb  xori        $v1, $v1, 0xFB
    ctx->pc = 0x15842cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)251);
    // 0x158430: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x158430u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_158434:
    // 0x158434: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x158434u;
    {
        const bool branch_taken_0x158434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158434) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x15843Cu;
    // 0x15843c: 0x8c4306c8  lw          $v1, 0x6C8($v0)
    ctx->pc = 0x15843cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1736)));
    // 0x158440: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x158440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x158444: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x158444u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x158448: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x158448u;
    {
        const bool branch_taken_0x158448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158448) {
            ctx->pc = 0x15845Cu;
            goto label_15845c;
        }
    }
    ctx->pc = 0x158450u;
    // 0x158450: 0x9042065c  lbu         $v0, 0x65C($v0)
    ctx->pc = 0x158450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1628)));
    // 0x158454: 0x384200fb  xori        $v0, $v0, 0xFB
    ctx->pc = 0x158454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)251);
    // 0x158458: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x158458u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15845c:
    // 0x15845c: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x15845Cu;
    {
        const bool branch_taken_0x15845c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15845c) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x158464u;
    // 0x158464: 0x9782881c  lhu         $v0, -0x77E4($gp)
    ctx->pc = 0x158464u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x158468: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x158468u;
    {
        const bool branch_taken_0x158468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158468) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x158470u;
    // 0x158470: 0x97828818  lhu         $v0, -0x77E8($gp)
    ctx->pc = 0x158470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x158474: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x158474u;
    {
        const bool branch_taken_0x158474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158474) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x15847Cu;
    // 0x15847c: 0x8f8286e4  lw          $v0, -0x791C($gp)
    ctx->pc = 0x15847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936292)));
    // 0x158480: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x158480u;
    {
        const bool branch_taken_0x158480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158480) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x158488u;
    // 0x158488: 0xc0b31b8  jal         func_2CC6E0
    ctx->pc = 0x158488u;
    SET_GPR_U32(ctx, 31, 0x158490u);
    ctx->pc = 0x2CC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC6E0u, 0x158488u, 0x158490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158490u;
label_158490:
    // 0x158490: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x158490u;
    {
        const bool branch_taken_0x158490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158490) {
            ctx->pc = 0x158568u;
            goto label_158568;
        }
    }
    ctx->pc = 0x158498u;
    // 0x158498: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x158498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15849c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x15849cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1584a0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1584a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1584a4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x1584a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x1584a8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x1584a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x1584ac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1584acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1584b0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1584b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1584b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1584b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1584b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1584b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1584bc: 0x0  nop
    ctx->pc = 0x1584bcu;
    // NOP
    // 0x1584c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1584c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1584c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1584c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1584c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1584C8u;
    {
        const bool branch_taken_0x1584c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1584c8) {
            ctx->pc = 0x1584E0u;
            goto label_1584e0;
        }
    }
    ctx->pc = 0x1584D0u;
    // 0x1584d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1584d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1584d4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1584d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1584d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1584D8u;
    {
        const bool branch_taken_0x1584d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1584d8) {
            ctx->pc = 0x1584F8u;
            goto label_1584f8;
        }
    }
    ctx->pc = 0x1584E0u;
label_1584e0:
    // 0x1584e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1584e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1584e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1584e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1584e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1584e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1584ec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1584ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1584f0: 0x0  nop
    ctx->pc = 0x1584f0u;
    // NOP
    // 0x1584f4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1584f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1584f8:
    // 0x1584f8: 0xc0b2d88  jal         func_2CB620
    ctx->pc = 0x1584F8u;
    SET_GPR_U32(ctx, 31, 0x158500u);
    ctx->pc = 0x2CB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB620u, 0x1584F8u, 0x158500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158500u;
label_158500:
    // 0x158500: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x158500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158504: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x158504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x158508: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x158508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15850c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x15850cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x158510: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x158510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x158514: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x158514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x158518: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x158518u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15851c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15851cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158524: 0x0  nop
    ctx->pc = 0x158524u;
    // NOP
    // 0x158528: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x158528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15852c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15852cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158530: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x158530u;
    {
        const bool branch_taken_0x158530 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158530) {
            ctx->pc = 0x158548u;
            goto label_158548;
        }
    }
    ctx->pc = 0x158538u;
    // 0x158538: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x158538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15853c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15853cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158540: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x158540u;
    {
        const bool branch_taken_0x158540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158540) {
            ctx->pc = 0x158560u;
            goto label_158560;
        }
    }
    ctx->pc = 0x158548u;
label_158548:
    // 0x158548: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x158548u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15854c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15854cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x158550: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x158550u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x158554: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x158554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158558: 0x0  nop
    ctx->pc = 0x158558u;
    // NOP
    // 0x15855c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15855cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_158560:
    // 0x158560: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x158560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x158564: 0xa023e000  sb          $v1, -0x2000($at)
    ctx->pc = 0x158564u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8DE000u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE000u, _value); } while (0);
label_158568:
    // 0x158568: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15856c: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x15856cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x158570: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x158570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x158574: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x158574u;
    {
        const bool branch_taken_0x158574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158574u;
        // 0x158578: 0x3c110069  lui         $s1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158574) {
            ctx->pc = 0x1585E8u;
            goto label_1585e8;
        }
    }
    ctx->pc = 0x15857Cu;
    // 0x15857c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15857cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158580: 0x27938060  addiu       $s3, $gp, -0x7FA0
    ctx->pc = 0x158580u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x158584: 0x279285f8  addiu       $s2, $gp, -0x7A08
    ctx->pc = 0x158584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936056));
    // 0x158588: 0x26315ab0  addiu       $s1, $s1, 0x5AB0
    ctx->pc = 0x158588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23216));
    // 0x15858c: 0x0  nop
    ctx->pc = 0x15858cu;
    // NOP
label_158590:
    // 0x158590: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x158590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x158594: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x158594u;
    {
        const bool branch_taken_0x158594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158594) {
            ctx->pc = 0x1585D0u;
            goto label_1585d0;
        }
    }
    ctx->pc = 0x15859Cu;
    // 0x15859c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1585a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1585A0u;
    {
        const bool branch_taken_0x1585a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1585a0) {
            ctx->pc = 0x1585D0u;
            goto label_1585d0;
        }
    }
    ctx->pc = 0x1585A8u;
    // 0x1585a8: 0x8e220460  lw          $v0, 0x460($s1)
    ctx->pc = 0x1585a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1120)));
    // 0x1585ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1585acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1585b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1585B0u;
    {
        const bool branch_taken_0x1585b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1585B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585B0u;
        // 0x1585b4: 0x328400ff  andi        $a0, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585b0) {
            ctx->pc = 0x1585D0u;
            goto label_1585d0;
        }
    }
    ctx->pc = 0x1585B8u;
    // 0x1585b8: 0xc0b318c  jal         func_2CC630
    ctx->pc = 0x1585B8u;
    SET_GPR_U32(ctx, 31, 0x1585C0u);
    ctx->pc = 0x2CC630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC630u, 0x1585B8u, 0x1585C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1585C0u;
label_1585c0:
    // 0x1585c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1585C0u;
    {
        const bool branch_taken_0x1585c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1585C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585C0u;
        // 0x1585c4: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585c0) {
            ctx->pc = 0x1585D0u;
            goto label_1585d0;
        }
    }
    ctx->pc = 0x1585C8u;
    // 0x1585c8: 0xc0b2d88  jal         func_2CB620
    ctx->pc = 0x1585C8u;
    SET_GPR_U32(ctx, 31, 0x1585D0u);
    ctx->pc = 0x2CB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB620u, 0x1585C8u, 0x1585D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1585D0u;
label_1585d0:
    // 0x1585d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1585d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1585d4: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x1585d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1585d8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1585d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1585dc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1585dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1585e0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1585E0u;
    {
        const bool branch_taken_0x1585e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1585E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585E0u;
        // 0x1585e4: 0x263100b8  addiu       $s1, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585e0) {
            ctx->pc = 0x158590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158590;
        }
    }
    ctx->pc = 0x1585E8u;
label_1585e8:
    // 0x1585e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1585e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1585ec: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x1585ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1585f0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1585f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1585f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1585F4u;
    {
        const bool branch_taken_0x1585f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1585F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585F4u;
        // 0x1585f8: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585f4) {
            ctx->pc = 0x158640u;
            goto label_158640;
        }
    }
    ctx->pc = 0x1585FCu;
    // 0x1585fc: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x1585fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x158600: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x158600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x158604: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x158604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x158608: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x158608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15860c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158610: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x158610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158614: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x158614u;
    {
        const bool branch_taken_0x158614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158614) {
            ctx->pc = 0x158688u;
            goto label_158688;
        }
    }
    ctx->pc = 0x15861Cu;
    // 0x15861c: 0x90430640  lbu         $v1, 0x640($v0)
    ctx->pc = 0x15861cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1600)));
    // 0x158620: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x158620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158624: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x158624u;
    {
        const bool branch_taken_0x158624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x158628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158624u;
        // 0x158628: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158624) {
            ctx->pc = 0x158688u;
            goto label_158688;
        }
    }
    ctx->pc = 0x15862Cu;
    // 0x15862c: 0xc0b324c  jal         func_2CC930
    ctx->pc = 0x15862Cu;
    SET_GPR_U32(ctx, 31, 0x158634u);
    ctx->pc = 0x2CC930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC930u, 0x15862Cu, 0x158634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158634u;
label_158634:
    // 0x158634: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x158634u;
    {
        const bool branch_taken_0x158634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158634) {
            ctx->pc = 0x158688u;
            goto label_158688;
        }
    }
    ctx->pc = 0x15863Cu;
    // 0x15863c: 0x0  nop
    ctx->pc = 0x15863cu;
    // NOP
label_158640:
    // 0x158640: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x158640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x158644: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x158644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x158648: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x158648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x15864c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x15864cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x158650: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x158650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158658: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x158658u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15865c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x15865Cu;
    {
        const bool branch_taken_0x15865c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15865c) {
            ctx->pc = 0x158688u;
            goto label_158688;
        }
    }
    ctx->pc = 0x158664u;
    // 0x158664: 0x92230640  lbu         $v1, 0x640($s1)
    ctx->pc = 0x158664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x158668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15866c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15866Cu;
    {
        const bool branch_taken_0x15866c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x158670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15866Cu;
        // 0x158670: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15866c) {
            ctx->pc = 0x158688u;
            goto label_158688;
        }
    }
    ctx->pc = 0x158674u;
    // 0x158674: 0xc0b324c  jal         func_2CC930
    ctx->pc = 0x158674u;
    SET_GPR_U32(ctx, 31, 0x15867Cu);
    ctx->pc = 0x2CC930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC930u, 0x158674u, 0x15867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15867Cu;
label_15867c:
    // 0x15867c: 0x26240530  addiu       $a0, $s1, 0x530
    ctx->pc = 0x15867cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1328));
    // 0x158680: 0xc0b2bb4  jal         func_2CAED0
    ctx->pc = 0x158680u;
    SET_GPR_U32(ctx, 31, 0x158688u);
    ctx->pc = 0x158684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158680u;
    // 0x158684: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAED0u, 0x158680u, 0x158688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158688u;
label_158688:
    // 0x158688: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x158688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x15868c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x15868cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x158690: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x158690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x158694: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x158694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158698: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15869c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15869cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1586a0: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x1586a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1586a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1586A4u;
    {
        const bool branch_taken_0x1586a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1586a4) {
            ctx->pc = 0x1586B8u;
            goto label_1586b8;
        }
    }
    ctx->pc = 0x1586ACu;
    // 0x1586ac: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1586acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1586b0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1586b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1586b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1586b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1586b8:
    // 0x1586b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1586B8u;
    {
        const bool branch_taken_0x1586b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1586b8) {
            ctx->pc = 0x1586C8u;
            goto label_1586c8;
        }
    }
    ctx->pc = 0x1586C0u;
    // 0x1586c0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1586c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1586c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1586c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1586c8:
    // 0x1586c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1586C8u;
    {
        const bool branch_taken_0x1586c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1586c8) {
            ctx->pc = 0x1586F0u;
            goto label_1586f0;
        }
    }
    ctx->pc = 0x1586D0u;
    // 0x1586d0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1586d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1586d4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1586d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1586d8: 0x906508e8  lbu         $a1, 0x8E8($v1)
    ctx->pc = 0x1586d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2280)));
    // 0x1586dc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x1586dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x1586e0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1586e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1586e4: 0xc05e9cc  jal         func_17A730
    ctx->pc = 0x1586E4u;
    SET_GPR_U32(ctx, 31, 0x1586ECu);
    ctx->pc = 0x1586E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1586E4u;
    // 0x1586e8: 0x24460330  addiu       $a2, $v0, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A730u, 0x1586E4u, 0x1586ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1586ECu;
label_1586ec:
    // 0x1586ec: 0x0  nop
    ctx->pc = 0x1586ecu;
    // NOP
label_1586f0:
    // 0x1586f0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x1586f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x1586f4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x1586f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x1586f8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x1586f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x1586fc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1586fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x158700: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x158700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158708: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x158708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15870c: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x15870cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x158710: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158710u;
    {
        const bool branch_taken_0x158710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158710) {
            ctx->pc = 0x158724u;
            goto label_158724;
        }
    }
    ctx->pc = 0x158718u;
    // 0x158718: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x158718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15871c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x15871cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x158720: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x158720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_158724:
    // 0x158724: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158724u;
    {
        const bool branch_taken_0x158724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158724) {
            ctx->pc = 0x158734u;
            goto label_158734;
        }
    }
    ctx->pc = 0x15872Cu;
    // 0x15872c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x15872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x158730: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x158730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_158734:
    // 0x158734: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x158734u;
    {
        const bool branch_taken_0x158734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158734) {
            ctx->pc = 0x158758u;
            goto label_158758;
        }
    }
    ctx->pc = 0x15873Cu;
    // 0x15873c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x15873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x158740: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x158740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x158744: 0x906508e8  lbu         $a1, 0x8E8($v1)
    ctx->pc = 0x158744u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2280)));
    // 0x158748: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x158748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x15874c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x15874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x158750: 0xc05e9cc  jal         func_17A730
    ctx->pc = 0x158750u;
    SET_GPR_U32(ctx, 31, 0x158758u);
    ctx->pc = 0x158754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158750u;
    // 0x158754: 0x24460330  addiu       $a2, $v0, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A730u, 0x158750u, 0x158758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158758u;
label_158758:
    // 0x158758: 0xc0561e0  jal         func_158780
    ctx->pc = 0x158758u;
    SET_GPR_U32(ctx, 31, 0x158760u);
    ctx->pc = 0x15875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158758u;
    // 0x15875c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158780u, 0x158758u, 0x158760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158760u;
label_158760:
    // 0x158760: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x158760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158764: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x158764u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158768: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x158768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15876c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15876cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158778: 0x3e00008  jr          $ra
    ctx->pc = 0x158778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158778u;
        // 0x15877c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158780u;
}
