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

// Function: sub_00331FD0
// Address: 0x331fd0 - 0x332374
void sub_00331FD0_0x331fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331FD0_0x331fd0");
#endif

    switch (ctx->pc) {
        case 0x33203cu: goto label_33203c;
        case 0x332078u: goto label_332078;
        case 0x3320e8u: goto label_3320e8;
        case 0x332120u: goto label_332120;
        case 0x332130u: goto label_332130;
        case 0x3321ccu: goto label_3321cc;
        case 0x332218u: goto label_332218;
        case 0x332320u: goto label_332320;
        case 0x332344u: goto label_332344;
        default: break;
    }

    ctx->pc = 0x331fd0u;

    // 0x331fd0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x331fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x331fd4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x331fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x331fd8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x331fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x331fdc: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x331fdcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x331fe0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x331fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x331fe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x331fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331fe8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x331fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x331fec: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x331fecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331ff0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x331ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x331ff4: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x331ff4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x331ff8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x331ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x331ffc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x331ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x332000: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x332000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x332004: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x332004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x332008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x332008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33200c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33200cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x332010: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x332010u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x332014: 0x9547000c  lhu         $a3, 0xC($t2)
    ctx->pc = 0x332014u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x332018: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x332018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x33201c: 0x9546000a  lhu         $a2, 0xA($t2)
    ctx->pc = 0x33201cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 10)));
    // 0x332020: 0x24846a0c  addiu       $a0, $a0, 0x6A0C
    ctx->pc = 0x332020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27148));
    // 0x332024: 0x95430012  lhu         $v1, 0x12($t2)
    ctx->pc = 0x332024u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 18)));
    // 0x332028: 0x95420014  lhu         $v0, 0x14($t2)
    ctx->pc = 0x332028u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x33202c: 0x24f0ffe3  addiu       $s0, $a3, -0x1D
    ctx->pc = 0x33202cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967267));
    // 0x332030: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x332030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x332034: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x332034u;
    SET_GPR_U32(ctx, 31, 0x33203Cu);
    ctx->pc = 0x332038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332034u;
    // 0x332038: 0x2023821  addu        $a3, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x332034u, 0x33203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33203Cu;
label_33203c:
    // 0x33203c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x33203cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x332040: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x332040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x332044: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x332044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332048: 0x24841400  addiu       $a0, $a0, 0x1400
    ctx->pc = 0x332048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    // 0x33204c: 0x3407fff5  ori         $a3, $zero, 0xFFF5
    ctx->pc = 0x33204cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x332050: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x332050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x332054: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x332054u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x332058: 0x2445fffb  addiu       $a1, $v0, -0x5
    ctx->pc = 0x332058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x33205c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33205cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332060: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332064: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x332064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x332068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33206c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33206cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x332070: 0xc0dc6b4  jal         func_371AD0
    ctx->pc = 0x332070u;
    SET_GPR_U32(ctx, 31, 0x332078u);
    ctx->pc = 0x332074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332070u;
    // 0x332074: 0x24480008  addiu       $t0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371AD0u, 0x332070u, 0x332078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332078u;
label_332078:
    // 0x332078: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x332078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x33207c: 0x3406fff7  ori         $a2, $zero, 0xFFF7
    ctx->pc = 0x33207cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65527);
    // 0x332080: 0x87c71c7a  lh          $a3, 0x1C7A($fp)
    ctx->pc = 0x332080u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 7290)));
    // 0x332084: 0x87c41c7c  lh          $a0, 0x1C7C($fp)
    ctx->pc = 0x332084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 7292)));
    // 0x332088: 0x87c31c80  lh          $v1, 0x1C80($fp)
    ctx->pc = 0x332088u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 7296)));
    // 0x33208c: 0x8fc91c8c  lw          $t1, 0x1C8C($fp)
    ctx->pc = 0x33208cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 7308)));
    // 0x332090: 0x9448000a  lhu         $t0, 0xA($v0)
    ctx->pc = 0x332090u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x332094: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x332094u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x332098: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x332098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x33209c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x33209cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3320a0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3320a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3320a4: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x3320a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3320a8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3320a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3320ac: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3320acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3320b0: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x3320b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3320b4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3320b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3320b8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3320b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3320bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3320bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3320c0: 0x1043821  addu        $a3, $t0, $a0
    ctx->pc = 0x3320c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x3320c4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3320c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3320c8: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x3320c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3320cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3320ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3320d0: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x3320d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x3320d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3320d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3320d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3320d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3320dc: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x3320dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3320e0: 0xc09c488  jal         func_271220
    ctx->pc = 0x3320E0u;
    SET_GPR_U32(ctx, 31, 0x3320E8u);
    ctx->pc = 0x3320E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3320E0u;
    // 0x3320e4: 0x24480014  addiu       $t0, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271220u, 0x3320E0u, 0x3320E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3320E8u;
