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

// Function: sub_00203920
// Address: 0x203920 - 0x203a48
void sub_00203920_0x203920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203920_0x203920");
#endif

    switch (ctx->pc) {
        case 0x203920u: goto label_203920;
        case 0x203924u: goto label_203924;
        case 0x203928u: goto label_203928;
        case 0x20392cu: goto label_20392c;
        case 0x203930u: goto label_203930;
        case 0x203934u: goto label_203934;
        case 0x203938u: goto label_203938;
        case 0x20393cu: goto label_20393c;
        case 0x203940u: goto label_203940;
        case 0x203944u: goto label_203944;
        case 0x203948u: goto label_203948;
        case 0x20394cu: goto label_20394c;
        case 0x203950u: goto label_203950;
        case 0x203954u: goto label_203954;
        case 0x203958u: goto label_203958;
        case 0x20395cu: goto label_20395c;
        case 0x203960u: goto label_203960;
        case 0x203964u: goto label_203964;
        case 0x203968u: goto label_203968;
        case 0x20396cu: goto label_20396c;
        case 0x203970u: goto label_203970;
        case 0x203974u: goto label_203974;
        case 0x203978u: goto label_203978;
        case 0x20397cu: goto label_20397c;
        case 0x203980u: goto label_203980;
        case 0x203984u: goto label_203984;
        case 0x203988u: goto label_203988;
        case 0x20398cu: goto label_20398c;
        case 0x203990u: goto label_203990;
        case 0x203994u: goto label_203994;
        case 0x203998u: goto label_203998;
        case 0x20399cu: goto label_20399c;
        case 0x2039a0u: goto label_2039a0;
        case 0x2039a4u: goto label_2039a4;
        case 0x2039a8u: goto label_2039a8;
        case 0x2039acu: goto label_2039ac;
        case 0x2039b0u: goto label_2039b0;
        case 0x2039b4u: goto label_2039b4;
        case 0x2039b8u: goto label_2039b8;
        case 0x2039bcu: goto label_2039bc;
        case 0x2039c0u: goto label_2039c0;
        case 0x2039c4u: goto label_2039c4;
        case 0x2039c8u: goto label_2039c8;
        case 0x2039ccu: goto label_2039cc;
        case 0x2039d0u: goto label_2039d0;
        case 0x2039d4u: goto label_2039d4;
        case 0x2039d8u: goto label_2039d8;
        case 0x2039dcu: goto label_2039dc;
        case 0x2039e0u: goto label_2039e0;
        case 0x2039e4u: goto label_2039e4;
        case 0x2039e8u: goto label_2039e8;
        case 0x2039ecu: goto label_2039ec;
        case 0x2039f0u: goto label_2039f0;
        case 0x2039f4u: goto label_2039f4;
        case 0x2039f8u: goto label_2039f8;
        case 0x2039fcu: goto label_2039fc;
        case 0x203a00u: goto label_203a00;
        case 0x203a04u: goto label_203a04;
        case 0x203a08u: goto label_203a08;
        case 0x203a0cu: goto label_203a0c;
        case 0x203a10u: goto label_203a10;
        case 0x203a14u: goto label_203a14;
        case 0x203a18u: goto label_203a18;
        case 0x203a1cu: goto label_203a1c;
        case 0x203a20u: goto label_203a20;
        case 0x203a24u: goto label_203a24;
        case 0x203a28u: goto label_203a28;
        case 0x203a2cu: goto label_203a2c;
        case 0x203a30u: goto label_203a30;
        case 0x203a34u: goto label_203a34;
        case 0x203a38u: goto label_203a38;
        case 0x203a3cu: goto label_203a3c;
        case 0x203a40u: goto label_203a40;
        case 0x203a44u: goto label_203a44;
        default: break;
    }

    ctx->pc = 0x203920u;

label_203920:
    // 0x203920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_203924:
    // 0x203924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_203928:
    // 0x203928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20392c:
    // 0x20392c: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
label_203930:
    if (ctx->pc == 0x203930u) {
        ctx->pc = 0x203930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20392Cu;
        // 0x203930: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203934u;
        goto label_203934;
    }
    ctx->pc = 0x20392Cu;
    {
        const bool branch_taken_0x20392c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x203930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20392Cu;
        // 0x203930: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20392c) {
            ctx->pc = 0x203A38u;
            goto label_203a38;
        }
    }
    ctx->pc = 0x203934u;
label_203934:
    // 0x203934: 0xc0831c4  jal         func_20C710
