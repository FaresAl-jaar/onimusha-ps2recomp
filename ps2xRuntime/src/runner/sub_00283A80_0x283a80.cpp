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

// Function: sub_00283A80
// Address: 0x283a80 - 0x283c40
void sub_00283A80_0x283a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283A80_0x283a80");
#endif

    switch (ctx->pc) {
        case 0x283a80u: goto label_283a80;
        case 0x283a84u: goto label_283a84;
        case 0x283a88u: goto label_283a88;
        case 0x283a8cu: goto label_283a8c;
        case 0x283a90u: goto label_283a90;
        case 0x283a94u: goto label_283a94;
        case 0x283a98u: goto label_283a98;
        case 0x283a9cu: goto label_283a9c;
        case 0x283aa0u: goto label_283aa0;
        case 0x283aa4u: goto label_283aa4;
        case 0x283aa8u: goto label_283aa8;
        case 0x283aacu: goto label_283aac;
        case 0x283ab0u: goto label_283ab0;
        case 0x283ab4u: goto label_283ab4;
        case 0x283ab8u: goto label_283ab8;
        case 0x283abcu: goto label_283abc;
        case 0x283ac0u: goto label_283ac0;
        case 0x283ac4u: goto label_283ac4;
        case 0x283ac8u: goto label_283ac8;
        case 0x283accu: goto label_283acc;
        case 0x283ad0u: goto label_283ad0;
        case 0x283ad4u: goto label_283ad4;
        case 0x283ad8u: goto label_283ad8;
        case 0x283adcu: goto label_283adc;
        case 0x283ae0u: goto label_283ae0;
        case 0x283ae4u: goto label_283ae4;
        case 0x283ae8u: goto label_283ae8;
        case 0x283aecu: goto label_283aec;
        case 0x283af0u: goto label_283af0;
        case 0x283af4u: goto label_283af4;
        case 0x283af8u: goto label_283af8;
        case 0x283afcu: goto label_283afc;
        case 0x283b00u: goto label_283b00;
        case 0x283b04u: goto label_283b04;
        case 0x283b08u: goto label_283b08;
        case 0x283b0cu: goto label_283b0c;
        case 0x283b10u: goto label_283b10;
        case 0x283b14u: goto label_283b14;
        case 0x283b18u: goto label_283b18;
        case 0x283b1cu: goto label_283b1c;
        case 0x283b20u: goto label_283b20;
        case 0x283b24u: goto label_283b24;
        case 0x283b28u: goto label_283b28;
        case 0x283b2cu: goto label_283b2c;
        case 0x283b30u: goto label_283b30;
        case 0x283b34u: goto label_283b34;
        case 0x283b38u: goto label_283b38;
        case 0x283b3cu: goto label_283b3c;
        case 0x283b40u: goto label_283b40;
        case 0x283b44u: goto label_283b44;
        case 0x283b48u: goto label_283b48;
        case 0x283b4cu: goto label_283b4c;
        case 0x283b50u: goto label_283b50;
        case 0x283b54u: goto label_283b54;
        case 0x283b58u: goto label_283b58;
        case 0x283b5cu: goto label_283b5c;
        case 0x283b60u: goto label_283b60;
        case 0x283b64u: goto label_283b64;
        case 0x283b68u: goto label_283b68;
        case 0x283b6cu: goto label_283b6c;
        case 0x283b70u: goto label_283b70;
        case 0x283b74u: goto label_283b74;
        case 0x283b78u: goto label_283b78;
        case 0x283b7cu: goto label_283b7c;
        case 0x283b80u: goto label_283b80;
        case 0x283b84u: goto label_283b84;
        case 0x283b88u: goto label_283b88;
        case 0x283b8cu: goto label_283b8c;
        case 0x283b90u: goto label_283b90;
        case 0x283b94u: goto label_283b94;
        case 0x283b98u: goto label_283b98;
        case 0x283b9cu: goto label_283b9c;
        case 0x283ba0u: goto label_283ba0;
        case 0x283ba4u: goto label_283ba4;
        case 0x283ba8u: goto label_283ba8;
        case 0x283bacu: goto label_283bac;
        case 0x283bb0u: goto label_283bb0;
        case 0x283bb4u: goto label_283bb4;
        case 0x283bb8u: goto label_283bb8;
        case 0x283bbcu: goto label_283bbc;
        case 0x283bc0u: goto label_283bc0;
        case 0x283bc4u: goto label_283bc4;
        case 0x283bc8u: goto label_283bc8;
        case 0x283bccu: goto label_283bcc;
        case 0x283bd0u: goto label_283bd0;
        case 0x283bd4u: goto label_283bd4;
        case 0x283bd8u: goto label_283bd8;
        case 0x283bdcu: goto label_283bdc;
        case 0x283be0u: goto label_283be0;
        case 0x283be4u: goto label_283be4;
        case 0x283be8u: goto label_283be8;
        case 0x283becu: goto label_283bec;
        case 0x283bf0u: goto label_283bf0;
        case 0x283bf4u: goto label_283bf4;
        case 0x283bf8u: goto label_283bf8;
        case 0x283bfcu: goto label_283bfc;
        case 0x283c00u: goto label_283c00;
        case 0x283c04u: goto label_283c04;
        case 0x283c08u: goto label_283c08;
        case 0x283c0cu: goto label_283c0c;
        case 0x283c10u: goto label_283c10;
        case 0x283c14u: goto label_283c14;
        case 0x283c18u: goto label_283c18;
        case 0x283c1cu: goto label_283c1c;
        case 0x283c20u: goto label_283c20;
        case 0x283c24u: goto label_283c24;
        case 0x283c28u: goto label_283c28;
        case 0x283c2cu: goto label_283c2c;
        case 0x283c30u: goto label_283c30;
        case 0x283c34u: goto label_283c34;
        case 0x283c38u: goto label_283c38;
        case 0x283c3cu: goto label_283c3c;
        default: break;
    }

    ctx->pc = 0x283a80u;

