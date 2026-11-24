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

// Function: sub_001C4A80
// Address: 0x1c4a80 - 0x1c4e40
void sub_001C4A80_0x1c4a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4A80_0x1c4a80");
#endif

    switch (ctx->pc) {
        case 0x1c4af8u: goto label_1c4af8;
        case 0x1c4b0cu: goto label_1c4b0c;
        case 0x1c4b20u: goto label_1c4b20;
        case 0x1c4b2cu: goto label_1c4b2c;
        case 0x1c4b78u: goto label_1c4b78;
        case 0x1c4b84u: goto label_1c4b84;
        case 0x1c4ba8u: goto label_1c4ba8;
        case 0x1c4bbcu: goto label_1c4bbc;
        case 0x1c4bccu: goto label_1c4bcc;
        case 0x1c4bf0u: goto label_1c4bf0;
        case 0x1c4c04u: goto label_1c4c04;
        case 0x1c4c10u: goto label_1c4c10;
        case 0x1c4c20u: goto label_1c4c20;
        case 0x1c4c2cu: goto label_1c4c2c;
        case 0x1c4c98u: goto label_1c4c98;
        case 0x1c4cacu: goto label_1c4cac;
        case 0x1c4cd8u: goto label_1c4cd8;
        case 0x1c4ce4u: goto label_1c4ce4;
        case 0x1c4d08u: goto label_1c4d08;
        case 0x1c4d1cu: goto label_1c4d1c;
        case 0x1c4d2cu: goto label_1c4d2c;
        case 0x1c4d4cu: goto label_1c4d4c;
        case 0x1c4d60u: goto label_1c4d60;
        case 0x1c4d88u: goto label_1c4d88;
        case 0x1c4d94u: goto label_1c4d94;
        case 0x1c4db8u: goto label_1c4db8;
        case 0x1c4dccu: goto label_1c4dcc;
        case 0x1c4ddcu: goto label_1c4ddc;
        case 0x1c4e0cu: goto label_1c4e0c;
        case 0x1c4e20u: goto label_1c4e20;
        default: break;
    }

    ctx->pc = 0x1c4a80u;

    // 0x1c4a80: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1c4a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1c4a84: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c4a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c4a88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c4a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c4a8c: 0x2442f5a0  addiu       $v0, $v0, -0xA60
    ctx->pc = 0x1c4a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964640));
    // 0x1c4a90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c4a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c4a94: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x1c4a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c4a98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c4a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c4a9c: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1c4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c4aa0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c4aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c4aa4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c4aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4aa8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c4aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c4aac: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c4aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ab0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c4ab0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c4ab4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c4ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ab8: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1c4ab8u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x40F5A0u));
    // 0x1c4abc: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1c4abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1c4ac0: 0x24a5f5b0  addiu       $a1, $a1, -0xA50
    ctx->pc = 0x1c4ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964656));
    // 0x1c4ac4: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1c4ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c4ac8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c4ac8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4acc: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x1c4accu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x1c4ad0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c4ad4: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x1c4ad4u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x40F5B0u));
    // 0x1c4ad8: 0x2442f5c0  addiu       $v0, $v0, -0xA40
    ctx->pc = 0x1c4ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964672));
    // 0x1c4adc: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1c4adcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1c4ae0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c4ae0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F5C0u));
    // 0x1c4ae4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1c4ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1c4ae8: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x1c4ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1c4aec: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x1c4aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x1c4af0: 0xc041442  jal         func_105108
    ctx->pc = 0x1C4AF0u;
    SET_GPR_U32(ctx, 31, 0x1C4AF8u);
    ctx->pc = 0x1C4AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4AF0u;
    // 0x1c4af4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C4AF0u, 0x1C4AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AF8u;
label_1c4af8:
    // 0x1c4af8: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x1c4af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x1c4afc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1c4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c4b00: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c4b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b04: 0xc041442  jal         func_105108
    ctx->pc = 0x1C4B04u;
    SET_GPR_U32(ctx, 31, 0x1C4B0Cu);
    ctx->pc = 0x1C4B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B04u;
    // 0x1c4b08: 0x24450300  addiu       $a1, $v0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C4B04u, 0x1C4B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B0Cu;
