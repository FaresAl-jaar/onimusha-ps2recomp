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

// Function: sub_00346B20
// Address: 0x346b20 - 0x346cd0
void sub_00346B20_0x346b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346B20_0x346b20");
#endif

    switch (ctx->pc) {
        case 0x346b20u: goto label_346b20;
        case 0x346b24u: goto label_346b24;
        case 0x346b28u: goto label_346b28;
        case 0x346b2cu: goto label_346b2c;
        case 0x346b30u: goto label_346b30;
        case 0x346b34u: goto label_346b34;
        case 0x346b38u: goto label_346b38;
        case 0x346b3cu: goto label_346b3c;
        case 0x346b40u: goto label_346b40;
        case 0x346b44u: goto label_346b44;
        case 0x346b48u: goto label_346b48;
        case 0x346b4cu: goto label_346b4c;
        case 0x346b50u: goto label_346b50;
        case 0x346b54u: goto label_346b54;
        case 0x346b58u: goto label_346b58;
        case 0x346b5cu: goto label_346b5c;
        case 0x346b60u: goto label_346b60;
        case 0x346b64u: goto label_346b64;
        case 0x346b68u: goto label_346b68;
        case 0x346b6cu: goto label_346b6c;
        case 0x346b70u: goto label_346b70;
        case 0x346b74u: goto label_346b74;
        case 0x346b78u: goto label_346b78;
        case 0x346b7cu: goto label_346b7c;
        case 0x346b80u: goto label_346b80;
        case 0x346b84u: goto label_346b84;
        case 0x346b88u: goto label_346b88;
        case 0x346b8cu: goto label_346b8c;
        case 0x346b90u: goto label_346b90;
        case 0x346b94u: goto label_346b94;
        case 0x346b98u: goto label_346b98;
        case 0x346b9cu: goto label_346b9c;
        case 0x346ba0u: goto label_346ba0;
        case 0x346ba4u: goto label_346ba4;
        case 0x346ba8u: goto label_346ba8;
        case 0x346bacu: goto label_346bac;
        case 0x346bb0u: goto label_346bb0;
        case 0x346bb4u: goto label_346bb4;
        case 0x346bb8u: goto label_346bb8;
        case 0x346bbcu: goto label_346bbc;
        case 0x346bc0u: goto label_346bc0;
        case 0x346bc4u: goto label_346bc4;
        case 0x346bc8u: goto label_346bc8;
        case 0x346bccu: goto label_346bcc;
        case 0x346bd0u: goto label_346bd0;
        case 0x346bd4u: goto label_346bd4;
        case 0x346bd8u: goto label_346bd8;
        case 0x346bdcu: goto label_346bdc;
        case 0x346be0u: goto label_346be0;
        case 0x346be4u: goto label_346be4;
        case 0x346be8u: goto label_346be8;
        case 0x346becu: goto label_346bec;
        case 0x346bf0u: goto label_346bf0;
        case 0x346bf4u: goto label_346bf4;
        case 0x346bf8u: goto label_346bf8;
        case 0x346bfcu: goto label_346bfc;
        case 0x346c00u: goto label_346c00;
        case 0x346c04u: goto label_346c04;
        case 0x346c08u: goto label_346c08;
        case 0x346c0cu: goto label_346c0c;
        case 0x346c10u: goto label_346c10;
        case 0x346c14u: goto label_346c14;
        case 0x346c18u: goto label_346c18;
        case 0x346c1cu: goto label_346c1c;
        case 0x346c20u: goto label_346c20;
        case 0x346c24u: goto label_346c24;
        case 0x346c28u: goto label_346c28;
        case 0x346c2cu: goto label_346c2c;
        case 0x346c30u: goto label_346c30;
        case 0x346c34u: goto label_346c34;
        case 0x346c38u: goto label_346c38;
        case 0x346c3cu: goto label_346c3c;
        case 0x346c40u: goto label_346c40;
        case 0x346c44u: goto label_346c44;
        case 0x346c48u: goto label_346c48;
        case 0x346c4cu: goto label_346c4c;
        case 0x346c50u: goto label_346c50;
        case 0x346c54u: goto label_346c54;
        case 0x346c58u: goto label_346c58;
        case 0x346c5cu: goto label_346c5c;
        case 0x346c60u: goto label_346c60;
        case 0x346c64u: goto label_346c64;
        case 0x346c68u: goto label_346c68;
        case 0x346c6cu: goto label_346c6c;
        case 0x346c70u: goto label_346c70;
        case 0x346c74u: goto label_346c74;
        case 0x346c78u: goto label_346c78;
        case 0x346c7cu: goto label_346c7c;
        case 0x346c80u: goto label_346c80;
        case 0x346c84u: goto label_346c84;
        case 0x346c88u: goto label_346c88;
        case 0x346c8cu: goto label_346c8c;
        case 0x346c90u: goto label_346c90;
        case 0x346c94u: goto label_346c94;
        case 0x346c98u: goto label_346c98;
        case 0x346c9cu: goto label_346c9c;
        case 0x346ca0u: goto label_346ca0;
        case 0x346ca4u: goto label_346ca4;
        case 0x346ca8u: goto label_346ca8;
        case 0x346cacu: goto label_346cac;
        case 0x346cb0u: goto label_346cb0;
        case 0x346cb4u: goto label_346cb4;
        case 0x346cb8u: goto label_346cb8;
        case 0x346cbcu: goto label_346cbc;
        case 0x346cc0u: goto label_346cc0;
        case 0x346cc4u: goto label_346cc4;
        case 0x346cc8u: goto label_346cc8;
        case 0x346cccu: goto label_346ccc;
        default: break;
    }

    ctx->pc = 0x346b20u;

