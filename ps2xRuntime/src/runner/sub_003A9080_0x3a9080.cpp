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

// Function: sub_003A9080
// Address: 0x3a9080 - 0x3a91f0
void sub_003A9080_0x3a9080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9080_0x3a9080");
#endif

    switch (ctx->pc) {
        case 0x3a90d4u: goto label_3a90d4;
        case 0x3a90e8u: goto label_3a90e8;
        case 0x3a9100u: goto label_3a9100;
        case 0x3a911cu: goto label_3a911c;
        case 0x3a9124u: goto label_3a9124;
        case 0x3a9150u: goto label_3a9150;
        case 0x3a9164u: goto label_3a9164;
        case 0x3a9198u: goto label_3a9198;
        default: break;
    }

    ctx->pc = 0x3a9080u;

    // 0x3a9080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a9080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a9084: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a9084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a9088: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a9088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a908c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a908cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a9090: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x3a9090u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3a9094: 0x10a30044  beq         $a1, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3A9094u;
    {
        const bool branch_taken_0x3a9094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9094u;
        // 0x3a9098: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9094) {
            ctx->pc = 0x3A91A8u;
            goto label_3a91a8;
        }
    }
    ctx->pc = 0x3A909Cu;
    // 0x3a909c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a909cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a90a0: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3A90A0u;
    {
        const bool branch_taken_0x3a90a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90A0u;
        // 0x3a90a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a90a0) {
            ctx->pc = 0x3A9130u;
            goto label_3a9130;
        }
    }
    ctx->pc = 0x3A90A8u;
    // 0x3a90a8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A90A8u;
    {
        const bool branch_taken_0x3a90a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a90a8) {
            ctx->pc = 0x3A90F8u;
            goto label_3a90f8;
        }
    }
    ctx->pc = 0x3A90B0u;
    // 0x3a90b0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A90B0u;
    {
        const bool branch_taken_0x3a90b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a90b0) {
            ctx->pc = 0x3A90C0u;
            goto label_3a90c0;
        }
    }
    ctx->pc = 0x3A90B8u;
    // 0x3a90b8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3A90B8u;
    {
        const bool branch_taken_0x3a90b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a90b8) {
            ctx->pc = 0x3A91E0u;
            goto label_3a91e0;
        }
    }
    ctx->pc = 0x3A90C0u;
label_3a90c0:
    // 0x3a90c0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a90c4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a90c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a90c8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3a90c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a90cc: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A90CCu;
    SET_GPR_U32(ctx, 31, 0x3A90D4u);
    ctx->pc = 0x3A90D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A90CCu;
    // 0x3a90d0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A90CCu, 0x3A90D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A90D4u;
label_3a90d4:
    // 0x3a90d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a90d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a90d8: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x3a90d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x3a90dc: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x3a90dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x3a90e0: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A90E0u;
    SET_GPR_U32(ctx, 31, 0x3A90E8u);
    ctx->pc = 0x3A90E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A90E0u;
    // 0x3a90e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A90E0u, 0x3A90E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A90E8u;
label_3a90e8:
    // 0x3a90e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a90e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a90ec: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3A90ECu;
    {
        const bool branch_taken_0x3a90ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90ECu;
        // 0x3a90f0: 0xa6030012  sh          $v1, 0x12($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a90ec) {
            ctx->pc = 0x3A91E0u;
            goto label_3a91e0;
        }
    }
    ctx->pc = 0x3A90F4u;
    // 0x3a90f4: 0x0  nop
    ctx->pc = 0x3a90f4u;
    // NOP
label_3a90f8:
    // 0x3a90f8: 0xc0eac80  jal         func_3AB200
    ctx->pc = 0x3A90F8u;
    SET_GPR_U32(ctx, 31, 0x3A9100u);
    ctx->pc = 0x3AB200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB200u, 0x3A90F8u, 0x3A9100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9100u;
