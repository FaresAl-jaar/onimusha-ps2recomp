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

// Function: sub_003B8090
// Address: 0x3b8090 - 0x3b8254
void sub_003B8090_0x3b8090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8090_0x3b8090");
#endif

    switch (ctx->pc) {
        case 0x3b80fcu: goto label_3b80fc;
        case 0x3b8120u: goto label_3b8120;
        case 0x3b8140u: goto label_3b8140;
        case 0x3b8168u: goto label_3b8168;
        case 0x3b8178u: goto label_3b8178;
        case 0x3b81a0u: goto label_3b81a0;
        case 0x3b81e4u: goto label_3b81e4;
        case 0x3b81f4u: goto label_3b81f4;
        case 0x3b8200u: goto label_3b8200;
        case 0x3b8214u: goto label_3b8214;
        case 0x3b8220u: goto label_3b8220;
        case 0x3b8238u: goto label_3b8238;
        default: break;
    }

    ctx->pc = 0x3b8090u;

    // 0x3b8090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b8090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b8094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b8094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b8098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b8098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b809c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b809cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b80a0: 0x90832b48  lbu         $v1, 0x2B48($a0)
    ctx->pc = 0x3b80a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11080)));
    // 0x3b80a4: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3b80a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3b80a8: 0x10200065  beqz        $at, . + 4 + (0x65 << 2)
    ctx->pc = 0x3B80A8u;
    {
        const bool branch_taken_0x3b80a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B80A8u;
        // 0x3b80ac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b80a8) {
            ctx->pc = 0x3B8240u;
            goto label_3b8240;
        }
    }
    ctx->pc = 0x3B80B0u;
    // 0x3b80b0: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3b80b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3b80b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b80b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b80b8: 0x24a52c80  addiu       $a1, $a1, 0x2C80
    ctx->pc = 0x3b80b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11392));
    // 0x3b80bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b80bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b80c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b80c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b80c4: 0x600008  jr          $v1
    ctx->pc = 0x3B80C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B80D0u: goto label_3b80d0;
            case 0x3B80F0u: goto label_3b80f0;
            case 0x3B8118u: goto label_3b8118;
            case 0x3B8160u: goto label_3b8160;
            case 0x3B8190u: goto label_3b8190;
            case 0x3B8230u: goto label_3b8230;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B80C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B80CCu;
    // 0x3b80cc: 0x0  nop
    ctx->pc = 0x3b80ccu;
    // NOP
label_3b80d0:
    // 0x3b80d0: 0xa6202b46  sh          $zero, 0x2B46($s1)
    ctx->pc = 0x3b80d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11078), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b80d4: 0xa2202b4d  sb          $zero, 0x2B4D($s1)
    ctx->pc = 0x3b80d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11085), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b80d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b80d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b80dc: 0xa2202b49  sb          $zero, 0x2B49($s1)
    ctx->pc = 0x3b80dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11081), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b80e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b80e4: 0xa2202b4b  sb          $zero, 0x2B4B($s1)
    ctx->pc = 0x3b80e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11083), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b80e8: 0xa2232b4a  sb          $v1, 0x2B4A($s1)
    ctx->pc = 0x3b80e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11082), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b80ec: 0xa2222b48  sb          $v0, 0x2B48($s1)
    ctx->pc = 0x3b80ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11080), (uint8_t)GPR_U32(ctx, 2));
label_3b80f0:
    // 0x3b80f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b80f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b80f4: 0xc0ee14c  jal         func_3B8530
    ctx->pc = 0x3B80F4u;
    SET_GPR_U32(ctx, 31, 0x3B80FCu);
    ctx->pc = 0x3B80F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B80F4u;
    // 0x3b80f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8530u, 0x3B80F4u, 0x3B80FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B80FCu;
label_3b80fc:
    // 0x3b80fc: 0xa6202b46  sh          $zero, 0x2B46($s1)
    ctx->pc = 0x3b80fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11078), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b8100: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b8100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b8104: 0xa2242b82  sb          $a0, 0x2B82($s1)
    ctx->pc = 0x3b8104u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11138), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8108: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b8108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b810c: 0xa2242b49  sb          $a0, 0x2B49($s1)
    ctx->pc = 0x3b810cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8110: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x3B8110u;
    {
        const bool branch_taken_0x3b8110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8110u;
        // 0x3b8114: 0xa2232b48  sb          $v1, 0x2B48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11080), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8110) {
            ctx->pc = 0x3B8240u;
            goto label_3b8240;
        }
    }
    ctx->pc = 0x3B8118u;