label_346b20:
    // 0x346b20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x346b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_346b24:
    // 0x346b24: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x346b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_346b28:
    // 0x346b28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x346b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_346b2c:
    // 0x346b2c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x346b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_346b30:
    // 0x346b30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x346b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_346b34:
    // 0x346b34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x346b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_346b38:
    // 0x346b38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x346b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_346b3c:
    // 0x346b3c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x346b3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_346b40:
    // 0x346b40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x346b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_346b44:
    // 0x346b44: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x346b44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_346b48:
    // 0x346b48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x346b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_346b4c:
    // 0x346b4c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x346b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_346b50:
    // 0x346b50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x346b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_346b54:
    // 0x346b54: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x346b54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_346b58:
    // 0x346b58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x346b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_346b5c:
    // 0x346b5c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x346b5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_346b60:
    // 0x346b60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_346b64:
    // 0x346b64: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x346b64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_346b68:
    // 0x346b68: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x346b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_346b6c:
    // 0x346b6c: 0xc5620004  lwc1        $f2, 0x4($t3)
    ctx->pc = 0x346b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_346b70:
    // 0x346b70: 0xc5610008  lwc1        $f1, 0x8($t3)
    ctx->pc = 0x346b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_346b74:
    // 0x346b74: 0xc560000c  lwc1        $f0, 0xC($t3)
    ctx->pc = 0x346b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_346b78:
    // 0x346b78: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x346b78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_346b7c:
    // 0x346b7c: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x346b7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_346b80:
    // 0x346b80: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x346b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_346b84:
    // 0x346b84: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x346b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_346b88:
    // 0x346b88: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x346b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_346b8c:
    // 0x346b8c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x346b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_346b90:
    // 0x346b90: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x346b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_346b94:
    // 0x346b94: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x346b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_346b98:
    // 0x346b98: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x346b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_346b9c:
    // 0x346b9c: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x346b9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_346ba0:
    // 0x346ba0: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x346ba0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_346ba4:
    // 0x346ba4: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x346ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_346ba8:
    // 0x346ba8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x346ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_346bac:
    // 0x346bac: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x346bacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966412)));
label_346bb0:
    // 0x346bb0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_346bb4:
    if (ctx->pc == 0x346BB4u) {
        ctx->pc = 0x346BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346BB0u;
        // 0x346bb4: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346BB8u;
        goto label_346bb8;
    }
    ctx->pc = 0x346BB0u;
    {
        const bool branch_taken_0x346bb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x346BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346BB0u;
        // 0x346bb4: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346bb0) {
            ctx->pc = 0x346BC8u;
            goto label_346bc8;
        }
    }
    ctx->pc = 0x346BB8u;
