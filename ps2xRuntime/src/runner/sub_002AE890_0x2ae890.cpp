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

// Function: sub_002AE890
// Address: 0x2ae890 - 0x2aec54
void sub_002AE890_0x2ae890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE890_0x2ae890");
#endif

    switch (ctx->pc) {
        case 0x2ae8bcu: goto label_2ae8bc;
        case 0x2ae8d0u: goto label_2ae8d0;
        case 0x2ae8dcu: goto label_2ae8dc;
        case 0x2ae8ecu: goto label_2ae8ec;
        case 0x2ae8fcu: goto label_2ae8fc;
        case 0x2ae910u: goto label_2ae910;
        case 0x2ae920u: goto label_2ae920;
        case 0x2ae940u: goto label_2ae940;
        case 0x2ae950u: goto label_2ae950;
        case 0x2ae960u: goto label_2ae960;
        case 0x2ae970u: goto label_2ae970;
        case 0x2ae988u: goto label_2ae988;
        case 0x2ae99cu: goto label_2ae99c;
        case 0x2ae9a0u: goto label_2ae9a0;
        case 0x2ae9b0u: goto label_2ae9b0;
        case 0x2ae9dcu: goto label_2ae9dc;
        case 0x2ae9f8u: goto label_2ae9f8;
        case 0x2aeac0u: goto label_2aeac0;
        case 0x2aeae4u: goto label_2aeae4;
        case 0x2aeb5cu: goto label_2aeb5c;
        case 0x2aeb68u: goto label_2aeb68;
        case 0x2aeb70u: goto label_2aeb70;
        case 0x2aeb80u: goto label_2aeb80;
        case 0x2aeb88u: goto label_2aeb88;
        case 0x2aebc8u: goto label_2aebc8;
        case 0x2aebd8u: goto label_2aebd8;
        case 0x2aebe0u: goto label_2aebe0;
        case 0x2aebe8u: goto label_2aebe8;
        case 0x2aebf0u: goto label_2aebf0;
        case 0x2aec00u: goto label_2aec00;
        case 0x2aec08u: goto label_2aec08;
        case 0x2aec20u: goto label_2aec20;
        case 0x2aec28u: goto label_2aec28;
        case 0x2aec34u: goto label_2aec34;
        default: break;
    }

    ctx->pc = 0x2ae890u;

    // 0x2ae890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ae890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ae894: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2ae894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x2ae898: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ae898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ae89c: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x2ae89cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ae8a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ae8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ae8a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ae8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae8a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ae8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ae8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ae8b0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2ae8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2ae8b4: 0xc05e8d0  jal         func_17A340
    ctx->pc = 0x2AE8B4u;
    SET_GPR_U32(ctx, 31, 0x2AE8BCu);
    ctx->pc = 0x2AE8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE8B4u;
    // 0x2ae8b8: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A340u, 0x2AE8B4u, 0x2AE8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE8BCu;
label_2ae8bc:
    // 0x2ae8bc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2ae8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2ae8c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae8c4: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x2ae8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x2ae8c8: 0xc0ce590  jal         func_339640
    ctx->pc = 0x2AE8C8u;
    SET_GPR_U32(ctx, 31, 0x2AE8D0u);
    ctx->pc = 0x2AE8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE8C8u;
    // 0x2ae8cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339640u, 0x2AE8C8u, 0x2AE8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE8D0u;
label_2ae8d0:
    // 0x2ae8d0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2ae8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2ae8d4: 0xc0ce6a4  jal         func_339A90
    ctx->pc = 0x2AE8D4u;
    SET_GPR_U32(ctx, 31, 0x2AE8DCu);
    ctx->pc = 0x2AE8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE8D4u;
    // 0x2ae8d8: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339A90u, 0x2AE8D4u, 0x2AE8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE8DCu;
label_2ae8dc:
    // 0x2ae8dc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ae8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2ae8e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ae8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae8e4: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AE8E4u;
    SET_GPR_U32(ctx, 31, 0x2AE8ECu);
    ctx->pc = 0x2AE8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE8E4u;
    // 0x2ae8e8: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AE8E4u, 0x2AE8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE8ECu;
label_2ae8ec:
    // 0x2ae8ec: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ae8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2ae8f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ae8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae8f4: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AE8F4u;
    SET_GPR_U32(ctx, 31, 0x2AE8FCu);
    ctx->pc = 0x2AE8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE8F4u;
    // 0x2ae8f8: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AE8F4u, 0x2AE8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE8FCu;