label_3320e8:
    // 0x3320e8: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x3320e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3320ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3320ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3320f0: 0x87c31c80  lh          $v1, 0x1C80($fp)
    ctx->pc = 0x3320f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 7296)));
    // 0x3320f4: 0x94a4000e  lhu         $a0, 0xE($a1)
    ctx->pc = 0x3320f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x3320f8: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x3320f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3320fc: 0x64a018  mult        $s4, $v1, $a0
    ctx->pc = 0x3320fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x332100: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x332100u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x332104: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x332104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x332108: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x332108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x33210c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33210cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332110: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x332110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x332114: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x332114u;
    {
        const bool branch_taken_0x332114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x332118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332114u;
        // 0x332118: 0x24730028  addiu       $s3, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332114) {
            ctx->pc = 0x332258u;
            goto label_332258;
        }
    }
    ctx->pc = 0x33211Cu;
    // 0x33211c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x33211cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_332120:
    // 0x332120: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x332120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x332124: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x332124u;
    {
        const bool branch_taken_0x332124 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x332128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332124u;
        // 0x332128: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332124) {
            ctx->pc = 0x332238u;
            goto label_332238;
        }
    }
    ctx->pc = 0x33212Cu;
    // 0x33212c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x33212cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_332130:
    // 0x332130: 0x94a2000a  lhu         $v0, 0xA($a1)
    ctx->pc = 0x332130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x332134: 0x87c30024  lh          $v1, 0x24($fp)
    ctx->pc = 0x332134u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x332138: 0x94a4000c  lhu         $a0, 0xC($a1)
    ctx->pc = 0x332138u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x33213c: 0x57b021  addu        $s6, $v0, $s7
    ctx->pc = 0x33213cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x332140: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x332140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x332144: 0x283082a  slt         $at, $s4, $v1
    ctx->pc = 0x332144u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x332148: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x332148u;
    {
        const bool branch_taken_0x332148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332148u;
        // 0x33214c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332148) {
            ctx->pc = 0x3321D8u;
            goto label_3321d8;
        }
    }
    ctx->pc = 0x332150u;
    // 0x332150: 0x3c15004e  lui         $s5, 0x4E
    ctx->pc = 0x332150u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)78 << 16));
    // 0x332154: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x332154u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x332158: 0x26b56b98  addiu       $s5, $s5, 0x6B98
    ctx->pc = 0x332158u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 27544));
    // 0x33215c: 0x86a30008  lh          $v1, 0x8($s5)
    ctx->pc = 0x33215cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6BA0u));
    // 0x332160: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x332160u;
    {
        const bool branch_taken_0x332160 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x332164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332160u;
        // 0x332164: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332160) {
            ctx->pc = 0x332170u;
            goto label_332170;
        }
    }
    ctx->pc = 0x332168u;
    // 0x332168: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x332168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33216c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x33216cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_332170:
    // 0x332170: 0x86a3000a  lh          $v1, 0xA($s5)
    ctx->pc = 0x332170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x332174: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x332174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x332178: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x332178u;
    {
        const bool branch_taken_0x332178 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x33217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332178u;
        // 0x33217c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332178) {
            ctx->pc = 0x332188u;
            goto label_332188;
        }
    }
    ctx->pc = 0x332180u;
    // 0x332180: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x332180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x332184: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x332184u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_332188:
    // 0x332188: 0x92690008  lbu         $t1, 0x8($s3)
    ctx->pc = 0x332188u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x33218c: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x33218cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
    // 0x332190: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x332190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x332194: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x332194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x332198: 0x24e79a78  addiu       $a3, $a3, -0x6588
    ctx->pc = 0x332198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941304));
    // 0x33219c: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x33219cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3321a0: 0x24630960  addiu       $v1, $v1, 0x960
    ctx->pc = 0x3321a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x3321a4: 0x95480004  lhu         $t0, 0x4($t2)
    ctx->pc = 0x3321a4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x3321a8: 0x3129000f  andi        $t1, $t1, 0xF
    ctx->pc = 0x3321a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x3321ac: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x3321acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3321b0: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x3321b0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3321b4: 0x30490001  andi        $t1, $v0, 0x1
    ctx->pc = 0x3321b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3321b8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x3321b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3321bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3321bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3321c0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3321c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3321c4: 0xc0ed8f8  jal         func_3B63E0
    ctx->pc = 0x3321C4u;
    SET_GPR_U32(ctx, 31, 0x3321CCu);
    ctx->pc = 0x3321C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3321C4u;
    // 0x3321c8: 0x3406fff5  ori         $a2, $zero, 0xFFF5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63E0u, 0x3321C4u, 0x3321CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3321CCu;