label_346bb8:
    // 0x346bb8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x346bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_346bbc:
    // 0x346bbc: 0x12a3003a  beq         $s5, $v1, . + 4 + (0x3A << 2)
label_346bc0:
    if (ctx->pc == 0x346BC0u) {
        ctx->pc = 0x346BC4u;
        goto label_346bc4;
    }
    ctx->pc = 0x346BBCu;
    {
        const bool branch_taken_0x346bbc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x346bbc) {
            ctx->pc = 0x346CA8u;
            goto label_346ca8;
        }
    }
    ctx->pc = 0x346BC4u;
label_346bc4:
    // 0x346bc4: 0x0  nop
    ctx->pc = 0x346bc4u;
    // NOP
label_346bc8:
    // 0x346bc8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x346bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
label_346bcc:
    // 0x346bcc: 0x3285ffff  andi        $a1, $s4, 0xFFFF
    ctx->pc = 0x346bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_346bd0:
    // 0x346bd0: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x346bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
label_346bd4:
    // 0x346bd4: 0xc0bcbdc  jal         func_2F2F70
label_346bd8:
    if (ctx->pc == 0x346BD8u) {
        ctx->pc = 0x346BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346BD4u;
        // 0x346bd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346BDCu;
        goto label_346bdc;
    }
    ctx->pc = 0x346BD4u;
    SET_GPR_U32(ctx, 31, 0x346BDCu);
    ctx->pc = 0x346BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346BD4u;
    // 0x346bd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2F70u, 0x346BD4u, 0x346BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346BDCu;
label_346bdc:
    // 0x346bdc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_346be0:
    if (ctx->pc == 0x346BE0u) {
        ctx->pc = 0x346BE4u;
        goto label_346be4;
    }
    ctx->pc = 0x346BDCu;
    {
        const bool branch_taken_0x346bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346bdc) {
            ctx->pc = 0x346BE8u;
            goto label_346be8;
        }
    }
    ctx->pc = 0x346BE4u;
label_346be4:
    // 0x346be4: 0x24140900  addiu       $s4, $zero, 0x900
    ctx->pc = 0x346be4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
label_346be8:
    // 0x346be8: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_346bec:
    if (ctx->pc == 0x346BECu) {
        ctx->pc = 0x346BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346BE8u;
        // 0x346bec: 0x26630100  addiu       $v1, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346BF0u;
        goto label_346bf0;
    }
    ctx->pc = 0x346BE8u;
    {
        const bool branch_taken_0x346be8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x346BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346BE8u;
        // 0x346bec: 0x26630100  addiu       $v1, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346be8) {
            ctx->pc = 0x346C28u;
            goto label_346c28;
        }
    }
    ctx->pc = 0x346BF0u;
label_346bf0:
    // 0x346bf0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x346bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_346bf4:
    // 0x346bf4: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x346bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_346bf8:
    // 0x346bf8: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x346bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_346bfc:
    // 0x346bfc: 0xa42806  srlv        $a1, $a0, $a1
    ctx->pc = 0x346bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_346c00:
    // 0x346c00: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x346c00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_346c04:
    // 0x346c04: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x346c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
label_346c08:
    // 0x346c08: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x346c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
label_346c0c:
    // 0x346c0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x346c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_346c10:
    // 0x346c10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x346c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_346c14:
    // 0x346c14: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x346c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_346c18:
    // 0x346c18: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x346c18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_346c1c:
    // 0x346c1c: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_346c20:
    if (ctx->pc == 0x346C20u) {
        ctx->pc = 0x346C24u;
        goto label_346c24;
    }
    ctx->pc = 0x346C1Cu;
    {
        const bool branch_taken_0x346c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x346c1c) {
            ctx->pc = 0x346CA8u;
            goto label_346ca8;
        }
    }
    ctx->pc = 0x346C24u;
label_346c24:
    // 0x346c24: 0x0  nop
    ctx->pc = 0x346c24u;
    // NOP
label_346c28:
    // 0x346c28: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x346c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_346c2c:
    // 0x346c2c: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x346c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_346c30:
    // 0x346c30: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x346c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_346c34:
    // 0x346c34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x346c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346c38:
    // 0x346c38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x346c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346c3c:
    // 0x346c3c: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x346c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_346c40:
    // 0x346c40: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x346c40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_346c44:
    // 0x346c44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x346c44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346c48:
    // 0x346c48: 0xc0510e0  jal         func_144380