label_2ae8fc:
    // 0x2ae8fc: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2ae8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2ae900: 0x8c224050  lw          $v0, 0x4050($at)
    ctx->pc = 0x2ae900u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x914050u));
    // 0x2ae904: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AE904u;
    {
        const bool branch_taken_0x2ae904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae904) {
            ctx->pc = 0x2AE930u;
            goto label_2ae930;
        }
    }
    ctx->pc = 0x2AE90Cu;
    // 0x2ae90c: 0x0  nop
    ctx->pc = 0x2ae90cu;
    // NOP
label_2ae910:
    // 0x2ae910: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ae910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2ae914: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2ae914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x2ae918: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AE918u;
    SET_GPR_U32(ctx, 31, 0x2AE920u);
    ctx->pc = 0x2AE91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE918u;
    // 0x2ae91c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AE918u, 0x2AE920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE920u;
label_2ae920:
    // 0x2ae920: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2ae920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2ae924: 0x8c224050  lw          $v0, 0x4050($at)
    ctx->pc = 0x2ae924u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x914050u));
    // 0x2ae928: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AE928u;
    {
        const bool branch_taken_0x2ae928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae928) {
            ctx->pc = 0x2AE910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae910;
        }
    }
    ctx->pc = 0x2AE930u;
label_2ae930:
    // 0x2ae930: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ae930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2ae934: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2ae934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x2ae938: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AE938u;
    SET_GPR_U32(ctx, 31, 0x2AE940u);
    ctx->pc = 0x2AE93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE938u;
    // 0x2ae93c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AE938u, 0x2AE940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE940u;
label_2ae940:
    // 0x2ae940: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ae940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2ae944: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ae944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae948: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AE948u;
    SET_GPR_U32(ctx, 31, 0x2AE950u);
    ctx->pc = 0x2AE94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE948u;
    // 0x2ae94c: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AE948u, 0x2AE950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE950u;
label_2ae950:
    // 0x2ae950: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ae950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2ae954: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ae954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae958: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AE958u;
    SET_GPR_U32(ctx, 31, 0x2AE960u);
    ctx->pc = 0x2AE95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE958u;
    // 0x2ae95c: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AE958u, 0x2AE960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE960u;
label_2ae960:
    // 0x2ae960: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ae960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2ae964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ae964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae968: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AE968u;
    SET_GPR_U32(ctx, 31, 0x2AE970u);
    ctx->pc = 0x2AE96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE968u;
    // 0x2ae96c: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AE968u, 0x2AE970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE970u;
label_2ae970:
    // 0x2ae970: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ae970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ae974: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ae974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ae978: 0x8c23cee4  lw          $v1, -0x311C($at)
    ctx->pc = 0x2ae978u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEE4u));
    // 0x2ae97c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ae97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ae980: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AE980u;
    {
        const bool branch_taken_0x2ae980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE980u;
        // 0x2ae984: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae980) {
            ctx->pc = 0x2AE9D0u;
            goto label_2ae9d0;
        }
    }
    ctx->pc = 0x2AE988u;
label_2ae988:
    // 0x2ae988: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2ae988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2ae98c: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x2ae98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x2ae990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ae990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae994: 0xc0ce3bc  jal         func_338EF0
    ctx->pc = 0x2AE994u;
    SET_GPR_U32(ctx, 31, 0x2AE99Cu);
    ctx->pc = 0x2AE998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE994u;
    // 0x2ae998: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338EF0u, 0x2AE994u, 0x2AE99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE99Cu;
label_2ae99c:
    // 0x2ae99c: 0x0  nop
    ctx->pc = 0x2ae99cu;
    // NOP
label_2ae9a0:
    // 0x2ae9a0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2ae9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2ae9a4: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x2ae9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x2ae9a8: 0xc0ce2fc  jal         func_338BF0
    ctx->pc = 0x2AE9A8u;
    SET_GPR_U32(ctx, 31, 0x2AE9B0u);
    ctx->pc = 0x2AE9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE9A8u;
    // 0x2ae9ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338BF0u, 0x2AE9A8u, 0x2AE9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE9B0u;