label_283a80:
    // 0x283a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_283a84:
    // 0x283a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_283a88:
    // 0x283a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_283a8c:
    // 0x283a8c: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x283a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_283a90:
    // 0x283a90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x283a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_283a94:
    // 0x283a94: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x283a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_283a98:
    // 0x283a98: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x283a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
label_283a9c:
    // 0x283a9c: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x283a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_283aa0:
    // 0x283aa0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x283aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_283aa4:
    // 0x283aa4: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x283aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
label_283aa8:
    // 0x283aa8: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x283aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_283aac:
    // 0x283aac: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x283aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_283ab0:
    // 0x283ab0: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x283ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
label_283ab4:
    // 0x283ab4: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x283ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_283ab8:
    // 0x283ab8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x283ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_283abc:
    // 0x283abc: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x283abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
label_283ac0:
    // 0x283ac0: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x283ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_283ac4:
    // 0x283ac4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x283ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_283ac8:
    // 0x283ac8: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x283ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
label_283acc:
    // 0x283acc: 0x8c8206cc  lw          $v0, 0x6CC($a0)
    ctx->pc = 0x283accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
label_283ad0:
    // 0x283ad0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x283ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_283ad4:
    // 0x283ad4: 0xac8206cc  sw          $v0, 0x6CC($a0)
    ctx->pc = 0x283ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 2));
label_283ad8:
    // 0x283ad8: 0x8e0507c8  lw          $a1, 0x7C8($s0)
    ctx->pc = 0x283ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
label_283adc:
    // 0x283adc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x283adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_283ae0:
    // 0x283ae0: 0xc07cce0  jal         func_1F3380
