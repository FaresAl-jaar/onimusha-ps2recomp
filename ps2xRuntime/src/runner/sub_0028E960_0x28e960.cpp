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

// Function: sub_0028E960
// Address: 0x28e960 - 0x28ed60
void sub_0028E960_0x28e960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E960_0x28e960");
#endif

    switch (ctx->pc) {
        case 0x28e99cu: goto label_28e99c;
        case 0x28e9ccu: goto label_28e9cc;
        case 0x28e9f8u: goto label_28e9f8;
        case 0x28ea20u: goto label_28ea20;
        case 0x28ea28u: goto label_28ea28;
        case 0x28ea44u: goto label_28ea44;
        case 0x28ea64u: goto label_28ea64;
        case 0x28ea88u: goto label_28ea88;
        case 0x28eaa8u: goto label_28eaa8;
        case 0x28eae8u: goto label_28eae8;
        case 0x28eb1cu: goto label_28eb1c;
        case 0x28eb50u: goto label_28eb50;
        case 0x28ec7cu: goto label_28ec7c;
        case 0x28ecb8u: goto label_28ecb8;
        case 0x28ecd0u: goto label_28ecd0;
        case 0x28ecf4u: goto label_28ecf4;
        case 0x28ed14u: goto label_28ed14;
        case 0x28ed30u: goto label_28ed30;
        default: break;
    }

    ctx->pc = 0x28e960u;

    // 0x28e960: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x28e960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x28e964: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28e964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28e968: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28e968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28e96c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28e96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28e970: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28e970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28e974: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28e974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28e978: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28e978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28e97c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28e97cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e980: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28e980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28e984: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28e984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28e988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28e988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28e98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28e98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28e990: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28e990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e994: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x28E994u;
    SET_GPR_U32(ctx, 31, 0x28E99Cu);
    ctx->pc = 0x28E998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E994u;
    // 0x28e998: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x28E994u, 0x28E99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E99Cu;
label_28e99c:
    // 0x28e99c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x28e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x28e9a0: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x28e9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x28e9a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x28e9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x28e9a8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x28e9a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x28e9ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28e9acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28e9b0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x28e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x28e9b4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28e9b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28e9b8: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x28e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x28e9bc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x28e9bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x28e9c0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x28e9c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x28e9c4: 0xc09e644  jal         func_279910
    ctx->pc = 0x28E9C4u;
    SET_GPR_U32(ctx, 31, 0x28E9CCu);
    ctx->pc = 0x28E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E9C4u;
    // 0x28e9c8: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x28E9C4u, 0x28E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9CCu;
label_28e9cc:
    // 0x28e9cc: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x28e9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x28e9d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x28e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x28e9d4: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x28e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28e9d8: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x28e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x28e9dc: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x28e9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x28e9e0: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x28e9e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28e9e4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28e9e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28e9ec: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x28e9ecu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e9f0: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28E9F0u;
    SET_GPR_U32(ctx, 31, 0x28E9F8u);
    ctx->pc = 0x28E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E9F0u;
    // 0x28e9f4: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28E9F0u, 0x28E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9F8u;
label_28e9f8:
    // 0x28e9f8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x28e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28e9fc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x28e9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x28ea00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ea04: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x28ea04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x28ea08: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x28ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28ea0c: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x28ea0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28ea10: 0x90460005  lbu         $a2, 0x5($v0)
    ctx->pc = 0x28ea10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x28ea14: 0x90480011  lbu         $t0, 0x11($v0)
    ctx->pc = 0x28ea14u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x28ea18: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x28EA18u;
    SET_GPR_U32(ctx, 31, 0x28EA20u);
    ctx->pc = 0x28EA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA18u;
    // 0x28ea1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x28EA18u, 0x28EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA20u;
label_28ea20:
    // 0x28ea20: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x28EA20u;
    SET_GPR_U32(ctx, 31, 0x28EA28u);
    ctx->pc = 0x28EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA20u;
    // 0x28ea24: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x28EA20u, 0x28EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA28u;
label_28ea28:
    // 0x28ea28: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x28ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28ea2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x28ea2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28ea30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28ea30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea34: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x28ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28ea38: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x28ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x28ea3c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28EA3Cu;
    SET_GPR_U32(ctx, 31, 0x28EA44u);
    ctx->pc = 0x28EA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA3Cu;
    // 0x28ea40: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28EA3Cu, 0x28EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA44u;