label_2ae9b0:
    // 0x2ae9b0: 0x0  nop
    ctx->pc = 0x2ae9b0u;
    // NOP
    // 0x2ae9b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AE9B4u;
    {
        const bool branch_taken_0x2ae9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae9b4) {
            ctx->pc = 0x2AE9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae9a0;
        }
    }
    ctx->pc = 0x2AE9BCu;
    // 0x2ae9bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ae9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ae9c0: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2ae9c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ae9c4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2AE9C4u;
    {
        const bool branch_taken_0x2ae9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae9c4) {
            ctx->pc = 0x2AE988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae988;
        }
    }
    ctx->pc = 0x2AE9CCu;
    // 0x2ae9cc: 0x0  nop
    ctx->pc = 0x2ae9ccu;
    // NOP
label_2ae9d0:
    // 0x2ae9d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae9d4: 0xc0ac010  jal         func_2B0040
    ctx->pc = 0x2AE9D4u;
    SET_GPR_U32(ctx, 31, 0x2AE9DCu);
    ctx->pc = 0x2AE9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE9D4u;
    // 0x2ae9d8: 0xaf808994  sw          $zero, -0x766C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0040u, 0x2AE9D4u, 0x2AE9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE9DCu;
label_2ae9dc:
    // 0x2ae9dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE9DCu;
    {
        const bool branch_taken_0x2ae9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae9dc) {
            ctx->pc = 0x2AE9F0u;
            goto label_2ae9f0;
        }
    }
    ctx->pc = 0x2AE9E4u;
    // 0x2ae9e4: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x2AE9E4u;
    {
        const bool branch_taken_0x2ae9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE9E4u;
        // 0x2ae9e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae9e4) {
            ctx->pc = 0x2AEC40u;
            goto label_2aec40;
        }
    }
    ctx->pc = 0x2AE9ECu;
    // 0x2ae9ec: 0x0  nop
    ctx->pc = 0x2ae9ecu;
    // NOP
label_2ae9f0:
    // 0x2ae9f0: 0xc0ab8f0  jal         func_2AE3C0
    ctx->pc = 0x2AE9F0u;
    SET_GPR_U32(ctx, 31, 0x2AE9F8u);
    ctx->pc = 0x2AE9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE9F0u;
    // 0x2ae9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE3C0u, 0x2AE9F0u, 0x2AE9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE9F8u;
label_2ae9f8:
    // 0x2ae9f8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ae9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ae9fc: 0x1180c0  sll         $s0, $s1, 3
    ctx->pc = 0x2ae9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2aea00: 0x24424b56  addiu       $v0, $v0, 0x4B56
    ctx->pc = 0x2aea00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19286));
    // 0x2aea04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2aea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2aea08: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x2aea08u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aea0c: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x2aea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x2aea10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AEA10u;
    {
        const bool branch_taken_0x2aea10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA10u;
        // 0x2aea14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea10) {
            ctx->pc = 0x2AEA20u;
            goto label_2aea20;
        }
    }
    ctx->pc = 0x2AEA18u;
    // 0x2aea18: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2AEA18u;
    {
        const bool branch_taken_0x2aea18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aea18) {
            ctx->pc = 0x2AEC40u;
            goto label_2aec40;
        }
    }
    ctx->pc = 0x2AEA20u;
label_2aea20:
    // 0x2aea20: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x2aea20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2aea24: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x2aea24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2aea28: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x2aea28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x2aea2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aea30: 0xaf858988  sw          $a1, -0x7678($gp)
    ctx->pc = 0x2aea30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936968), GPR_U32(ctx, 5));
    // 0x2aea34: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AEA34u;
    {
        const bool branch_taken_0x2aea34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA34u;
        // 0x2aea38: 0xaf84898c  sw          $a0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea34) {
            ctx->pc = 0x2AEA60u;
            goto label_2aea60;
        }
    }
    ctx->pc = 0x2AEA3Cu;
    // 0x2aea3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AEA3Cu;
    {
        const bool branch_taken_0x2aea3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aea3c) {
            ctx->pc = 0x2AEA50u;
            goto label_2aea50;
        }
    }
    ctx->pc = 0x2AEA44u;
    // 0x2aea44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2AEA44u;
    {
        const bool branch_taken_0x2aea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aea44) {
            ctx->pc = 0x2AEA70u;
            goto label_2aea70;
        }
    }
    ctx->pc = 0x2AEA4Cu;
    // 0x2aea4c: 0x0  nop
    ctx->pc = 0x2aea4cu;
    // NOP