label_283ae4:
    if (ctx->pc == 0x283AE4u) {
        ctx->pc = 0x283AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AE0u;
        // 0x283ae4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283AE8u;
        goto label_283ae8;
    }
    ctx->pc = 0x283AE0u;
    SET_GPR_U32(ctx, 31, 0x283AE8u);
    ctx->pc = 0x283AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283AE0u;
    // 0x283ae4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x283AE0u, 0x283AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283AE8u;
label_283ae8:
    // 0x283ae8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_283aec:
    if (ctx->pc == 0x283AECu) {
        ctx->pc = 0x283AF0u;
        goto label_283af0;
    }
    ctx->pc = 0x283AE8u;
    {
        const bool branch_taken_0x283ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283ae8) {
            ctx->pc = 0x283B40u;
            goto label_283b40;
        }
    }
    ctx->pc = 0x283AF0u;
label_283af0:
    // 0x283af0: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x283af0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_283af4:
    // 0x283af4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x283af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_283af8:
    // 0x283af8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_283afc:
    if (ctx->pc == 0x283AFCu) {
        ctx->pc = 0x283AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AF8u;
        // 0x283afc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B00u;
        goto label_283b00;
    }
    ctx->pc = 0x283AF8u;
    {
        const bool branch_taken_0x283af8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x283AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AF8u;
        // 0x283afc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283af8) {
            ctx->pc = 0x283B08u;
            goto label_283b08;
        }
    }
    ctx->pc = 0x283B00u;
label_283b00:
    // 0x283b00: 0x1000004b  b           . + 4 + (0x4B << 2)
label_283b04:
    if (ctx->pc == 0x283B04u) {
        ctx->pc = 0x283B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B00u;
        // 0x283b04: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B08u;
        goto label_283b08;
    }
    ctx->pc = 0x283B00u;
    {
        const bool branch_taken_0x283b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B00u;
        // 0x283b04: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b00) {
            ctx->pc = 0x283C30u;
            goto label_283c30;
        }
    }
    ctx->pc = 0x283B08u;
label_283b08:
    // 0x283b08: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x283b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_283b0c:
    // 0x283b0c: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x283b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
label_283b10:
    // 0x283b10: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x283b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_283b14:
    // 0x283b14: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x283b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_283b18:
    // 0x283b18: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x283b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_283b1c:
    // 0x283b1c: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x283b1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
label_283b20:
    // 0x283b20: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x283b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
label_283b24:
    // 0x283b24: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x283b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
label_283b28:
    // 0x283b28: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x283b28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_283b2c:
    // 0x283b2c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x283b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_283b30:
    // 0x283b30: 0x320f809  jalr        $t9
label_283b34:
    if (ctx->pc == 0x283B34u) {
        ctx->pc = 0x283B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B30u;
        // 0x283b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B38u;
        goto label_283b38;
    }
    ctx->pc = 0x283B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x283B38u);
        ctx->pc = 0x283B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B30u;
        // 0x283b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283B30u, 0x283B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283B38u;
label_283b38:
    // 0x283b38: 0x1000003d  b           . + 4 + (0x3D << 2)
label_283b3c:
    if (ctx->pc == 0x283B3Cu) {
        ctx->pc = 0x283B40u;
        goto label_283b40;
    }
    ctx->pc = 0x283B38u;
    {
        const bool branch_taken_0x283b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283b38) {
            ctx->pc = 0x283C30u;
            goto label_283c30;
        }
    }
    ctx->pc = 0x283B40u;
label_283b40:
    // 0x283b40: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_283b44:
    if (ctx->pc == 0x283B44u) {
        ctx->pc = 0x283B48u;
        goto label_283b48;
    }
    ctx->pc = 0x283B40u;
    {
        const bool branch_taken_0x283b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283b40) {
            ctx->pc = 0x283B80u;
            goto label_283b80;
        }
    }
    ctx->pc = 0x283B48u;
