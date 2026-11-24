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

// Function: sub_00348A70
// Address: 0x348a70 - 0x348e38
void sub_00348A70_0x348a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348A70_0x348a70");
#endif

    switch (ctx->pc) {
        case 0x348aacu: goto label_348aac;
        case 0x348adcu: goto label_348adc;
        case 0x348afcu: goto label_348afc;
        case 0x348b24u: goto label_348b24;
        case 0x348b38u: goto label_348b38;
        case 0x348b54u: goto label_348b54;
        case 0x348b74u: goto label_348b74;
        case 0x348ba0u: goto label_348ba0;
        case 0x348bd0u: goto label_348bd0;
        case 0x348bfcu: goto label_348bfc;
        case 0x348c30u: goto label_348c30;
        case 0x348d5cu: goto label_348d5c;
        case 0x348d90u: goto label_348d90;
        case 0x348da8u: goto label_348da8;
        case 0x348dccu: goto label_348dcc;
        case 0x348decu: goto label_348dec;
        case 0x348e08u: goto label_348e08;
        default: break;
    }

    ctx->pc = 0x348a70u;

    // 0x348a70: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x348a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x348a74: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x348a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x348a78: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x348a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x348a7c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x348a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x348a80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x348a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x348a84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x348a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x348a88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x348a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x348a8c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x348a8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x348a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x348a94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x348a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x348a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x348a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x348a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x348a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x348aa0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x348aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348aa4: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x348AA4u;
    SET_GPR_U32(ctx, 31, 0x348AACu);
    ctx->pc = 0x348AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348AA4u;
    // 0x348aa8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x348AA4u, 0x348AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AACu;
label_348aac:
    // 0x348aac: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x348aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x348ab0: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x348ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x348ab4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x348ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x348ab8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x348ab8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x348abc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x348abcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x348ac0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x348ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x348ac4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x348ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x348ac8: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x348ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x348acc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x348accu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x348ad0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x348ad0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x348ad4: 0xc09e644  jal         func_279910
    ctx->pc = 0x348AD4u;
    SET_GPR_U32(ctx, 31, 0x348ADCu);
    ctx->pc = 0x348AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348AD4u;
    // 0x348ad8: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x348AD4u, 0x348ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348ADCu;
label_348adc:
    // 0x348adc: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x348adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x348ae0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x348ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x348ae4: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x348ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x348ae8: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x348ae8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x348aec: 0x90460005  lbu         $a2, 0x5($v0)
    ctx->pc = 0x348aecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x348af0: 0x90480011  lbu         $t0, 0x11($v0)
    ctx->pc = 0x348af0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x348af4: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x348AF4u;
    SET_GPR_U32(ctx, 31, 0x348AFCu);
    ctx->pc = 0x348AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348AF4u;
    // 0x348af8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x348AF4u, 0x348AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AFCu;
label_348afc:
    // 0x348afc: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x348afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x348b00: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x348b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x348b04: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x348b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x348b08: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x348b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x348b0c: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x348b0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x348b10: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x348b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x348b14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x348b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x348b18: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x348b18u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348b1c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x348B1Cu;
    SET_GPR_U32(ctx, 31, 0x348B24u);
    ctx->pc = 0x348B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B1Cu;
    // 0x348b20: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x348B1Cu, 0x348B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B24u;
label_348b24:
    // 0x348b24: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x348b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x348b28: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x348b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x348b2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x348b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x348b30: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x348B30u;
    SET_GPR_U32(ctx, 31, 0x348B38u);
    ctx->pc = 0x348B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B30u;
    // 0x348b34: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x348B30u, 0x348B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B38u;
label_348b38:
    // 0x348b38: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x348b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x348b3c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x348b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x348b40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x348b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b44: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x348b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x348b48: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x348b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x348b4c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x348B4Cu;
    SET_GPR_U32(ctx, 31, 0x348B54u);
    ctx->pc = 0x348B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B4Cu;
    // 0x348b50: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x348B4Cu, 0x348B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B54u;