label_1c4b0c:
    // 0x1c4b0c: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x1c4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x1c4b10: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c4b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c4b14: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c4b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b18: 0xc041442  jal         func_105108
    ctx->pc = 0x1C4B18u;
    SET_GPR_U32(ctx, 31, 0x1C4B20u);
    ctx->pc = 0x1C4B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B18u;
    // 0x1c4b1c: 0x24450300  addiu       $a1, $v0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C4B18u, 0x1C4B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B20u;
label_1c4b20:
    // 0x1c4b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b24: 0xc06736c  jal         func_19CDB0
    ctx->pc = 0x1C4B24u;
    SET_GPR_U32(ctx, 31, 0x1C4B2Cu);
    ctx->pc = 0x1C4B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B24u;
    // 0x1c4b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x1C4B24u, 0x1C4B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B2Cu;
label_1c4b2c:
    // 0x1c4b2c: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x1c4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1c4b30: 0x1043008d  beq         $v0, $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x1C4B30u;
    {
        const bool branch_taken_0x1c4b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C4B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B30u;
        // 0x1c4b34: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b30) {
            ctx->pc = 0x1C4D68u;
            goto label_1c4d68;
        }
    }
    ctx->pc = 0x1C4B38u;
    // 0x1c4b38: 0x1043005f  beq         $v0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x1C4B38u;
    {
        const bool branch_taken_0x1c4b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c4b38) {
            ctx->pc = 0x1C4CB8u;
            goto label_1c4cb8;
        }
    }
    ctx->pc = 0x1C4B40u;
    // 0x1c4b40: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1c4b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1c4b44: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4B44u;
    {
        const bool branch_taken_0x1c4b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c4b44) {
            ctx->pc = 0x1C4B58u;
            goto label_1c4b58;
        }
    }
    ctx->pc = 0x1C4B4Cu;
    // 0x1c4b4c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1C4B4Cu;
    {
        const bool branch_taken_0x1c4b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4b4c) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4B54u;
    // 0x1c4b54: 0x0  nop
    ctx->pc = 0x1c4b54u;
    // NOP
label_1c4b58:
    // 0x1c4b58: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c4b5c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c4b60: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c4b60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c4b64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c4b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c4b68: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c4b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c4b6c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c4b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4b70: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C4B70u;
    SET_GPR_U32(ctx, 31, 0x1C4B78u);
    ctx->pc = 0x1C4B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B70u;
    // 0x1c4b74: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C4B70u, 0x1C4B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B78u;
label_1c4b78:
    // 0x1c4b78: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c4b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c4b7c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C4B7Cu;
    SET_GPR_U32(ctx, 31, 0x1C4B84u);
    ctx->pc = 0x1C4B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B7Cu;
    // 0x1c4b80: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C4B7Cu, 0x1C4B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B84u;
label_1c4b84:
    // 0x1c4b84: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c4b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c4b88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4b8c: 0x0  nop
    ctx->pc = 0x1c4b8cu;
    // NOP
    // 0x1c4b90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4b94: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C4B94u;
    {
        const bool branch_taken_0x1c4b94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B94u;
        // 0x1c4b98: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b94) {
            ctx->pc = 0x1C4BC0u;
            goto label_1c4bc0;
        }
    }
    ctx->pc = 0x1C4B9Cu;
    // 0x1c4b9c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c4b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c4ba0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C4BA0u;
    SET_GPR_U32(ctx, 31, 0x1C4BA8u);
    ctx->pc = 0x1C4BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BA0u;
    // 0x1c4ba4: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C4BA0u, 0x1C4BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BA8u;
label_1c4ba8:
    // 0x1c4ba8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c4bac: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1c4bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c4bb0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c4bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c4bb4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C4BB4u;
    SET_GPR_U32(ctx, 31, 0x1C4BBCu);
    ctx->pc = 0x1C4BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BB4u;
    // 0x1c4bb8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C4BB4u, 0x1C4BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BBCu;
label_1c4bbc:
    // 0x1c4bbc: 0x0  nop
    ctx->pc = 0x1c4bbcu;
    // NOP