label_2aea50:
    // 0x2aea50: 0xaf858988  sw          $a1, -0x7678($gp)
    ctx->pc = 0x2aea50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936968), GPR_U32(ctx, 5));
    // 0x2aea54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AEA54u;
    {
        const bool branch_taken_0x2aea54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA54u;
        // 0x2aea58: 0xaf84898c  sw          $a0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea54) {
            ctx->pc = 0x2AEA70u;
            goto label_2aea70;
        }
    }
    ctx->pc = 0x2AEA5Cu;
    // 0x2aea5c: 0x0  nop
    ctx->pc = 0x2aea5cu;
    // NOP
label_2aea60:
    // 0x2aea60: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x2aea60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2aea64: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x2aea64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x2aea68: 0xaf828988  sw          $v0, -0x7678($gp)
    ctx->pc = 0x2aea68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936968), GPR_U32(ctx, 2));
    // 0x2aea6c: 0x0  nop
    ctx->pc = 0x2aea6cu;
    // NOP
label_2aea70:
    // 0x2aea70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2aea70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2aea74: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2aea74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2aea78: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2aea78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2aea7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AEA7Cu;
    {
        const bool branch_taken_0x2aea7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA7Cu;
        // 0x2aea80: 0xaf808990  sw          $zero, -0x7670($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea7c) {
            ctx->pc = 0x2AEA98u;
            goto label_2aea98;
        }
    }
    ctx->pc = 0x2AEA84u;
    // 0x2aea84: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x2aea84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x2aea88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AEA88u;
    {
        const bool branch_taken_0x2aea88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA88u;
        // 0x2aea8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea88) {
            ctx->pc = 0x2AEA98u;
            goto label_2aea98;
        }
    }
    ctx->pc = 0x2AEA90u;
    // 0x2aea90: 0xaf828990  sw          $v0, -0x7670($gp)
    ctx->pc = 0x2aea90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936976), GPR_U32(ctx, 2));
    // 0x2aea94: 0x0  nop
    ctx->pc = 0x2aea94u;
    // NOP
label_2aea98:
    // 0x2aea98: 0x87868988  lh          $a2, -0x7678($gp)
    ctx->pc = 0x2aea98u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936968)));
    // 0x2aea9c: 0x8787898c  lh          $a3, -0x7674($gp)
    ctx->pc = 0x2aea9cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x2aeaa0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2aeaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2aeaa4: 0x24845080  addiu       $a0, $a0, 0x5080
    ctx->pc = 0x2aeaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20608));
    // 0x2aeaa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aeaa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeaac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2aeaacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeab0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2aeab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeab4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2aeab4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aeab8: 0xc040f7e  jal         func_103DF8
    ctx->pc = 0x2AEAB8u;
    SET_GPR_U32(ctx, 31, 0x2AEAC0u);
    ctx->pc = 0x2AEABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEAB8u;
    // 0x2aeabc: 0xaf808998  sw          $zero, -0x7668($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936984), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103DF8u, 0x2AEAB8u, 0x2AEAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEAC0u;
label_2aeac0:
    // 0x2aeac0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2aeac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2aeac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aeac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeac8: 0x248453b0  addiu       $a0, $a0, 0x53B0
    ctx->pc = 0x2aeac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21424));
    // 0x2aeacc: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2aeaccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2aead0: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x2aead0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2aead4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2aead4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aead8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2aead8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeadc: 0xc040f7e  jal         func_103DF8
    ctx->pc = 0x2AEADCu;
    SET_GPR_U32(ctx, 31, 0x2AEAE4u);
    ctx->pc = 0x2AEAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEADCu;
    // 0x2aeae0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103DF8u, 0x2AEADCu, 0x2AEAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEAE4u;