label_28ea44:
    // 0x28ea44: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x28ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28ea48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ea4c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x28ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x28ea50: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x28ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28ea54: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28ea54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28ea58: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x28ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x28ea5c: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x28EA5Cu;
    SET_GPR_U32(ctx, 31, 0x28EA64u);
    ctx->pc = 0x28EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA5Cu;
    // 0x28ea60: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x28EA5Cu, 0x28EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA64u;
label_28ea64:
    // 0x28ea64: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x28ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x28ea68: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x28ea68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28ea6c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28ea6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28ea70: 0x1020008f  beqz        $at, . + 4 + (0x8F << 2)
    ctx->pc = 0x28EA70u;
    {
        const bool branch_taken_0x28ea70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA70u;
        // 0x28ea74: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea70) {
            ctx->pc = 0x28ECB0u;
            goto label_28ecb0;
        }
    }
    ctx->pc = 0x28EA78u;
    // 0x28ea78: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x28ea78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x28ea7c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x28ea7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea80: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28ea80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28ea84: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x28ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_28ea88:
    // 0x28ea88: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x28ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28ea8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28ea8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea90: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x28ea90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x28ea94: 0x2c31018  mult        $v0, $s6, $v1
    ctx->pc = 0x28ea94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28ea98: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28ea98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28ea9c: 0x1020007e  beqz        $at, . + 4 + (0x7E << 2)
    ctx->pc = 0x28EA9Cu;
    {
        const bool branch_taken_0x28ea9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA9Cu;
        // 0x28eaa0: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea9c) {
            ctx->pc = 0x28EC98u;
            goto label_28ec98;
        }
    }
    ctx->pc = 0x28EAA4u;
    // 0x28eaa4: 0x0  nop
    ctx->pc = 0x28eaa4u;
    // NOP
label_28eaa8:
    // 0x28eaa8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x28eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28eaac: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x28eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x28eab0: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x28eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x28eab4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x28eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x28eab8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x28eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28eabc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x28eabcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x28eac0: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x28eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28eac4: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x28eac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28eac8: 0x86230020  lh          $v1, 0x20($s1)
    ctx->pc = 0x28eac8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28eacc: 0x1062006c  beq         $v1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x28EACCu;
    {
        const bool branch_taken_0x28eacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28eacc) {
            ctx->pc = 0x28EC80u;
            goto label_28ec80;
        }
    }
    ctx->pc = 0x28EAD4u;
    // 0x28ead4: 0x92260024  lbu         $a2, 0x24($s1)
    ctx->pc = 0x28ead4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x28ead8: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x28EAD8u;
    {
        const bool branch_taken_0x28ead8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAD8u;
        // 0x28eadc: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ead8) {
            ctx->pc = 0x28EB10u;
            goto label_28eb10;
        }
    }
    ctx->pc = 0x28EAE0u;
    // 0x28eae0: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x28EAE0u;
    SET_GPR_U32(ctx, 31, 0x28EAE8u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x28EAE0u, 0x28EAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EAE8u;
label_28eae8:
    // 0x28eae8: 0x94530004  lhu         $s3, 0x4($v0)
    ctx->pc = 0x28eae8u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28eaec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28eaecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eaf0: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x28eaf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28eaf4: 0x94520006  lhu         $s2, 0x6($v0)
    ctx->pc = 0x28eaf4u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x28eaf8: 0x263f021  addu        $fp, $s3, $v1
    ctx->pc = 0x28eaf8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x28eafc: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x28eafcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x28eb00: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x28eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28eb04: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28EB04u;
    {
        const bool branch_taken_0x28eb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB04u;
        // 0x28eb08: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb04) {
            ctx->pc = 0x28EB40u;
            goto label_28eb40;
        }
    }
    ctx->pc = 0x28EB0Cu;
    // 0x28eb0c: 0x0  nop
    ctx->pc = 0x28eb0cu;
    // NOP
label_28eb10:
    // 0x28eb10: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x28eb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28eb14: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x28EB14u;
    SET_GPR_U32(ctx, 31, 0x28EB1Cu);
    ctx->pc = 0x28EB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EB14u;
    // 0x28eb18: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x28EB14u, 0x28EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EB1Cu;