label_3321cc:
    // 0x3321cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3321CCu;
    {
        const bool branch_taken_0x3321cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3321D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321CCu;
        // 0x3321d0: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321cc) {
            ctx->pc = 0x3321F8u;
            goto label_3321f8;
        }
    }
    ctx->pc = 0x3321D4u;
    // 0x3321d4: 0x0  nop
    ctx->pc = 0x3321d4u;
    // NOP
label_3321d8:
    // 0x3321d8: 0x2a810226  slti        $at, $s4, 0x226
    ctx->pc = 0x3321d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)550) ? 1 : 0);
    // 0x3321dc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3321DCu;
    {
        const bool branch_taken_0x3321dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3321E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321DCu;
        // 0x3321e0: 0x3c15004e  lui         $s5, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321dc) {
            ctx->pc = 0x3321F0u;
            goto label_3321f0;
        }
    }
    ctx->pc = 0x3321E4u;
    // 0x3321e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3321E4u;
    {
        const bool branch_taken_0x3321e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3321E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321E4u;
        // 0x3321e8: 0x26b56ba4  addiu       $s5, $s5, 0x6BA4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 27556));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321e4) {
            ctx->pc = 0x3321F8u;
            goto label_3321f8;
        }
    }
    ctx->pc = 0x3321ECu;
    // 0x3321ec: 0x0  nop
    ctx->pc = 0x3321ecu;
    // NOP
label_3321f0:
    // 0x3321f0: 0x3c15004e  lui         $s5, 0x4E
    ctx->pc = 0x3321f0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)78 << 16));
    // 0x3321f4: 0x26b56b98  addiu       $s5, $s5, 0x6B98
    ctx->pc = 0x3321f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 27544));
label_3321f8:
    // 0x3321f8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3321f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3321fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3321fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332200: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x332200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332204: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x332204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x332208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33220c: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x33220cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x332210: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x332210u;
    SET_GPR_U32(ctx, 31, 0x332218u);
    ctx->pc = 0x332214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332210u;
    // 0x332214: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x332210u, 0x332218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332218u;
label_332218:
    // 0x332218: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x332218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x33221c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33221cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x332220: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x332220u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x332224: 0x94a4000e  lhu         $a0, 0xE($a1)
    ctx->pc = 0x332224u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x332228: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x332228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33222c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x33222Cu;
    {
        const bool branch_taken_0x33222c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x332230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33222Cu;
        // 0x332230: 0x26f70016  addiu       $s7, $s7, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33222c) {
            ctx->pc = 0x332130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332130;
        }
    }
    ctx->pc = 0x332234u;
    // 0x332234: 0x0  nop
    ctx->pc = 0x332234u;
    // NOP
label_332238:
    // 0x332238: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x332238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33223c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33223cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x332240: 0x24420016  addiu       $v0, $v0, 0x16
    ctx->pc = 0x332240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
    // 0x332244: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x332244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x332248: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x332248u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x33224c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x33224cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x332250: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x332250u;
    {
        const bool branch_taken_0x332250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x332250) {
            ctx->pc = 0x332120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332120;
        }
    }
    ctx->pc = 0x332258u;