label_283b48:
    // 0x283b48: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_283b4c:
    if (ctx->pc == 0x283B4Cu) {
        ctx->pc = 0x283B50u;
        goto label_283b50;
    }
    ctx->pc = 0x283B48u;
    {
        const bool branch_taken_0x283b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283b48) {
            ctx->pc = 0x283BD0u;
            goto label_283bd0;
        }
    }
    ctx->pc = 0x283B50u;
label_283b50:
    // 0x283b50: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x283b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_283b54:
    // 0x283b54: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x283b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_283b58:
    // 0x283b58: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x283b58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_283b5c:
    // 0x283b5c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_283b60:
    if (ctx->pc == 0x283B60u) {
        ctx->pc = 0x283B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B5Cu;
        // 0x283b60: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B64u;
        goto label_283b64;
    }
    ctx->pc = 0x283B5Cu;
    {
        const bool branch_taken_0x283b5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x283B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B5Cu;
        // 0x283b60: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b5c) {
            ctx->pc = 0x283B68u;
            goto label_283b68;
        }
    }
    ctx->pc = 0x283B64u;
label_283b64:
    // 0x283b64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x283b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283b68:
    // 0x283b68: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_283b6c:
    if (ctx->pc == 0x283B6Cu) {
        ctx->pc = 0x283B70u;
        goto label_283b70;
    }
    ctx->pc = 0x283B68u;
    {
        const bool branch_taken_0x283b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x283b68) {
            ctx->pc = 0x283BD0u;
            goto label_283bd0;
        }
    }
    ctx->pc = 0x283B70u;
label_283b70:
    // 0x283b70: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x283b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
label_283b74:
    // 0x283b74: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x283b74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_283b78:
    // 0x283b78: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_283b7c:
    if (ctx->pc == 0x283B7Cu) {
        ctx->pc = 0x283B80u;
        goto label_283b80;
    }
    ctx->pc = 0x283B78u;
    {
        const bool branch_taken_0x283b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x283b78) {
            ctx->pc = 0x283BD0u;
            goto label_283bd0;
        }
    }
    ctx->pc = 0x283B80u;
label_283b80:
    // 0x283b80: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x283b80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_283b84:
    // 0x283b84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x283b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_283b88:
    // 0x283b88: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_283b8c:
    if (ctx->pc == 0x283B8Cu) {
        ctx->pc = 0x283B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B88u;
        // 0x283b8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B90u;
        goto label_283b90;
    }
    ctx->pc = 0x283B88u;
    {
        const bool branch_taken_0x283b88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x283B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B88u;
        // 0x283b8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b88) {
            ctx->pc = 0x283B98u;
            goto label_283b98;
        }
    }
    ctx->pc = 0x283B90u;
label_283b90:
    // 0x283b90: 0x10000027  b           . + 4 + (0x27 << 2)
label_283b94:
    if (ctx->pc == 0x283B94u) {
        ctx->pc = 0x283B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B90u;
        // 0x283b94: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B98u;
        goto label_283b98;
    }
    ctx->pc = 0x283B90u;
    {
        const bool branch_taken_0x283b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B90u;
        // 0x283b94: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b90) {
            ctx->pc = 0x283C30u;
            goto label_283c30;
        }
    }
    ctx->pc = 0x283B98u;
label_283b98:
    // 0x283b98: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x283b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_283b9c:
    // 0x283b9c: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x283b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
label_283ba0:
    // 0x283ba0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x283ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_283ba4:
    // 0x283ba4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x283ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_283ba8:
    // 0x283ba8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x283ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_283bac:
    // 0x283bac: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x283bacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
label_283bb0:
    // 0x283bb0: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x283bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
label_283bb4:
    // 0x283bb4: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x283bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
label_283bb8:
    // 0x283bb8: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x283bb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_283bbc:
    // 0x283bbc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x283bbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_283bc0:
    // 0x283bc0: 0x320f809  jalr        $t9