label_2aeae4:
    // 0x2aeae4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2aeae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2aeae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aeae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aeaec: 0x8c29ceb8  lw          $t1, -0x3148($at)
    ctx->pc = 0x2aeaecu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2aeaf0: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x2aeaf0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
    // 0x2aeaf4: 0xaf828998  sw          $v0, -0x7668($gp)
    ctx->pc = 0x2aeaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936984), GPR_U32(ctx, 2));
    // 0x2aeaf8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2aeaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2aeafc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2aeafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2aeb00: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x2aeb00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x2aeb04: 0x24424b50  addiu       $v0, $v0, 0x4B50
    ctx->pc = 0x2aeb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19280));
    // 0x2aeb08: 0xaf91820c  sw          $s1, -0x7DF4($gp)
    ctx->pc = 0x2aeb08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935052), GPR_U32(ctx, 17));
    // 0x2aeb0c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2aeb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2aeb10: 0xaf80899c  sw          $zero, -0x7664($gp)
    ctx->pc = 0x2aeb10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936988), GPR_U32(ctx, 0));
    // 0x2aeb14: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2aeb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2aeb18: 0x248456e0  addiu       $a0, $a0, 0x56E0
    ctx->pc = 0x2aeb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22240));
    // 0x2aeb1c: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x2aeb1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x2aeb20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2aeb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2aeb24: 0xac28ceb8  sw          $t0, -0x3148($at)
    ctx->pc = 0x2aeb24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x2aeb28: 0x24424b54  addiu       $v0, $v0, 0x4B54
    ctx->pc = 0x2aeb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19284));
    // 0x2aeb2c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2aeb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2aeb30: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2aeb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2aeb34: 0x8c28ceb8  lw          $t0, -0x3148($at)
    ctx->pc = 0x2aeb34u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2aeb38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aeb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb3c: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x2aeb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2aeb40: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2aeb40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2aeb44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2aeb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2aeb48: 0xac27ceb8  sw          $a3, -0x3148($at)
    ctx->pc = 0x2aeb48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x2aeb4c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2aeb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aeb50: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2aeb50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aeb54: 0xc049590  jal         func_125640
    ctx->pc = 0x2AEB54u;
    SET_GPR_U32(ctx, 31, 0x2AEB5Cu);
    ctx->pc = 0x2AEB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB54u;
    // 0x2aeb58: 0xa78289a0  sh          $v0, -0x7660($gp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936992), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2AEB54u, 0x2AEB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB5Cu;
label_2aeb5c:
    // 0x2aeb5c: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x2aeb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x2aeb60: 0xc055568  jal         func_1555A0
    ctx->pc = 0x2AEB60u;
    SET_GPR_U32(ctx, 31, 0x2AEB68u);
    ctx->pc = 0x2AEB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB60u;
    // 0x2aeb64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1555A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1555A0u, 0x2AEB60u, 0x2AEB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB68u;
label_2aeb68:
    // 0x2aeb68: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x2AEB68u;
    SET_GPR_U32(ctx, 31, 0x2AEB70u);
    ctx->pc = 0x2AEB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB68u;
    // 0x2aeb6c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x2AEB68u, 0x2AEB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB70u;
label_2aeb70:
    // 0x2aeb70: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2aeb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2aeb74: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2aeb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x2aeb78: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AEB78u;
    SET_GPR_U32(ctx, 31, 0x2AEB80u);
    ctx->pc = 0x2AEB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB78u;
    // 0x2aeb7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AEB78u, 0x2AEB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB80u;
label_2aeb80:
    // 0x2aeb80: 0xc05551c  jal         func_155470
    ctx->pc = 0x2AEB80u;
    SET_GPR_U32(ctx, 31, 0x2AEB88u);
    ctx->pc = 0x2AEB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB80u;
    // 0x2aeb84: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x2AEB80u, 0x2AEB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB88u;
label_2aeb88:
    // 0x2aeb88: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AEB88u;
    {
        const bool branch_taken_0x2aeb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB88u;
        // 0x2aeb8c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb88) {
            ctx->pc = 0x2AEB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aeb70;
        }
    }
    ctx->pc = 0x2AEB90u;
    // 0x2aeb90: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2aeb90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2aeb94: 0x8c25fc98  lw          $a1, -0x368($at)
    ctx->pc = 0x2aeb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966424)));
    // 0x2aeb98: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x2aeb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x2aeb9c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2aeb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2aeba0: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x2aeba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x2aeba4: 0x24a5003f  addiu       $a1, $a1, 0x3F
    ctx->pc = 0x2aeba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x2aeba8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x2aeba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x2aebac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2aebacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2aebb0: 0xaf838984  sw          $v1, -0x767C($gp)
    ctx->pc = 0x2aebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936964), GPR_U32(ctx, 3));
    // 0x2aebb4: 0x8f838984  lw          $v1, -0x767C($gp)
    ctx->pc = 0x2aebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936964)));
    // 0x2aebb8: 0x611821  addu        $v1, $v1, $at
    ctx->pc = 0x2aebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2aebbc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2aebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2aebc0: 0xc05e390  jal         func_178E40
    ctx->pc = 0x2AEBC0u;
    SET_GPR_U32(ctx, 31, 0x2AEBC8u);
    ctx->pc = 0x2AEBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBC0u;
    // 0x2aebc4: 0x622824  and         $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x2AEBC0u, 0x2AEBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBC8u;