label_348b54:
    // 0x348b54: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x348b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x348b58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x348b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x348b5c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x348b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x348b60: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x348b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x348b64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x348b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x348b68: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x348b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x348b6c: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x348B6Cu;
    SET_GPR_U32(ctx, 31, 0x348B74u);
    ctx->pc = 0x348B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B6Cu;
    // 0x348b70: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x348B6Cu, 0x348B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B74u;
label_348b74:
    // 0x348b74: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x348b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x348b78: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x348b78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x348b7c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x348b7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x348b80: 0x10200081  beqz        $at, . + 4 + (0x81 << 2)
    ctx->pc = 0x348B80u;
    {
        const bool branch_taken_0x348b80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x348B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B80u;
        // 0x348b84: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348b80) {
            ctx->pc = 0x348D88u;
            goto label_348d88;
        }
    }
    ctx->pc = 0x348B88u;
    // 0x348b88: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x348b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x348b8c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x348b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x348b90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x348b90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x348b94: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x348b94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b98: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x348b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x348b9c: 0x0  nop
    ctx->pc = 0x348b9cu;
    // NOP
label_348ba0:
    // 0x348ba0: 0x8ea4007c  lw          $a0, 0x7C($s5)
    ctx->pc = 0x348ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x348ba4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x348ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x348ba8: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x348ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x348bac: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x348bacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x348bb0: 0x86220020  lh          $v0, 0x20($s1)
    ctx->pc = 0x348bb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x348bb4: 0x1043006a  beq         $v0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x348BB4u;
    {
        const bool branch_taken_0x348bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x348bb4) {
            ctx->pc = 0x348D60u;
            goto label_348d60;
        }
    }
    ctx->pc = 0x348BBCu;
    // 0x348bbc: 0x92260024  lbu         $a2, 0x24($s1)
    ctx->pc = 0x348bbcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x348bc0: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x348BC0u;
    {
        const bool branch_taken_0x348bc0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x348BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BC0u;
        // 0x348bc4: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348bc0) {
            ctx->pc = 0x348BF0u;
            goto label_348bf0;
        }
    }
    ctx->pc = 0x348BC8u;
    // 0x348bc8: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x348BC8u;
    SET_GPR_U32(ctx, 31, 0x348BD0u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x348BC8u, 0x348BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BD0u;
label_348bd0:
    // 0x348bd0: 0x94530004  lhu         $s3, 0x4($v0)
    ctx->pc = 0x348bd0u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x348bd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x348bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348bd8: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x348bd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x348bdc: 0x94520006  lhu         $s2, 0x6($v0)
    ctx->pc = 0x348bdcu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x348be0: 0x263b821  addu        $s7, $s3, $v1
    ctx->pc = 0x348be0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x348be4: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x348be4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x348be8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x348BE8u;
    {
        const bool branch_taken_0x348be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BE8u;
        // 0x348bec: 0x242f021  addu        $fp, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348be8) {
            ctx->pc = 0x348C20u;
            goto label_348c20;
        }
    }
    ctx->pc = 0x348BF0u;
label_348bf0:
    // 0x348bf0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x348bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x348bf4: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x348BF4u;
    SET_GPR_U32(ctx, 31, 0x348BFCu);
    ctx->pc = 0x348BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348BF4u;
    // 0x348bf8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x348BF4u, 0x348BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BFCu;
label_348bfc:
    // 0x348bfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x348bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348c00: 0x8fb300f0  lw          $s3, 0xF0($sp)
    ctx->pc = 0x348c00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x348c04: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x348c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x348c08: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x348c08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348c0c: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x348c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x348c10: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x348c10u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348c14: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x348c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x348c18: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x348c18u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348c1c: 0x0  nop
    ctx->pc = 0x348c1cu;
    // NOP
label_348c20:
    // 0x348c20: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x348c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x348c24: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x348c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x348c28: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x348C28u;
    SET_GPR_U32(ctx, 31, 0x348C30u);
    ctx->pc = 0x348C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C28u;
    // 0x348c2c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x348C28u, 0x348C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C30u;