label_3b8118:
    // 0x3b8118: 0xc0f1ec0  jal         func_3C7B00
    ctx->pc = 0x3B8118u;
    SET_GPR_U32(ctx, 31, 0x3B8120u);
    ctx->pc = 0x3C7B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7B00u, 0x3B8118u, 0x3B8120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8120u;
label_3b8120:
    // 0x3b8120: 0x92232b49  lbu         $v1, 0x2B49($s1)
    ctx->pc = 0x3b8120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11081)));
    // 0x3b8124: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3b8124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3b8128: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B8128u;
    {
        const bool branch_taken_0x3b8128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8128u;
        // 0x3b812c: 0x2841000f  slti        $at, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8128) {
            ctx->pc = 0x3B8150u;
            goto label_3b8150;
        }
    }
    ctx->pc = 0x3B8130u;
    // 0x3b8130: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8130u;
    {
        const bool branch_taken_0x3b8130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8130u;
        // 0x3b8134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8130) {
            ctx->pc = 0x3B8150u;
            goto label_3b8150;
        }
    }
    ctx->pc = 0x3B8138u;
    // 0x3b8138: 0xc0ee14c  jal         func_3B8530
    ctx->pc = 0x3B8138u;
    SET_GPR_U32(ctx, 31, 0x3B8140u);
    ctx->pc = 0x3B813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8138u;
    // 0x3b813c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8530u, 0x3B8138u, 0x3B8140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8140u;
label_3b8140:
    // 0x3b8140: 0x92232b49  lbu         $v1, 0x2B49($s1)
    ctx->pc = 0x3b8140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11081)));
    // 0x3b8144: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b8144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b8148: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3B8148u;
    {
        const bool branch_taken_0x3b8148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8148u;
        // 0x3b814c: 0xa2232b49  sb          $v1, 0x2B49($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8148) {
            ctx->pc = 0x3B8240u;
            goto label_3b8240;
        }
    }
    ctx->pc = 0x3B8150u;
label_3b8150:
    // 0x3b8150: 0xa2202b82  sb          $zero, 0x2B82($s1)
    ctx->pc = 0x3b8150u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11138), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8154: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b8154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b8158: 0xa2222b48  sb          $v0, 0x2B48($s1)
    ctx->pc = 0x3b8158u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11080), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b815c: 0x0  nop
    ctx->pc = 0x3b815cu;
    // NOP
label_3b8160:
    // 0x3b8160: 0xc0ee098  jal         func_3B8260
    ctx->pc = 0x3B8160u;
    SET_GPR_U32(ctx, 31, 0x3B8168u);
    ctx->pc = 0x3B8164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8160u;
    // 0x3b8164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8260u, 0x3B8160u, 0x3B8168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8168u;
label_3b8168:
    // 0x3b8168: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B8168u;
    {
        const bool branch_taken_0x3b8168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8168u;
        // 0x3b816c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8168) {
            ctx->pc = 0x3B8190u;
            goto label_3b8190;
        }
    }
    ctx->pc = 0x3B8170u;
    // 0x3b8170: 0xc0ee14c  jal         func_3B8530
    ctx->pc = 0x3B8170u;
    SET_GPR_U32(ctx, 31, 0x3B8178u);
    ctx->pc = 0x3B8174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8170u;
    // 0x3b8174: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8530u, 0x3B8170u, 0x3B8178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8178u;
label_3b8178:
    // 0x3b8178: 0x92242b4d  lbu         $a0, 0x2B4D($s1)
    ctx->pc = 0x3b8178u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11085)));
    // 0x3b817c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b817cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b8180: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b8180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b8184: 0xa2242b4d  sb          $a0, 0x2B4D($s1)
    ctx->pc = 0x3b8184u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11085), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8188: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3B8188u;
    {
        const bool branch_taken_0x3b8188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8188u;
        // 0x3b818c: 0xa2232b48  sb          $v1, 0x2B48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11080), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8188) {
            ctx->pc = 0x3B8240u;
            goto label_3b8240;
        }
    }
    ctx->pc = 0x3B8190u;
label_3b8190:
    // 0x3b8190: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3b8190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3b8194: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x3b8194u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b8198: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3B8198u;
    SET_GPR_U32(ctx, 31, 0x3B81A0u);
    ctx->pc = 0x3B819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8198u;
    // 0x3b819c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3B8198u, 0x3B81A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B81A0u;