label_3a9100:
    // 0x3a9100: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3A9100u;
    {
        const bool branch_taken_0x3a9100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9100) {
            ctx->pc = 0x3A91E0u;
            goto label_3a91e0;
        }
    }
    ctx->pc = 0x3A9108u;
    // 0x3a9108: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3a9108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a910c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a910cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9110: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a9110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a9114: 0xc0eaef8  jal         func_3ABBE0
    ctx->pc = 0x3A9114u;
    SET_GPR_U32(ctx, 31, 0x3A911Cu);
    ctx->pc = 0x3A9118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9114u;
    // 0x3a9118: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABBE0u, 0x3A9114u, 0x3A911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A911Cu;
label_3a911c:
    // 0x3a911c: 0xc0eaf78  jal         func_3ABDE0
    ctx->pc = 0x3A911Cu;
    SET_GPR_U32(ctx, 31, 0x3A9124u);
    ctx->pc = 0x3A9120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A911Cu;
    // 0x3a9120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABDE0u, 0x3A911Cu, 0x3A9124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9124u;
label_3a9124:
    // 0x3a9124: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3A9124u;
    {
        const bool branch_taken_0x3a9124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9124) {
            ctx->pc = 0x3A91E0u;
            goto label_3a91e0;
        }
    }
    ctx->pc = 0x3A912Cu;
    // 0x3a912c: 0x0  nop
    ctx->pc = 0x3a912cu;
    // NOP
label_3a9130:
    // 0x3a9130: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a9130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a9134: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3A9134u;
    {
        const bool branch_taken_0x3a9134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9134) {
            ctx->pc = 0x3A91E0u;
            goto label_3a91e0;
        }
    }
    ctx->pc = 0x3A913Cu;
    // 0x3a913c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a9140: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a9140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a9144: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a9144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a9148: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A9148u;
    SET_GPR_U32(ctx, 31, 0x3A9150u);
    ctx->pc = 0x3A914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9148u;
    // 0x3a914c: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A9148u, 0x3A9150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9150u;
label_3a9150:
    // 0x3a9150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9154: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x3a9154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x3a9158: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a9158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a915c: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A915Cu;
    SET_GPR_U32(ctx, 31, 0x3A9164u);
    ctx->pc = 0x3A9160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A915Cu;
    // 0x3a9160: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A915Cu, 0x3A9164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9164u;
label_3a9164:
    // 0x3a9164: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a9164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a9168: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a9168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a916c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a9170: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a9170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a9174: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x3a9174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x3a9178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a9178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a917c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a917cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a9180: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a9180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9184: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a9184u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9188: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a9188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a918c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a918cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9190: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A9190u;
    SET_GPR_U32(ctx, 31, 0x3A9198u);
    ctx->pc = 0x3A9194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9190u;
    // 0x3a9194: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A9190u, 0x3A9198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9198u;
label_3a9198:
    // 0x3a9198: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x3a9198u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a919c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a919cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a91a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A91A0u;
    {
        const bool branch_taken_0x3a91a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A91A0u;
        // 0x3a91a4: 0xa2030052  sb          $v1, 0x52($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 82), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a91a0) {
            ctx->pc = 0x3A91E0u;
            goto label_3a91e0;
        }
    }
    ctx->pc = 0x3A91A8u;
label_3a91a8:
    // 0x3a91a8: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a91a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a91ac: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3A91ACu;
    {
        const bool branch_taken_0x3a91ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a91ac) {
            ctx->pc = 0x3A91E0u;
            goto label_3a91e0;
        }
    }
    ctx->pc = 0x3A91B4u;
    // 0x3a91b4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a91b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a91b8: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a91b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a91bc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a91bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a91c0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a91c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a91c4: 0x82040058  lb          $a0, 0x58($s0)
    ctx->pc = 0x3a91c4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3a91c8: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a91c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a91cc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A91CCu;
    {
        const bool branch_taken_0x3a91cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a91cc) {
            ctx->pc = 0x3A91E0u;
            goto label_3a91e0;
        }
    }
    ctx->pc = 0x3A91D4u;
    // 0x3a91d4: 0xa2000059  sb          $zero, 0x59($s0)
    ctx->pc = 0x3a91d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a91d8: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a91d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a91dc: 0xa2030058  sb          $v1, 0x58($s0)
    ctx->pc = 0x3a91dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
label_3a91e0:
    // 0x3a91e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a91e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a91e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a91e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a91e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A91E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A91ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A91E8u;
        // 0x3a91ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A91E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A91F0u;
}