label_348c30:
    // 0x348c30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x348c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x348c34: 0x86240022  lh          $a0, 0x22($s1)
    ctx->pc = 0x348c34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x348c38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x348c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x348c3c: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x348c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x348c40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x348c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348c44: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x348c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x348c48: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x348c48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x348c4c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x348c4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x348c50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x348c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x348c54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x348c54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x348c58: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x348c58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x348c5c: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x348c5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x348c60: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x348c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x348c64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x348c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x348c68: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x348c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x348c6c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x348c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x348c70: 0x94440012  lhu         $a0, 0x12($v0)
    ctx->pc = 0x348c70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x348c74: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x348C74u;
    {
        const bool branch_taken_0x348c74 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x348C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C74u;
        // 0x348c78: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c74) {
            ctx->pc = 0x348C88u;
            goto label_348c88;
        }
    }
    ctx->pc = 0x348C7Cu;
    // 0x348c7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x348c7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348c80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x348C80u;
    {
        const bool branch_taken_0x348c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C80u;
        // 0x348c84: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c80) {
            ctx->pc = 0x348CA0u;
            goto label_348ca0;
        }
    }
    ctx->pc = 0x348C88u;
label_348c88:
    // 0x348c88: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x348c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x348c8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x348c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x348c90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348c90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348c94: 0x0  nop
    ctx->pc = 0x348c94u;
    // NOP
    // 0x348c98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x348c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x348c9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x348c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_348ca0:
    // 0x348ca0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x348ca0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x348ca4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x348ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x348ca8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x348ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x348cac: 0x8ead0070  lw          $t5, 0x70($s5)
    ctx->pc = 0x348cacu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x348cb0: 0x860b000a  lh          $t3, 0xA($s0)
    ctx->pc = 0x348cb0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x348cb4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348cb8: 0x860c0008  lh          $t4, 0x8($s0)
    ctx->pc = 0x348cb8u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x348cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348cc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x348cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348cc4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x348cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348ccc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x348cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348cd0: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x348cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x348cd4: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x348cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348cd8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x348cd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x348cdc: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x348cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x348ce0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x348ce0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x348ce4: 0x27a90130  addiu       $t1, $sp, 0x130
    ctx->pc = 0x348ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x348ce8: 0x27aa0140  addiu       $t2, $sp, 0x140
    ctx->pc = 0x348ce8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x348cec: 0xc5a0001c  lwc1        $f0, 0x1C($t5)
    ctx->pc = 0x348cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348cf0: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x348cf0u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x348cf4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x348cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x348cf8: 0xc5b10018  lwc1        $f17, 0x18($t5)
    ctx->pc = 0x348cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x348cfc: 0x468019a0  cvt.s.w     $f6, $f3
    ctx->pc = 0x348cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x348d00: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x348d00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x348d04: 0x46010402  mul.s       $f16, $f0, $f1
    ctx->pc = 0x348d04u;
    ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x348d08: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x348d08u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x348d0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x348d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x348d10: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x348d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x348d14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x348d14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x348d18: 0x46016082  mul.s       $f2, $f12, $f1
    ctx->pc = 0x348d18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x348d1c: 0x46032843  div.s       $f1, $f5, $f3
    ctx->pc = 0x348d1cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x348d20: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x348d20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x348d24: 0x46016342  mul.s       $f13, $f12, $f1
    ctx->pc = 0x348d24u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x348d28: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x348d28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x348d2c: 0x46062042  mul.s       $f1, $f4, $f6
    ctx->pc = 0x348d2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x348d30: 0x460328c3  div.s       $f3, $f5, $f3
    ctx->pc = 0x348d30u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x348d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348d38: 0x0  nop
    ctx->pc = 0x348d38u;
    // NOP
    // 0x348d3c: 0x46012843  div.s       $f1, $f5, $f1
    ctx->pc = 0x348d3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
    // 0x348d40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x348d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x348d44: 0x46008c86  mov.s       $f18, $f17
    ctx->pc = 0x348d44u;
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    // 0x348d48: 0x46021b82  mul.s       $f14, $f3, $f2
    ctx->pc = 0x348d48u;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x348d4c: 0x0  nop
    ctx->pc = 0x348d4cu;
    // NOP
    // 0x348d50: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x348d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x348d54: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x348D54u;
    SET_GPR_U32(ctx, 31, 0x348D5Cu);
    ctx->pc = 0x348D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D54u;
    // 0x348d58: 0x46000bc2  mul.s       $f15, $f1, $f0 (Delay Slot)
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x348D54u, 0x348D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D5Cu;
label_348d5c:
    // 0x348d5c: 0x0  nop
    ctx->pc = 0x348d5cu;
    // NOP