label_2aebc8:
    // 0x2aebc8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2aebc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2aebcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2aebccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aebd0: 0xc0abb18  jal         func_2AEC60
    ctx->pc = 0x2AEBD0u;
    SET_GPR_U32(ctx, 31, 0x2AEBD8u);
    ctx->pc = 0x2AEBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBD0u;
    // 0x2aebd4: 0x248456e0  addiu       $a0, $a0, 0x56E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEC60u, 0x2AEBD0u, 0x2AEBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBD8u;
label_2aebd8:
    // 0x2aebd8: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x2AEBD8u;
    SET_GPR_U32(ctx, 31, 0x2AEBE0u);
    ctx->pc = 0x2AEBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBD8u;
    // 0x2aebdc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x2AEBD8u, 0x2AEBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBE0u;
label_2aebe0:
    // 0x2aebe0: 0xc05551c  jal         func_155470
    ctx->pc = 0x2AEBE0u;
    SET_GPR_U32(ctx, 31, 0x2AEBE8u);
    ctx->pc = 0x2AEBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBE0u;
    // 0x2aebe4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x2AEBE0u, 0x2AEBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBE8u;
label_2aebe8:
    // 0x2aebe8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AEBE8u;
    {
        const bool branch_taken_0x2aebe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aebe8) {
            ctx->pc = 0x2AEC10u;
            goto label_2aec10;
        }
    }
    ctx->pc = 0x2AEBF0u;
label_2aebf0:
    // 0x2aebf0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2aebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2aebf4: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2aebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x2aebf8: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AEBF8u;
    SET_GPR_U32(ctx, 31, 0x2AEC00u);
    ctx->pc = 0x2AEBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBF8u;
    // 0x2aebfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AEBF8u, 0x2AEC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC00u;
label_2aec00:
    // 0x2aec00: 0xc05551c  jal         func_155470
    ctx->pc = 0x2AEC00u;
    SET_GPR_U32(ctx, 31, 0x2AEC08u);
    ctx->pc = 0x2AEC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC00u;
    // 0x2aec04: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x2AEC00u, 0x2AEC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC08u;
label_2aec08:
    // 0x2aec08: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AEC08u;
    {
        const bool branch_taken_0x2aec08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aec08) {
            ctx->pc = 0x2AEBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aebf0;
        }
    }
    ctx->pc = 0x2AEC10u;
label_2aec10:
    // 0x2aec10: 0x8f858984  lw          $a1, -0x767C($gp)
    ctx->pc = 0x2aec10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936964)));
    // 0x2aec14: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2aec14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2aec18: 0xc05e390  jal         func_178E40
    ctx->pc = 0x2AEC18u;
    SET_GPR_U32(ctx, 31, 0x2AEC20u);
    ctx->pc = 0x2AEC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC18u;
    // 0x2aec1c: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x2AEC18u, 0x2AEC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC20u;
label_2aec20:
    // 0x2aec20: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x2AEC20u;
    SET_GPR_U32(ctx, 31, 0x2AEC28u);
    ctx->pc = 0x2AEC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC20u;
    // 0x2aec24: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x2AEC20u, 0x2AEC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC28u;
label_2aec28:
    // 0x2aec28: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x2aec28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x2aec2c: 0xc055568  jal         func_1555A0
    ctx->pc = 0x2AEC2Cu;
    SET_GPR_U32(ctx, 31, 0x2AEC34u);
    ctx->pc = 0x2AEC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC2Cu;
    // 0x2aec30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1555A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1555A0u, 0x2AEC2Cu, 0x2AEC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC34u;
label_2aec34:
    // 0x2aec34: 0x8f828994  lw          $v0, -0x766C($gp)
    ctx->pc = 0x2aec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936980)));
    // 0x2aec38: 0xaf808984  sw          $zero, -0x767C($gp)
    ctx->pc = 0x2aec38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936964), GPR_U32(ctx, 0));
    // 0x2aec3c: 0x0  nop
    ctx->pc = 0x2aec3cu;
    // NOP
label_2aec40:
    // 0x2aec40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aec40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aec44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aec44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aec48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aec48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aec4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC4Cu;
        // 0x2aec50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEC54u;
}