label_28eb1c:
    // 0x28eb1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28eb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eb20: 0x8fb30100  lw          $s3, 0x100($sp)
    ctx->pc = 0x28eb20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28eb24: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x28eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x28eb28: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x28eb28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28eb2c: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x28eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x28eb30: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x28eb30u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28eb34: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x28eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x28eb38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28eb3c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x28eb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_28eb40:
    // 0x28eb40: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x28eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28eb44: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x28eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x28eb48: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x28EB48u;
    SET_GPR_U32(ctx, 31, 0x28EB50u);
    ctx->pc = 0x28EB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EB48u;
    // 0x28eb4c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x28EB48u, 0x28EB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EB50u;
label_28eb50:
    // 0x28eb50: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x28eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x28eb54: 0x86240022  lh          $a0, 0x22($s1)
    ctx->pc = 0x28eb54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x28eb58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28eb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28eb5c: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x28eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x28eb60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28eb64: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x28eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28eb68: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x28eb68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28eb6c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x28eb6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x28eb70: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x28eb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x28eb74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28eb74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28eb78: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28eb78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28eb7c: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x28eb7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x28eb80: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x28eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x28eb84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28eb88: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x28eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x28eb8c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x28eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x28eb90: 0x94440012  lhu         $a0, 0x12($v0)
    ctx->pc = 0x28eb90u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x28eb94: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EB94u;
    {
        const bool branch_taken_0x28eb94 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x28EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB94u;
        // 0x28eb98: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb94) {
            ctx->pc = 0x28EBA8u;
            goto label_28eba8;
        }
    }
    ctx->pc = 0x28EB9Cu;
    // 0x28eb9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28eb9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eba0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EBA0u;
    {
        const bool branch_taken_0x28eba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBA0u;
        // 0x28eba4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eba0) {
            ctx->pc = 0x28EBC0u;
            goto label_28ebc0;
        }
    }
    ctx->pc = 0x28EBA8u;
label_28eba8:
    // 0x28eba8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x28eba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28ebac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28ebacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28ebb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ebb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ebb4: 0x0  nop
    ctx->pc = 0x28ebb4u;
    // NOP
    // 0x28ebb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ebb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ebbc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ebbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28ebc0:
    // 0x28ebc0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x28ebc0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28ebc4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x28ebc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x28ebc8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x28ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x28ebcc: 0x8ead0070  lw          $t5, 0x70($s5)
    ctx->pc = 0x28ebccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28ebd0: 0x860b000a  lh          $t3, 0xA($s0)
    ctx->pc = 0x28ebd0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x28ebd4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28ebd8: 0x860c0008  lh          $t4, 0x8($s0)
    ctx->pc = 0x28ebd8u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28ebdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ebdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ebe0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28ebe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ebe4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28ebe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ebe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ebe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ebec: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x28ebecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ebf0: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x28ebf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28ebf4: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x28ebf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28ebf8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28ebf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28ebfc: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x28ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x28ec00: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x28ec00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28ec04: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x28ec04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x28ec08: 0x27aa0150  addiu       $t2, $sp, 0x150
    ctx->pc = 0x28ec08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x28ec0c: 0xc5a0001c  lwc1        $f0, 0x1C($t5)
    ctx->pc = 0x28ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ec10: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x28ec10u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28ec14: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x28ec14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28ec18: 0xc5b10018  lwc1        $f17, 0x18($t5)
    ctx->pc = 0x28ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x28ec1c: 0x468019a0  cvt.s.w     $f6, $f3
    ctx->pc = 0x28ec1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x28ec20: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x28ec20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28ec24: 0x46010402  mul.s       $f16, $f0, $f1
    ctx->pc = 0x28ec24u;
    ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28ec28: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x28ec28u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28ec2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28ec2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ec30: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x28ec30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28ec34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28ec34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28ec38: 0x46016082  mul.s       $f2, $f12, $f1
    ctx->pc = 0x28ec38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x28ec3c: 0x46032843  div.s       $f1, $f5, $f3
    ctx->pc = 0x28ec3cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x28ec40: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x28ec40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x28ec44: 0x46016342  mul.s       $f13, $f12, $f1
    ctx->pc = 0x28ec44u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x28ec48: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x28ec48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x28ec4c: 0x46062042  mul.s       $f1, $f4, $f6
    ctx->pc = 0x28ec4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x28ec50: 0x460328c3  div.s       $f3, $f5, $f3
    ctx->pc = 0x28ec50u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x28ec54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ec54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ec58: 0x0  nop
    ctx->pc = 0x28ec58u;
    // NOP
    // 0x28ec5c: 0x46012843  div.s       $f1, $f5, $f1
    ctx->pc = 0x28ec5cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
    // 0x28ec60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ec60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ec64: 0x46008c86  mov.s       $f18, $f17
    ctx->pc = 0x28ec64u;
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    // 0x28ec68: 0x46021b82  mul.s       $f14, $f3, $f2
    ctx->pc = 0x28ec68u;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x28ec6c: 0x0  nop
    ctx->pc = 0x28ec6cu;
    // NOP
    // 0x28ec70: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x28ec70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x28ec74: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x28EC74u;
    SET_GPR_U32(ctx, 31, 0x28EC7Cu);
    ctx->pc = 0x28EC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EC74u;
    // 0x28ec78: 0x46000bc2  mul.s       $f15, $f1, $f0 (Delay Slot)
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x28EC74u, 0x28EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EC7Cu;
label_28ec7c:
    // 0x28ec7c: 0x0  nop
    ctx->pc = 0x28ec7cu;
    // NOP