label_332258:
    // 0x332258: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x332258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x33225c: 0x94a8000a  lhu         $t0, 0xA($a1)
    ctx->pc = 0x33225cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x332260: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x332260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
    // 0x332264: 0x842b7004  lh          $t3, 0x7004($at)
    ctx->pc = 0x332264u;
    SET_GPR_S32(ctx, 11, (int16_t)FAST_READ16(0x4E7004u));
    // 0x332268: 0x34ca8080  ori         $t2, $a2, 0x8080
    ctx->pc = 0x332268u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x33226c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x33226cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x332270: 0x27a300ba  addiu       $v1, $sp, 0xBA
    ctx->pc = 0x332270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 186));
    // 0x332274: 0x27b000bc  addiu       $s0, $sp, 0xBC
    ctx->pc = 0x332274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x332278: 0x24847000  addiu       $a0, $a0, 0x7000
    ctx->pc = 0x332278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x33227c: 0x27a500be  addiu       $a1, $sp, 0xBE
    ctx->pc = 0x33227cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 190));
    // 0x332280: 0x10b3023  subu        $a2, $t0, $t3
    ctx->pc = 0x332280u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x332284: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x332284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x332288: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x332288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x33228c: 0x84227008  lh          $v0, 0x7008($at)
    ctx->pc = 0x33228cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E7008u));
    // 0x332290: 0xa7a600b8  sh          $a2, 0xB8($sp)
    ctx->pc = 0x332290u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 184), (uint16_t)GPR_U32(ctx, 6));
    // 0x332294: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x332294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x332298: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x332298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x33229c: 0x94c6000c  lhu         $a2, 0xC($a2)
    ctx->pc = 0x33229cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3322a0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x3322a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3322a4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3322a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3322a8: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x3322a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3322ac: 0x8fc80008  lw          $t0, 0x8($fp)
    ctx->pc = 0x3322acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3322b0: 0x84267006  lh          $a2, 0x7006($at)
    ctx->pc = 0x3322b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 28678)));
    // 0x3322b4: 0x9509000e  lhu         $t1, 0xE($t0)
    ctx->pc = 0x3322b4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
    // 0x3322b8: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x3322b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x3322bc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x3322bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x3322c0: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x3322c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3322c4: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x3322c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x3322c8: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3322c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3322cc: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x3322ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x3322d0: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3322d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3322d4: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x3322d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3322d8: 0xa6060000  sh          $a2, 0x0($s0)
    ctx->pc = 0x3322d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3322dc: 0x8fc80008  lw          $t0, 0x8($fp)
    ctx->pc = 0x3322dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3322e0: 0x8426700a  lh          $a2, 0x700A($at)
    ctx->pc = 0x3322e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 28682)));
    // 0x3322e4: 0x95080010  lhu         $t0, 0x10($t0)
    ctx->pc = 0x3322e4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x3322e8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3322e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3322ec: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x3322ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3322f0: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3322f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3322f4: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3322f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3322f8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3322f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3322fc: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3322fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x332300: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x332300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x332304: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x332304u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x332308: 0x94a90000  lhu         $t1, 0x0($a1)
    ctx->pc = 0x332308u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33230c: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x33230cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x332310: 0x96080000  lhu         $t0, 0x0($s0)
    ctx->pc = 0x332310u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332314: 0x97a500b8  lhu         $a1, 0xB8($sp)
    ctx->pc = 0x332314u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x332318: 0xc09c720  jal         func_271C80
    ctx->pc = 0x332318u;
    SET_GPR_U32(ctx, 31, 0x332320u);
    ctx->pc = 0x33231Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332318u;
    // 0x33231c: 0x3407fff5  ori         $a3, $zero, 0xFFF5 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271C80u, 0x332318u, 0x332320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332320u;
label_332320:
    // 0x332320: 0x240201e9  addiu       $v0, $zero, 0x1E9
    ctx->pc = 0x332320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 489));
    // 0x332324: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x332324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x332328: 0xa7a200b8  sh          $v0, 0xB8($sp)
    ctx->pc = 0x332328u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 184), (uint16_t)GPR_U32(ctx, 2));
    // 0x33232c: 0x27c61c7c  addiu       $a2, $fp, 0x1C7C
    ctx->pc = 0x33232cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 7292));
    // 0x332330: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x332330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x332334: 0x24841400  addiu       $a0, $a0, 0x1400
    ctx->pc = 0x332334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    // 0x332338: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x332338u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x33233c: 0xc0dc8a0  jal         func_372280
    ctx->pc = 0x33233Cu;
    SET_GPR_U32(ctx, 31, 0x332344u);
    ctx->pc = 0x332340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33233Cu;
    // 0x332340: 0x27a500b8  addiu       $a1, $sp, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372280u, 0x33233Cu, 0x332344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332344u;
label_332344:
    // 0x332344: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x332344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x332348: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x332348u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33234c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x33234cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x332350: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x332350u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x332354: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x332354u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x332358: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x332358u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33235c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33235cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332360: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x332360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x332364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x332368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33236c: 0x3e00008  jr          $ra
    ctx->pc = 0x33236Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33236Cu;
        // 0x332370: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33236Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332374u;
}
