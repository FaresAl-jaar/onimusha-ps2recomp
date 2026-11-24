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

// Function: sub_002FF8F0
// Address: 0x2ff8f0 - 0x2ffad4
void sub_002FF8F0_0x2ff8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF8F0_0x2ff8f0");
#endif

    switch (ctx->pc) {
        case 0x2ff918u: goto label_2ff918;
        case 0x2ff9ccu: goto label_2ff9cc;
        case 0x2ff9f4u: goto label_2ff9f4;
        case 0x2ffa00u: goto label_2ffa00;
        case 0x2ffa14u: goto label_2ffa14;
        case 0x2ffa20u: goto label_2ffa20;
        case 0x2ffa2cu: goto label_2ffa2c;
        case 0x2ffa48u: goto label_2ffa48;
        case 0x2ffa70u: goto label_2ffa70;
        case 0x2ffa88u: goto label_2ffa88;
        case 0x2ffaa0u: goto label_2ffaa0;
        case 0x2ffab4u: goto label_2ffab4;
        default: break;
    }

    ctx->pc = 0x2ff8f0u;

    // 0x2ff8f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ff8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ff8f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ff8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ff8f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ff8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ff8fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ff8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ff900: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ff900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff904: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ff904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ff908: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ff908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff90c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ff90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff910: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x2FF910u;
    SET_GPR_U32(ctx, 31, 0x2FF918u);
    ctx->pc = 0x2FF914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF910u;
    // 0x2ff914: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x2FF910u, 0x2FF918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF918u;
label_2ff918:
    // 0x2ff918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff91c: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x2ff91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2ff920: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2ff920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2ff924: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ff924u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ff928: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ff928u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ff92c: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x2ff92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2ff930: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2ff930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ff934: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff938: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ff938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ff93c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff93cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff940: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2ff940u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2ff944: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2ff944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ff948: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x2ff948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2ff94c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ff94cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ff950: 0x7c220040  sq          $v0, 0x40($at)
    ctx->pc = 0x2ff950u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 64), GPR_VEC(ctx, 2));
    // 0x2ff954: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff958: 0x8c22004c  lw          $v0, 0x4C($at)
    ctx->pc = 0x2ff958u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x2ff95c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2ff95cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ff960: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff964: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2ff964u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2ff968: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x2ff968u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x2ff96c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff970: 0x78220040  lq          $v0, 0x40($at)
    ctx->pc = 0x2ff970u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000040u));
    // 0x2ff974: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff978: 0x7c220050  sq          $v0, 0x50($at)
    ctx->pc = 0x2ff978u;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 2));
    // 0x2ff97c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2ff97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2ff980: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff984: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x2ff984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ff988: 0x7c220060  sq          $v0, 0x60($at)
    ctx->pc = 0x2ff988u;
    runtime->Store128(rdram, ctx, 0x70000060u, GPR_VEC(ctx, 2));
    // 0x2ff98c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff990: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x2ff990u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x2ff994: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2ff994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ff998: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff99c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2ff99cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2ff9a0: 0xac22006c  sw          $v0, 0x6C($at)
    ctx->pc = 0x2ff9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    // 0x2ff9a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff9a8: 0x78220060  lq          $v0, 0x60($at)
    ctx->pc = 0x2ff9a8u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000060u));
    // 0x2ff9ac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff9b0: 0x7c220070  sq          $v0, 0x70($at)
    ctx->pc = 0x2ff9b0u;
    runtime->Store128(rdram, ctx, 0x70000070u, GPR_VEC(ctx, 2));
    // 0x2ff9b4: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2ff9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2ff9b8: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x2ff9b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ff9bc: 0x90460005  lbu         $a2, 0x5($v0)
    ctx->pc = 0x2ff9bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x2ff9c0: 0x9048000a  lbu         $t0, 0xA($v0)
    ctx->pc = 0x2ff9c0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2ff9c4: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x2FF9C4u;
    SET_GPR_U32(ctx, 31, 0x2FF9CCu);
    ctx->pc = 0x2FF9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF9C4u;
    // 0x2ff9c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x2FF9C4u, 0x2FF9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF9CCu;
label_2ff9cc:
    // 0x2ff9cc: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x2ff9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2ff9d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2ff9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2ff9d4: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x2ff9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x2ff9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff9dc: 0x90630009  lbu         $v1, 0x9($v1)
    ctx->pc = 0x2ff9dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x2ff9e0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ff9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ff9e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ff9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ff9e8: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x2ff9e8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ff9ec: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2FF9ECu;
    SET_GPR_U32(ctx, 31, 0x2FF9F4u);
    ctx->pc = 0x2FF9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF9ECu;
    // 0x2ff9f0: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2FF9ECu, 0x2FF9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF9F4u;