label_1c4bc0:
    // 0x1c4bc0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c4bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c4bc4: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C4BC4u;
    SET_GPR_U32(ctx, 31, 0x1C4BCCu);
    ctx->pc = 0x1C4BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BC4u;
    // 0x1c4bc8: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C4BC4u, 0x1C4BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BCCu;
label_1c4bcc:
    // 0x1c4bcc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c4bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c4bd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4bd4: 0x0  nop
    ctx->pc = 0x1c4bd4u;
    // NOP
    // 0x1c4bd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4bdc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C4BDCu;
    {
        const bool branch_taken_0x1c4bdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BDCu;
        // 0x1c4be0: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4bdc) {
            ctx->pc = 0x1C4C08u;
            goto label_1c4c08;
        }
    }
    ctx->pc = 0x1C4BE4u;
    // 0x1c4be4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c4be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c4be8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C4BE8u;
    SET_GPR_U32(ctx, 31, 0x1C4BF0u);
    ctx->pc = 0x1C4BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BE8u;
    // 0x1c4bec: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C4BE8u, 0x1C4BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BF0u;
label_1c4bf0:
    // 0x1c4bf0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c4bf4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1c4bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c4bf8: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c4bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c4bfc: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C4BFCu;
    SET_GPR_U32(ctx, 31, 0x1C4C04u);
    ctx->pc = 0x1C4C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BFCu;
    // 0x1c4c00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C4BFCu, 0x1C4C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C04u;
label_1c4c04:
    // 0x1c4c04: 0x0  nop
    ctx->pc = 0x1c4c04u;
    // NOP
label_1c4c08:
    // 0x1c4c08: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1C4C08u;
    SET_GPR_U32(ctx, 31, 0x1C4C10u);
    ctx->pc = 0x1C4C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C08u;
    // 0x1c4c0c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1C4C08u, 0x1C4C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C10u;
label_1c4c10:
    // 0x1c4c10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c4c10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c4c14: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c4c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c4c18: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1C4C18u;
    SET_GPR_U32(ctx, 31, 0x1C4C20u);
    ctx->pc = 0x1C4C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C18u;
    // 0x1c4c1c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1C4C18u, 0x1C4C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C20u;
label_1c4c20:
    // 0x1c4c20: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c4c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c4c24: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C4C24u;
    SET_GPR_U32(ctx, 31, 0x1C4C2Cu);
    ctx->pc = 0x1C4C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C24u;
    // 0x1c4c28: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C4C24u, 0x1C4C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C2Cu;
label_1c4c2c:
    // 0x1c4c2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c4c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4c30: 0x0  nop
    ctx->pc = 0x1c4c30u;
    // NOP
    // 0x1c4c34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4c38: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4C38u;
    {
        const bool branch_taken_0x1c4c38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C38u;
        // 0x1c4c3c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c38) {
            ctx->pc = 0x1C4C44u;
            goto label_1c4c44;
        }
    }
    ctx->pc = 0x1C4C40u;
    // 0x1c4c40: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1c4c40u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1c4c44:
    // 0x1c4c44: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1c4c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1c4c48: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c4c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c4c4c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c4c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c4c50: 0x0  nop
    ctx->pc = 0x1c4c50u;
    // NOP
    // 0x1c4c54: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1c4c54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4c58: 0x45010071  bc1t        . + 4 + (0x71 << 2)
    ctx->pc = 0x1C4C58u;
    {
        const bool branch_taken_0x1c4c58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c4c58) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4C60u;
    // 0x1c4c60: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c4c60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4c64: 0x0  nop
    ctx->pc = 0x1c4c64u;
    // NOP
    // 0x1c4c68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4c68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4c6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4C6Cu;
    {
        const bool branch_taken_0x1c4c6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c4c6c) {
            ctx->pc = 0x1C4C80u;
            goto label_1c4c80;
        }
    }
    ctx->pc = 0x1C4C74u;
    // 0x1c4c74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4C74u;
    {
        const bool branch_taken_0x1c4c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C74u;
        // 0x1c4c78: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c74) {
            ctx->pc = 0x1C4C88u;
            goto label_1c4c88;
        }
    }
    ctx->pc = 0x1C4C7Cu;
    // 0x1c4c7c: 0x0  nop
    ctx->pc = 0x1c4c7cu;
    // NOP