label_348d60:
    // 0x348d60: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x348d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x348d64: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x348d64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x348d68: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x348d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x348d6c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x348d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x348d70: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x348d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x348d74: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x348d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x348d78: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x348d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x348d7c: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x348D7Cu;
    {
        const bool branch_taken_0x348d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D7Cu;
        // 0x348d80: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348d7c) {
            ctx->pc = 0x348BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348ba0;
        }
    }
    ctx->pc = 0x348D84u;
    // 0x348d84: 0x0  nop
    ctx->pc = 0x348d84u;
    // NOP
label_348d88:
    // 0x348d88: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x348D88u;
    SET_GPR_U32(ctx, 31, 0x348D90u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x348D88u, 0x348D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D90u;
label_348d90:
    // 0x348d90: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x348d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x348d94: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x348d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x348d98: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x348d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x348d9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x348d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x348da0: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x348DA0u;
    SET_GPR_U32(ctx, 31, 0x348DA8u);
    ctx->pc = 0x348DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348DA0u;
    // 0x348da4: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x348DA0u, 0x348DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348DA8u;
label_348da8:
    // 0x348da8: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x348da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x348dac: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x348dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x348db0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x348db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x348db4: 0x26a60040  addiu       $a2, $s5, 0x40
    ctx->pc = 0x348db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x348db8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x348db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x348dbc: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x348dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x348dc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x348dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x348dc4: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x348DC4u;
    SET_GPR_U32(ctx, 31, 0x348DCCu);
    ctx->pc = 0x348DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348DC4u;
    // 0x348dc8: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x348DC4u, 0x348DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348DCCu;
label_348dcc:
    // 0x348dcc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x348dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x348dd0: 0x38283  sra         $s0, $v1, 10
    ctx->pc = 0x348dd0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
    // 0x348dd4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x348dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x348dd8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x348DD8u;
    {
        const bool branch_taken_0x348dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348dd8) {
            ctx->pc = 0x348E08u;
            goto label_348e08;
        }
    }
    ctx->pc = 0x348DE0u;
    // 0x348de0: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x348de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x348de4: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x348DE4u;
    SET_GPR_U32(ctx, 31, 0x348DECu);
    ctx->pc = 0x348DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348DE4u;
    // 0x348de8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x348DE4u, 0x348DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348DECu;
label_348dec:
    // 0x348dec: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x348decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x348df0: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x348df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x348df4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x348df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x348df8: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x348df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x348dfc: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x348dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x348e00: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x348E00u;
    SET_GPR_U32(ctx, 31, 0x348E08u);
    ctx->pc = 0x348E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E00u;
    // 0x348e04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x348E00u, 0x348E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348E08u;
label_348e08:
    // 0x348e08: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x348e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x348e0c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x348e0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x348e10: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x348e10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x348e14: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x348e14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x348e18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x348e18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x348e1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x348e1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x348e20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x348e20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x348e24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x348e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x348e28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x348e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348e2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348e30: 0x3e00008  jr          $ra
    ctx->pc = 0x348E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E30u;
        // 0x348e34: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348E38u;
}