label_2ff9f4:
    // 0x2ff9f4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ff9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ff9f8: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x2FF9F8u;
    SET_GPR_U32(ctx, 31, 0x2FFA00u);
    ctx->pc = 0x2FF9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF9F8u;
    // 0x2ff9fc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x2FF9F8u, 0x2FFA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA00u;
label_2ffa00:
    // 0x2ffa00: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x2ffa00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2ffa04: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2ffa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ffa08: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2ffa08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ffa0c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2FFA0Cu;
    SET_GPR_U32(ctx, 31, 0x2FFA14u);
    ctx->pc = 0x2FFA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA0Cu;
    // 0x2ffa10: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2FFA0Cu, 0x2FFA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA14u;
label_2ffa14:
    // 0x2ffa14: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ffa14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ffa18: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x2FFA18u;
    SET_GPR_U32(ctx, 31, 0x2FFA20u);
    ctx->pc = 0x2FFA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA18u;
    // 0x2ffa1c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x2FFA18u, 0x2FFA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA20u;
label_2ffa20:
    // 0x2ffa20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ffa20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa24: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x2FFA24u;
    SET_GPR_U32(ctx, 31, 0x2FFA2Cu);
    ctx->pc = 0x2FFA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA24u;
    // 0x2ffa28: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x2FFA24u, 0x2FFA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA2Cu;
label_2ffa2c:
    // 0x2ffa2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ffa2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa30: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ffa30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa34: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2ffa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2ffa38: 0x26440130  addiu       $a0, $s2, 0x130
    ctx->pc = 0x2ffa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
    // 0x2ffa3c: 0x9048000b  lbu         $t0, 0xB($v0)
    ctx->pc = 0x2ffa3cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x2ffa40: 0xc074458  jal         func_1D1160
    ctx->pc = 0x2FFA40u;
    SET_GPR_U32(ctx, 31, 0x2FFA48u);
    ctx->pc = 0x2FFA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA40u;
    // 0x2ffa44: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x2FFA40u, 0x2FFA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA48u;
label_2ffa48:
    // 0x2ffa48: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2ffa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2ffa4c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x2ffa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2ffa50: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x2ffa50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x2ffa54: 0x8e450084  lw          $a1, 0x84($s2)
    ctx->pc = 0x2ffa54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x2ffa58: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2ffa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ffa5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ffa5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa60: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x2ffa60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x2ffa64: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x2ffa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ffa68: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x2FFA68u;
    SET_GPR_U32(ctx, 31, 0x2FFA70u);
    ctx->pc = 0x2FFA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA68u;
    // 0x2ffa6c: 0x26490088  addiu       $t1, $s2, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x2FFA68u, 0x2FFA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA70u;
label_2ffa70:
    // 0x2ffa70: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x2ffa70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x2ffa74: 0x26460040  addiu       $a2, $s2, 0x40
    ctx->pc = 0x2ffa74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2ffa78: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ffa78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ffa7c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2ffa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ffa80: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x2FFA80u;
    SET_GPR_U32(ctx, 31, 0x2FFA88u);
    ctx->pc = 0x2FFA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA80u;
    // 0x2ffa84: 0x24a56a20  addiu       $a1, $a1, 0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x2FFA80u, 0x2FFA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA88u;
label_2ffa88:
    // 0x2ffa88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2ffa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ffa8c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2FFA8Cu;
    {
        const bool branch_taken_0x2ffa8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA8Cu;
        // 0x2ffa90: 0x39283  sra         $s2, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa8c) {
            ctx->pc = 0x2FFAB8u;
            goto label_2ffab8;
        }
    }
    ctx->pc = 0x2FFA94u;
    // 0x2ffa94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa98: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x2FFA98u;
    SET_GPR_U32(ctx, 31, 0x2FFAA0u);
    ctx->pc = 0x2FFA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA98u;
    // 0x2ffa9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x2FFA98u, 0x2FFAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFAA0u;
label_2ffaa0:
    // 0x2ffaa0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ffaa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ffaa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffaa8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ffaa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffaac: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x2FFAACu;
    SET_GPR_U32(ctx, 31, 0x2FFAB4u);
    ctx->pc = 0x2FFAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFAACu;
    // 0x2ffab0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x2FFAACu, 0x2FFAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFAB4u;
label_2ffab4:
    // 0x2ffab4: 0x0  nop
    ctx->pc = 0x2ffab4u;
    // NOP
label_2ffab8:
    // 0x2ffab8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ffab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ffabc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ffabcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ffac0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ffac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ffac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ffac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ffac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffacc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFACCu;
        // 0x2ffad0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFAD4u;
}
