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

// Function: sub_0010B020
// Address: 0x10b020 - 0x10b0e8
void sub_0010B020_0x10b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B020_0x10b020");
#endif

    switch (ctx->pc) {
        case 0x10b038u: goto label_10b038;
        case 0x10b0a0u: goto label_10b0a0;
        default: break;
    }

    ctx->pc = 0x10b020u;

    // 0x10b020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10b024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b02c: 0xac820828  sw          $v0, 0x828($a0)
    ctx->pc = 0x10b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2088), GPR_U32(ctx, 2));
    // 0x10b030: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10B030u;
    SET_GPR_U32(ctx, 31, 0x10B038u);
    ctx->pc = 0x10B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B030u;
    // 0x10b034: 0xac8001c0  sw          $zero, 0x1C0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10B030u, 0x10B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B038u;
label_10b038:
    // 0x10b038: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10b038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10b03c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10b03cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10b040: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10b040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10b044: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x10b044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x10b048: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10b048u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10b04c: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x10b04cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x10b050: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b054: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10b054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10b058: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10b058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10b05c: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x10b05cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x10b060: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10b060u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x10b064: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x10b064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x10b068: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10b068u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0)); // MMIO: 0x1000b000
    // 0x10b06c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b070: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x10b070u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 0)); // MMIO: 0x1000b400
    // 0x10b074: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x10b074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x10b078: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10b078u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 0)); // MMIO: 0x1000d400
    // 0x10b07c: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x10b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x10b080: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x10b080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x10b084: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10b084u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10b088: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10b088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10b08c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10b090: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B090u;
    {
        const bool branch_taken_0x10b090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B090u;
        // 0x10b094: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b090) {
            ctx->pc = 0x10B0A4u;
            goto label_10b0a4;
        }
    }
    ctx->pc = 0x10B098u;
    // 0x10b098: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10B098u;
    SET_GPR_U32(ctx, 31, 0x10B0A0u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10B098u, 0x10B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B0A0u;
label_10b0a0:
    // 0x10b0a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_10b0a4:
    // 0x10b0a4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b0a8: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x10b0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x10b0ac: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x10b0acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10b0b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10b0b0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x1000b020
    // 0x10b0b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b0b8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10b0b8u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x10b0bc: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x10b0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x10b0c0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10b0c0u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0)); // MMIO: 0x1000d420
    // 0x10b0c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b0c8: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10b0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x10b0cc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x10b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x10b0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b0d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10b0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10b0d8u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3)); // MMIO: 0x10002010
    // 0x10b0dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10b0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0e0: 0x8043626  j           func_10D898
    ctx->pc = 0x10B0E0u;
    ctx->pc = 0x10B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B0E0u;
    // 0x10b0e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D898u;
    sub_0010D898_0x10d898(rdram, ctx, runtime); return;
    ctx->pc = 0x10B0E8u;
}