label_203938:
    if (ctx->pc == 0x203938u) {
        ctx->pc = 0x203938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203934u;
        // 0x203938: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20393Cu;
        goto label_20393c;
    }
    ctx->pc = 0x203934u;
    SET_GPR_U32(ctx, 31, 0x20393Cu);
    ctx->pc = 0x203938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203934u;
    // 0x203938: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C710u, 0x203934u, 0x20393Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20393Cu;
label_20393c:
    // 0x20393c: 0xc08191a  jal         func_206468
label_203940:
    if (ctx->pc == 0x203940u) {
        ctx->pc = 0x203940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20393Cu;
        // 0x203940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203944u;
        goto label_203944;
    }
    ctx->pc = 0x20393Cu;
    SET_GPR_U32(ctx, 31, 0x203944u);
    ctx->pc = 0x203940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20393Cu;
    // 0x203940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206468u, 0x20393Cu, 0x203944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203944u;
label_203944:
    // 0x203944: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x203944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_203948:
    // 0x203948: 0xc0831c4  jal         func_20C710
label_20394c:
    if (ctx->pc == 0x20394Cu) {
        ctx->pc = 0x20394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203948u;
        // 0x20394c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203950u;
        goto label_203950;
    }
    ctx->pc = 0x203948u;
    SET_GPR_U32(ctx, 31, 0x203950u);
    ctx->pc = 0x20394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203948u;
    // 0x20394c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C710u, 0x203948u, 0x203950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203950u;
label_203950:
    // 0x203950: 0xc0824f6  jal         func_2093D8
label_203954:
    if (ctx->pc == 0x203954u) {
        ctx->pc = 0x203954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203950u;
        // 0x203954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203958u;
        goto label_203958;
    }
    ctx->pc = 0x203950u;
    SET_GPR_U32(ctx, 31, 0x203958u);
    ctx->pc = 0x203954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203950u;
    // 0x203954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2093D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2093D8u, 0x203950u, 0x203958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203958u;
label_203958:
    // 0x203958: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x203958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_20395c:
    // 0x20395c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_203960:
    if (ctx->pc == 0x203960u) {
        ctx->pc = 0x203960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20395Cu;
        // 0x203960: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203964u;
        goto label_203964;
    }
    ctx->pc = 0x20395Cu;
    {
        const bool branch_taken_0x20395c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20395c) {
            ctx->pc = 0x203960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20395Cu;
            // 0x203960: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203970u;
            goto label_203970;
        }
    }
    ctx->pc = 0x203964u;
label_203964:
    // 0x203964: 0xc0821e0  jal         func_208780
label_203968:
    if (ctx->pc == 0x203968u) {
        ctx->pc = 0x20396Cu;
        goto label_20396c;
    }
    ctx->pc = 0x203964u;
    SET_GPR_U32(ctx, 31, 0x20396Cu);
    ctx->pc = 0x208780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208780u, 0x203964u, 0x20396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20396Cu;
label_20396c:
    // 0x20396c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x20396cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_203970:
    // 0x203970: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_203974:
    if (ctx->pc == 0x203974u) {
        ctx->pc = 0x203974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203970u;
        // 0x203974: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203978u;
        goto label_203978;
    }
    ctx->pc = 0x203970u;
    {
        const bool branch_taken_0x203970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x203970) {
            ctx->pc = 0x203974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203970u;
            // 0x203974: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203984u;
            goto label_203984;
        }
    }
    ctx->pc = 0x203978u;
label_203978:
    // 0x203978: 0xc092cda  jal         func_24B368
label_20397c:
    if (ctx->pc == 0x20397Cu) {
        ctx->pc = 0x203980u;
        goto label_203980;
    }
    ctx->pc = 0x203978u;
    SET_GPR_U32(ctx, 31, 0x203980u);
    ctx->pc = 0x24B368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B368u, 0x203978u, 0x203980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203980u;
label_203980:
    // 0x203980: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x203980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_203984:
    // 0x203984: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_203988:
    if (ctx->pc == 0x203988u) {
        ctx->pc = 0x203988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203984u;
        // 0x203988: 0x8e0401c0  lw          $a0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20398Cu;
        goto label_20398c;
    }
    ctx->pc = 0x203984u;
    {
        const bool branch_taken_0x203984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x203984) {
            ctx->pc = 0x203988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203984u;
            // 0x203988: 0x8e0401c0  lw          $a0, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203998u;
            goto label_203998;
        }
    }
    ctx->pc = 0x20398Cu;
label_20398c:
    // 0x20398c: 0xc083276  jal         func_20C9D8
label_203990:
    if (ctx->pc == 0x203990u) {
        ctx->pc = 0x203994u;
        goto label_203994;
    }
    ctx->pc = 0x20398Cu;
    SET_GPR_U32(ctx, 31, 0x203994u);
    ctx->pc = 0x20C9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C9D8u, 0x20398Cu, 0x203994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203994u;