label_3b81a0:
    // 0x3b81a0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3b81a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b81a4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3b81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3b81a8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3b81a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3b81ac: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3b81acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3b81b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b81b4: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3b81b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b81b8: 0x0  nop
    ctx->pc = 0x3b81b8u;
    // NOP
    // 0x3b81bc: 0x0  nop
    ctx->pc = 0x3b81bcu;
    // NOP
    // 0x3b81c0: 0x1010  mfhi        $v0
    ctx->pc = 0x3b81c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3b81c4: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3b81c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3b81c8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3b81c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3b81cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b81ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b81d0: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x3b81d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b81d4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x3B81D4u;
    {
        const bool branch_taken_0x3b81d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81D4u;
        // 0x3b81d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b81d4) {
            ctx->pc = 0x3B8208u;
            goto label_3b8208;
        }
    }
    ctx->pc = 0x3B81DCu;
    // 0x3b81dc: 0xc0ee374  jal         func_3B8DD0
    ctx->pc = 0x3B81DCu;
    SET_GPR_U32(ctx, 31, 0x3B81E4u);
    ctx->pc = 0x3B8DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8DD0u, 0x3B81DCu, 0x3B81E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B81E4u;
label_3b81e4:
    // 0x3b81e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B81E4u;
    {
        const bool branch_taken_0x3b81e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81E4u;
        // 0x3b81e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b81e4) {
            ctx->pc = 0x3B8208u;
            goto label_3b8208;
        }
    }
    ctx->pc = 0x3B81ECu;
    // 0x3b81ec: 0xc0ee104  jal         func_3B8410
    ctx->pc = 0x3B81ECu;
    SET_GPR_U32(ctx, 31, 0x3B81F4u);
    ctx->pc = 0x3B81F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B81ECu;
    // 0x3b81f0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8410u, 0x3B81ECu, 0x3B81F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B81F4u;
label_3b81f4:
    // 0x3b81f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b81f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b81f8: 0xc0ee14c  jal         func_3B8530
    ctx->pc = 0x3B81F8u;
    SET_GPR_U32(ctx, 31, 0x3B8200u);
    ctx->pc = 0x3B81FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B81F8u;
    // 0x3b81fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8530u, 0x3B81F8u, 0x3B8200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8200u;
label_3b8200:
    // 0x3b8200: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8200u;
    {
        const bool branch_taken_0x3b8200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8200) {
            ctx->pc = 0x3B8220u;
            goto label_3b8220;
        }
    }
    ctx->pc = 0x3B8208u;
label_3b8208:
    // 0x3b8208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b8208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b820c: 0xc0ee104  jal         func_3B8410
    ctx->pc = 0x3B820Cu;
    SET_GPR_U32(ctx, 31, 0x3B8214u);
    ctx->pc = 0x3B8210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B820Cu;
    // 0x3b8210: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8410u, 0x3B820Cu, 0x3B8214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8214u;
label_3b8214:
    // 0x3b8214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b8214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8218: 0xc0ee14c  jal         func_3B8530
    ctx->pc = 0x3B8218u;
    SET_GPR_U32(ctx, 31, 0x3B8220u);
    ctx->pc = 0x3B821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8218u;
    // 0x3b821c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8530u, 0x3B8218u, 0x3B8220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8220u;
label_3b8220:
    // 0x3b8220: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3b8220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3b8224: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8224u;
    {
        const bool branch_taken_0x3b8224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8224u;
        // 0x3b8228: 0xa2232b48  sb          $v1, 0x2B48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11080), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8224) {
            ctx->pc = 0x3B8240u;
            goto label_3b8240;
        }
    }
    ctx->pc = 0x3B822Cu;
    // 0x3b822c: 0x0  nop
    ctx->pc = 0x3b822cu;
    // NOP
label_3b8230:
    // 0x3b8230: 0xc0ee14c  jal         func_3B8530
    ctx->pc = 0x3B8230u;
    SET_GPR_U32(ctx, 31, 0x3B8238u);
    ctx->pc = 0x3B8234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8230u;
    // 0x3b8234: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8530u, 0x3B8230u, 0x3B8238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8238u;
label_3b8238:
    // 0x3b8238: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b8238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b823c: 0xa2232b48  sb          $v1, 0x2B48($s1)
    ctx->pc = 0x3b823cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11080), (uint8_t)GPR_U32(ctx, 3));
label_3b8240:
    // 0x3b8240: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b8240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b8244: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b8244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b8248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b8248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b824c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B824Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B824Cu;
        // 0x3b8250: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B824Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8254u;
}