label_1c4c80:
    // 0x1c4c80: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c4c80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c4c84: 0x0  nop
    ctx->pc = 0x1c4c84u;
    // NOP
label_1c4c88:
    // 0x1c4c88: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c4c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c4c8c: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x1c4c8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c4c90: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C4C90u;
    SET_GPR_U32(ctx, 31, 0x1C4C98u);
    ctx->pc = 0x1C4C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C90u;
    // 0x1c4c94: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C4C90u, 0x1C4C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C98u;
label_1c4c98:
    // 0x1c4c98: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c4c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c4c9c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1c4c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c4ca0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c4ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c4ca4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C4CA4u;
    SET_GPR_U32(ctx, 31, 0x1C4CACu);
    ctx->pc = 0x1C4CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4CA4u;
    // 0x1c4ca8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C4CA4u, 0x1C4CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4CACu;
label_1c4cac:
    // 0x1c4cac: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1C4CACu;
    {
        const bool branch_taken_0x1c4cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4cac) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4CB4u;
    // 0x1c4cb4: 0x0  nop
    ctx->pc = 0x1c4cb4u;
    // NOP
label_1c4cb8:
    // 0x1c4cb8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c4cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c4cbc: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c4cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c4cc0: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c4cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c4cc4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c4cc8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c4cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c4ccc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c4cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4cd0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C4CD0u;
    SET_GPR_U32(ctx, 31, 0x1C4CD8u);
    ctx->pc = 0x1C4CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4CD0u;
    // 0x1c4cd4: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C4CD0u, 0x1C4CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4CD8u;
label_1c4cd8:
    // 0x1c4cd8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c4cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c4cdc: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C4CDCu;
    SET_GPR_U32(ctx, 31, 0x1C4CE4u);
    ctx->pc = 0x1C4CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4CDCu;
    // 0x1c4ce0: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C4CDCu, 0x1C4CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4CE4u;
label_1c4ce4:
    // 0x1c4ce4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1c4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x1c4ce8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4cec: 0x0  nop
    ctx->pc = 0x1c4cecu;
    // NOP
    // 0x1c4cf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4cf4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C4CF4u;
    {
        const bool branch_taken_0x1c4cf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CF4u;
        // 0x1c4cf8: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4cf4) {
            ctx->pc = 0x1C4D20u;
            goto label_1c4d20;
        }
    }
    ctx->pc = 0x1C4CFCu;
    // 0x1c4cfc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c4cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c4d00: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C4D00u;
    SET_GPR_U32(ctx, 31, 0x1C4D08u);
    ctx->pc = 0x1C4D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D00u;
    // 0x1c4d04: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C4D00u, 0x1C4D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D08u;
label_1c4d08:
    // 0x1c4d08: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c4d0c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1c4d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c4d10: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c4d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c4d14: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C4D14u;
    SET_GPR_U32(ctx, 31, 0x1C4D1Cu);
    ctx->pc = 0x1C4D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D14u;
    // 0x1c4d18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C4D14u, 0x1C4D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D1Cu;
label_1c4d1c:
    // 0x1c4d1c: 0x0  nop
    ctx->pc = 0x1c4d1cu;
    // NOP
label_1c4d20:
    // 0x1c4d20: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c4d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c4d24: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C4D24u;
    SET_GPR_U32(ctx, 31, 0x1C4D2Cu);
    ctx->pc = 0x1C4D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D24u;
    // 0x1c4d28: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C4D24u, 0x1C4D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D2Cu;