label_203994:
    // 0x203994: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x203994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_203998:
    // 0x203998: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_20399c:
    if (ctx->pc == 0x20399Cu) {
        ctx->pc = 0x20399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203998u;
        // 0x20399c: 0x8e0401e0  lw          $a0, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039A0u;
        goto label_2039a0;
    }
    ctx->pc = 0x203998u;
    {
        const bool branch_taken_0x203998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x203998) {
            ctx->pc = 0x20399Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203998u;
            // 0x20399c: 0x8e0401e0  lw          $a0, 0x1E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2039B4u;
            goto label_2039b4;
        }
    }
    ctx->pc = 0x2039A0u;
label_2039a0:
    // 0x2039a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2039a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2039a4:
    // 0x2039a4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2039a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2039a8:
    // 0x2039a8: 0x40f809  jalr        $v0
label_2039ac:
    if (ctx->pc == 0x2039ACu) {
        ctx->pc = 0x2039B0u;
        goto label_2039b0;
    }
    ctx->pc = 0x2039A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2039B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2039A8u, 0x2039B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2039B0u;
label_2039b0:
    // 0x2039b0: 0x8e0401e0  lw          $a0, 0x1E0($s0)
    ctx->pc = 0x2039b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_2039b4:
    // 0x2039b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2039b8:
    if (ctx->pc == 0x2039B8u) {
        ctx->pc = 0x2039B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039B4u;
        // 0x2039b8: 0x8e0402d0  lw          $a0, 0x2D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039BCu;
        goto label_2039bc;
    }
    ctx->pc = 0x2039B4u;
    {
        const bool branch_taken_0x2039b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2039b4) {
            ctx->pc = 0x2039B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2039B4u;
            // 0x2039b8: 0x8e0402d0  lw          $a0, 0x2D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2039D0u;
            goto label_2039d0;
        }
    }
    ctx->pc = 0x2039BCu;
label_2039bc:
    // 0x2039bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2039bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2039c0:
    // 0x2039c0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2039c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2039c4:
    // 0x2039c4: 0x40f809  jalr        $v0
label_2039c8:
    if (ctx->pc == 0x2039C8u) {
        ctx->pc = 0x2039CCu;
        goto label_2039cc;
    }
    ctx->pc = 0x2039C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2039CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2039C4u, 0x2039CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2039CCu;
label_2039cc:
    // 0x2039cc: 0x8e0402d0  lw          $a0, 0x2D0($s0)
    ctx->pc = 0x2039ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_2039d0:
    // 0x2039d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2039d4:
    if (ctx->pc == 0x2039D4u) {
        ctx->pc = 0x2039D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039D0u;
        // 0x2039d4: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039D8u;
        goto label_2039d8;
    }
    ctx->pc = 0x2039D0u;
    {
        const bool branch_taken_0x2039d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2039d0) {
            ctx->pc = 0x2039D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2039D0u;
            // 0x2039d4: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2039E4u;
            goto label_2039e4;
        }
    }
    ctx->pc = 0x2039D8u;
label_2039d8:
    // 0x2039d8: 0xc080752  jal         func_201D48
label_2039dc:
    if (ctx->pc == 0x2039DCu) {
        ctx->pc = 0x2039E0u;
        goto label_2039e0;
    }
    ctx->pc = 0x2039D8u;
    SET_GPR_U32(ctx, 31, 0x2039E0u);
    ctx->pc = 0x201D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D48u, 0x2039D8u, 0x2039E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2039E0u;
label_2039e0:
    // 0x2039e0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2039e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2039e4:
    // 0x2039e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2039e8:
    if (ctx->pc == 0x2039E8u) {
        ctx->pc = 0x2039ECu;
        goto label_2039ec;
    }
    ctx->pc = 0x2039E4u;
    {
        const bool branch_taken_0x2039e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2039e4) {
            ctx->pc = 0x2039F4u;
            goto label_2039f4;
        }
    }
    ctx->pc = 0x2039ECu;
label_2039ec:
    // 0x2039ec: 0xc080c44  jal         func_203110
label_2039f0:
    if (ctx->pc == 0x2039F0u) {
        ctx->pc = 0x2039F4u;
        goto label_2039f4;
    }
    ctx->pc = 0x2039ECu;
    SET_GPR_U32(ctx, 31, 0x2039F4u);
    ctx->pc = 0x203110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203110u, 0x2039ECu, 0x2039F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2039F4u;