label_28ec80:
    // 0x28ec80: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x28ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28ec84: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28ec84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28ec88: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x28ec88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x28ec8c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x28ec8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28ec90: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x28EC90u;
    {
        const bool branch_taken_0x28ec90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ec90) {
            ctx->pc = 0x28EAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28eaa8;
        }
    }
    ctx->pc = 0x28EC98u;
label_28ec98:
    // 0x28ec98: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x28ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x28ec9c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x28ec9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x28eca0: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x28eca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28eca4: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x28eca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28eca8: 0x1440ff77  bnez        $v0, . + 4 + (-0x89 << 2)
    ctx->pc = 0x28ECA8u;
    {
        const bool branch_taken_0x28eca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECA8u;
        // 0x28ecac: 0x26f70020  addiu       $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eca8) {
            ctx->pc = 0x28EA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ea88;
        }
    }
    ctx->pc = 0x28ECB0u;
label_28ecb0:
    // 0x28ecb0: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x28ECB0u;
    SET_GPR_U32(ctx, 31, 0x28ECB8u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x28ECB0u, 0x28ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ECB8u;
label_28ecb8:
    // 0x28ecb8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x28ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28ecbc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x28ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x28ecc0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28ecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ecc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ecc8: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x28ECC8u;
    SET_GPR_U32(ctx, 31, 0x28ECD0u);
    ctx->pc = 0x28ECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ECC8u;
    // 0x28eccc: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x28ECC8u, 0x28ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ECD0u;
label_28ecd0:
    // 0x28ecd0: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x28ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28ecd4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x28ecd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x28ecd8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x28ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28ecdc: 0x26a60040  addiu       $a2, $s5, 0x40
    ctx->pc = 0x28ecdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x28ece0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x28ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x28ece4: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x28ece4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x28ece8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ecec: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x28ECECu;
    SET_GPR_U32(ctx, 31, 0x28ECF4u);
    ctx->pc = 0x28ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ECECu;
    // 0x28ecf0: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x28ECECu, 0x28ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ECF4u;
label_28ecf4:
    // 0x28ecf4: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x28ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x28ecf8: 0x38283  sra         $s0, $v1, 10
    ctx->pc = 0x28ecf8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
    // 0x28ecfc: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x28ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28ed00: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x28ED00u;
    {
        const bool branch_taken_0x28ed00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed00) {
            ctx->pc = 0x28ED30u;
            goto label_28ed30;
        }
    }
    ctx->pc = 0x28ED08u;
    // 0x28ed08: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x28ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x28ed0c: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x28ED0Cu;
    SET_GPR_U32(ctx, 31, 0x28ED14u);
    ctx->pc = 0x28ED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ED0Cu;
    // 0x28ed10: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x28ED0Cu, 0x28ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ED14u;
label_28ed14:
    // 0x28ed14: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x28ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28ed18: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x28ed18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x28ed1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ed20: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x28ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x28ed24: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x28ed24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28ed28: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x28ED28u;
    SET_GPR_U32(ctx, 31, 0x28ED30u);
    ctx->pc = 0x28ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ED28u;
    // 0x28ed2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x28ED28u, 0x28ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ED30u;
label_28ed30:
    // 0x28ed30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28ed30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28ed34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28ed34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28ed38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28ed38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28ed3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28ed3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28ed40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28ed40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ed44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28ed44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ed48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28ed48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ed4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28ed4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ed50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28ed50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ed54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ed54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ed58: 0x3e00008  jr          $ra
    ctx->pc = 0x28ED58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED58u;
        // 0x28ed5c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ED58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ED60u;
}