label_1c4d2c:
    // 0x1c4d2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c4d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4d30: 0x0  nop
    ctx->pc = 0x1c4d30u;
    // NOP
    // 0x1c4d34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4d34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4d38: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x1C4D38u;
    {
        const bool branch_taken_0x1c4d38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D38u;
        // 0x1c4d3c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d38) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4D40u;
    // 0x1c4d40: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c4d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c4d44: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C4D44u;
    SET_GPR_U32(ctx, 31, 0x1C4D4Cu);
    ctx->pc = 0x1C4D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D44u;
    // 0x1c4d48: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C4D44u, 0x1C4D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D4Cu;
label_1c4d4c:
    // 0x1c4d4c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c4d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c4d50: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1c4d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c4d54: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c4d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c4d58: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C4D58u;
    SET_GPR_U32(ctx, 31, 0x1C4D60u);
    ctx->pc = 0x1C4D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D58u;
    // 0x1c4d5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C4D58u, 0x1C4D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D60u;
label_1c4d60:
    // 0x1c4d60: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1C4D60u;
    {
        const bool branch_taken_0x1c4d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4d60) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4D68u;
label_1c4d68:
    // 0x1c4d68: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c4d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c4d6c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c4d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c4d70: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c4d70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c4d74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c4d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c4d78: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c4d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c4d7c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c4d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4d80: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C4D80u;
    SET_GPR_U32(ctx, 31, 0x1C4D88u);
    ctx->pc = 0x1C4D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D80u;
    // 0x1c4d84: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C4D80u, 0x1C4D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D88u;
label_1c4d88:
    // 0x1c4d88: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c4d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c4d8c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C4D8Cu;
    SET_GPR_U32(ctx, 31, 0x1C4D94u);
    ctx->pc = 0x1C4D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D8Cu;
    // 0x1c4d90: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C4D8Cu, 0x1C4D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D94u;
label_1c4d94:
    // 0x1c4d94: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1c4d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x1c4d98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4d9c: 0x0  nop
    ctx->pc = 0x1c4d9cu;
    // NOP
    // 0x1c4da0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4da4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C4DA4u;
    {
        const bool branch_taken_0x1c4da4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DA4u;
        // 0x1c4da8: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4da4) {
            ctx->pc = 0x1C4DD0u;
            goto label_1c4dd0;
        }
    }
    ctx->pc = 0x1C4DACu;
    // 0x1c4dac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c4dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c4db0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C4DB0u;
    SET_GPR_U32(ctx, 31, 0x1C4DB8u);
    ctx->pc = 0x1C4DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4DB0u;
    // 0x1c4db4: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C4DB0u, 0x1C4DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4DB8u;
label_1c4db8:
    // 0x1c4db8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c4dbc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c4dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c4dc0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c4dc4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C4DC4u;
    SET_GPR_U32(ctx, 31, 0x1C4DCCu);
    ctx->pc = 0x1C4DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4DC4u;
    // 0x1c4dc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C4DC4u, 0x1C4DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4DCCu;
label_1c4dcc:
    // 0x1c4dcc: 0x0  nop
    ctx->pc = 0x1c4dccu;
    // NOP
label_1c4dd0:
    // 0x1c4dd0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c4dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c4dd4: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C4DD4u;
    SET_GPR_U32(ctx, 31, 0x1C4DDCu);
    ctx->pc = 0x1C4DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4DD4u;
    // 0x1c4dd8: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C4DD4u, 0x1C4DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4DDCu;
label_1c4ddc:
    // 0x1c4ddc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c4ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4de0: 0x0  nop
    ctx->pc = 0x1c4de0u;
    // NOP
    // 0x1c4de4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c4de4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4de8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1C4DE8u;
    {
        const bool branch_taken_0x1c4de8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c4de8) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4DF0u;
    // 0x1c4df0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1c4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1c4df4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c4df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c4df8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c4df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c4dfc: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1c4dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c4e00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4e04: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C4E04u;
    SET_GPR_U32(ctx, 31, 0x1C4E0Cu);
    ctx->pc = 0x1C4E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E04u;
    // 0x1c4e08: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C4E04u, 0x1C4E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E0Cu;
label_1c4e0c:
    // 0x1c4e0c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c4e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c4e10: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c4e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c4e14: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c4e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c4e18: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C4E18u;
    SET_GPR_U32(ctx, 31, 0x1C4E20u);
    ctx->pc = 0x1C4E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E18u;
    // 0x1c4e1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C4E18u, 0x1C4E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E20u;
label_1c4e20:
    // 0x1c4e20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c4e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4e24: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c4e24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4e28: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c4e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c4e2c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c4e2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4e30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c4e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4e34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c4e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4e38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E38u;
        // 0x1c4e3c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4E40u;
}