label_283bc4:
    if (ctx->pc == 0x283BC4u) {
        ctx->pc = 0x283BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BC0u;
        // 0x283bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283BC8u;
        goto label_283bc8;
    }
    ctx->pc = 0x283BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x283BC8u);
        ctx->pc = 0x283BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BC0u;
        // 0x283bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283BC0u, 0x283BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283BC8u;
label_283bc8:
    // 0x283bc8: 0x10000019  b           . + 4 + (0x19 << 2)
label_283bcc:
    if (ctx->pc == 0x283BCCu) {
        ctx->pc = 0x283BD0u;
        goto label_283bd0;
    }
    ctx->pc = 0x283BC8u;
    {
        const bool branch_taken_0x283bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283bc8) {
            ctx->pc = 0x283C30u;
            goto label_283c30;
        }
    }
    ctx->pc = 0x283BD0u;
label_283bd0:
    // 0x283bd0: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x283bd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_283bd4:
    // 0x283bd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x283bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_283bd8:
    // 0x283bd8: 0x10660015  beq         $v1, $a2, . + 4 + (0x15 << 2)
label_283bdc:
    if (ctx->pc == 0x283BDCu) {
        ctx->pc = 0x283BE0u;
        goto label_283be0;
    }
    ctx->pc = 0x283BD8u;
    {
        const bool branch_taken_0x283bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x283bd8) {
            ctx->pc = 0x283C30u;
            goto label_283c30;
        }
    }
    ctx->pc = 0x283BE0u;
label_283be0:
    // 0x283be0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_283be4:
    if (ctx->pc == 0x283BE4u) {
        ctx->pc = 0x283BE8u;
        goto label_283be8;
    }
    ctx->pc = 0x283BE0u;
    {
        const bool branch_taken_0x283be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283be0) {
            ctx->pc = 0x283BF0u;
            goto label_283bf0;
        }
    }
    ctx->pc = 0x283BE8u;
label_283be8:
    // 0x283be8: 0x10000011  b           . + 4 + (0x11 << 2)
label_283bec:
    if (ctx->pc == 0x283BECu) {
        ctx->pc = 0x283BF0u;
        goto label_283bf0;
    }
    ctx->pc = 0x283BE8u;
    {
        const bool branch_taken_0x283be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283be8) {
            ctx->pc = 0x283C30u;
            goto label_283c30;
        }
    }
    ctx->pc = 0x283BF0u;
label_283bf0:
    // 0x283bf0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x283bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_283bf4:
    // 0x283bf4: 0x24a544e0  addiu       $a1, $a1, 0x44E0
    ctx->pc = 0x283bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17632));
label_283bf8:
    // 0x283bf8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x283bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_283bfc:
    // 0x283bfc: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x283bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_283c00:
    // 0x283c00: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x283c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
label_283c04:
    // 0x283c04: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x283c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_283c08:
    // 0x283c08: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x283c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_283c0c:
    // 0x283c0c: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x283c0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
label_283c10:
    // 0x283c10: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x283c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
label_283c14:
    // 0x283c14: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x283c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
label_283c18:
    // 0x283c18: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x283c18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_283c1c:
    // 0x283c1c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x283c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_283c20:
    // 0x283c20: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x283c20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
label_283c24:
    // 0x283c24: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x283c24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
label_283c28:
    // 0x283c28: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x283c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_283c2c:
    // 0x283c2c: 0xa2060821  sb          $a2, 0x821($s0)
    ctx->pc = 0x283c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 6));
label_283c30:
    // 0x283c30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_283c34:
    // 0x283c34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_283c38:
    // 0x283c38: 0x3e00008  jr          $ra
label_283c3c:
    if (ctx->pc == 0x283C3Cu) {
        ctx->pc = 0x283C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C38u;
        // 0x283c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C40u;
        goto label_fallthrough_0x283c38;
    }
    ctx->pc = 0x283C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C38u;
        // 0x283c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x283c38:
    ctx->pc = 0x283C40u;
}