label_346c4c:
    if (ctx->pc == 0x346C4Cu) {
        ctx->pc = 0x346C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C48u;
        // 0x346c4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C50u;
        goto label_346c50;
    }
    ctx->pc = 0x346C48u;
    SET_GPR_U32(ctx, 31, 0x346C50u);
    ctx->pc = 0x346C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C48u;
    // 0x346c4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x346C48u, 0x346C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C50u;
label_346c50:
    // 0x346c50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x346c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_346c54:
    // 0x346c54: 0x2405021c  addiu       $a1, $zero, 0x21C
    ctx->pc = 0x346c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
label_346c58:
    // 0x346c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346c5c:
    // 0x346c5c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x346c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_346c60:
    // 0x346c60: 0xc0d0484  jal         func_341210
label_346c64:
    if (ctx->pc == 0x346C64u) {
        ctx->pc = 0x346C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C60u;
        // 0x346c64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C68u;
        goto label_346c68;
    }
    ctx->pc = 0x346C60u;
    SET_GPR_U32(ctx, 31, 0x346C68u);
    ctx->pc = 0x346C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C60u;
    // 0x346c64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x346C60u, 0x346C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C68u;
label_346c68:
    // 0x346c68: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x346c68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_346c6c:
    // 0x346c6c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x346c6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_346c70:
    // 0x346c70: 0x320f809  jalr        $t9
label_346c74:
    if (ctx->pc == 0x346C74u) {
        ctx->pc = 0x346C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C70u;
        // 0x346c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C78u;
        goto label_346c78;
    }
    ctx->pc = 0x346C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x346C78u);
        ctx->pc = 0x346C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C70u;
        // 0x346c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346C70u, 0x346C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x346C78u;
label_346c78:
    // 0x346c78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x346c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_346c7c:
    // 0x346c7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x346c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_346c80:
    // 0x346c80: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x346c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_346c84:
    // 0x346c84: 0xc0d0ae0  jal         func_342B80
label_346c88:
    if (ctx->pc == 0x346C88u) {
        ctx->pc = 0x346C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C84u;
        // 0x346c88: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C8Cu;
        goto label_346c8c;
    }
    ctx->pc = 0x346C84u;
    SET_GPR_U32(ctx, 31, 0x346C8Cu);
    ctx->pc = 0x346C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C84u;
    // 0x346c88: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B80u, 0x346C84u, 0x346C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C8Cu;
label_346c8c:
    // 0x346c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346c90:
    // 0x346c90: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x346c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_346c94:
    // 0x346c94: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x346c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_346c98:
    // 0x346c98: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x346c98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_346c9c:
    // 0x346c9c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x346c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_346ca0:
    // 0x346ca0: 0xc0e280c  jal         func_38A030
label_346ca4:
    if (ctx->pc == 0x346CA4u) {
        ctx->pc = 0x346CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CA0u;
        // 0x346ca4: 0x27a90080  addiu       $t1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346CA8u;
        goto label_346ca8;
    }
    ctx->pc = 0x346CA0u;
    SET_GPR_U32(ctx, 31, 0x346CA8u);
    ctx->pc = 0x346CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346CA0u;
    // 0x346ca4: 0x27a90080  addiu       $t1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A030u, 0x346CA0u, 0x346CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CA8u;
label_346ca8:
    // 0x346ca8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x346ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_346cac:
    // 0x346cac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x346cacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_346cb0:
    // 0x346cb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x346cb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_346cb4:
    // 0x346cb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x346cb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_346cb8:
    // 0x346cb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x346cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_346cbc:
    // 0x346cbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x346cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_346cc0:
    // 0x346cc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x346cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_346cc4:
    // 0x346cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_346cc8:
    // 0x346cc8: 0x3e00008  jr          $ra
label_346ccc:
    if (ctx->pc == 0x346CCCu) {
        ctx->pc = 0x346CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CC8u;
        // 0x346ccc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346CD0u;
        goto label_fallthrough_0x346cc8;
    }
    ctx->pc = 0x346CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CC8u;
        // 0x346ccc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x346cc8:
    ctx->pc = 0x346CD0u;
}