label_2039f4:
    // 0x2039f4: 0xc082d0e  jal         func_20B438
label_2039f8:
    if (ctx->pc == 0x2039F8u) {
        ctx->pc = 0x2039F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039F4u;
        // 0x2039f8: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039FCu;
        goto label_2039fc;
    }
    ctx->pc = 0x2039F4u;
    SET_GPR_U32(ctx, 31, 0x2039FCu);
    ctx->pc = 0x2039F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2039F4u;
    // 0x2039f8: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B438u, 0x2039F4u, 0x2039FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2039FCu;
label_2039fc:
    // 0x2039fc: 0xc082d0e  jal         func_20B438
label_203a00:
    if (ctx->pc == 0x203A00u) {
        ctx->pc = 0x203A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039FCu;
        // 0x203a00: 0x260402a4  addiu       $a0, $s0, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A04u;
        goto label_203a04;
    }
    ctx->pc = 0x2039FCu;
    SET_GPR_U32(ctx, 31, 0x203A04u);
    ctx->pc = 0x203A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2039FCu;
    // 0x203a00: 0x260402a4  addiu       $a0, $s0, 0x2A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B438u, 0x2039FCu, 0x203A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A04u;
label_203a04:
    // 0x203a04: 0xc080ff8  jal         func_203FE0
label_203a08:
    if (ctx->pc == 0x203A08u) {
        ctx->pc = 0x203A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A04u;
        // 0x203a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A0Cu;
        goto label_203a0c;
    }
    ctx->pc = 0x203A04u;
    SET_GPR_U32(ctx, 31, 0x203A0Cu);
    ctx->pc = 0x203A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A04u;
    // 0x203a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE0u, 0x203A04u, 0x203A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A0Cu;
label_203a0c:
    // 0x203a0c: 0xc081018  jal         func_204060
label_203a10:
    if (ctx->pc == 0x203A10u) {
        ctx->pc = 0x203A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A0Cu;
        // 0x203a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A14u;
        goto label_203a14;
    }
    ctx->pc = 0x203A0Cu;
    SET_GPR_U32(ctx, 31, 0x203A14u);
    ctx->pc = 0x203A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A0Cu;
    // 0x203a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204060u, 0x203A0Cu, 0x203A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A14u;
label_203a14:
    // 0x203a14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_203a18:
    if (ctx->pc == 0x203A18u) {
        ctx->pc = 0x203A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A14u;
        // 0x203a18: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A1Cu;
        goto label_203a1c;
    }
    ctx->pc = 0x203A14u;
    {
        const bool branch_taken_0x203a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A14u;
        // 0x203a18: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a14) {
            ctx->pc = 0x203A24u;
            goto label_203a24;
        }
    }
    ctx->pc = 0x203A1Cu;
label_203a1c:
    // 0x203a1c: 0xc082e3e  jal         func_20B8F8
label_203a20:
    if (ctx->pc == 0x203A20u) {
        ctx->pc = 0x203A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A1Cu;
        // 0x203a20: 0x248469f0  addiu       $a0, $a0, 0x69F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A24u;
        goto label_203a24;
    }
    ctx->pc = 0x203A1Cu;
    SET_GPR_U32(ctx, 31, 0x203A24u);
    ctx->pc = 0x203A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A1Cu;
    // 0x203a20: 0x248469f0  addiu       $a0, $a0, 0x69F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x203A1Cu, 0x203A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A24u;
label_203a24:
    // 0x203a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203a28:
    // 0x203a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203a2c:
    // 0x203a2c: 0xc049590  jal         func_125640
label_203a30:
    if (ctx->pc == 0x203A30u) {
        ctx->pc = 0x203A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A2Cu;
        // 0x203a30: 0x24060304  addiu       $a2, $zero, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 772));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A34u;
        goto label_203a34;
    }
    ctx->pc = 0x203A2Cu;
    SET_GPR_U32(ctx, 31, 0x203A34u);
    ctx->pc = 0x203A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A2Cu;
    // 0x203a30: 0x24060304  addiu       $a2, $zero, 0x304 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 772));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x203A2Cu, 0x203A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A34u;
label_203a34:
    // 0x203a34: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x203a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_203a38:
    // 0x203a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203a3c:
    // 0x203a3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x203a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_203a40:
    // 0x203a40: 0x3e00008  jr          $ra
label_203a44:
    if (ctx->pc == 0x203A44u) {
        ctx->pc = 0x203A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A40u;
        // 0x203a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A48u;
        goto label_fallthrough_0x203a40;
    }
    ctx->pc = 0x203A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A40u;
        // 0x203a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x203a40:
    ctx->pc = 0x203A48u;
}
