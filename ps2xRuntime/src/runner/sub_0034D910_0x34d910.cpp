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

// Function: sub_0034D910
// Address: 0x34d910 - 0x34d9f0
void sub_0034D910_0x34d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D910_0x34d910");
#endif

    switch (ctx->pc) {
        case 0x34d93cu: goto label_34d93c;
        case 0x34d954u: goto label_34d954;
        case 0x34d9d8u: goto label_34d9d8;
        default: break;
    }

    ctx->pc = 0x34d910u;

    // 0x34d910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34d910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34d914: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34d914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34d918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34d91c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34d91cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34d920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34d924: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34d924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d928: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34d928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d92c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x34d92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34d930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d934: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34D934u;
    SET_GPR_U32(ctx, 31, 0x34D93Cu);
    ctx->pc = 0x34D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D934u;
    // 0x34d938: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E180u, 0x34D934u, 0x34D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D93Cu;
label_34d93c:
    // 0x34d93c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34d93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d940: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x34D940u;
    {
        const bool branch_taken_0x34d940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D940u;
        // 0x34d944: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d940) {
            ctx->pc = 0x34D9D8u;
            goto label_34d9d8;
        }
    }
    ctx->pc = 0x34D948u;
    // 0x34d948: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x34d948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x34d94c: 0xc0d3838  jal         func_34E0E0
    ctx->pc = 0x34D94Cu;
    SET_GPR_U32(ctx, 31, 0x34D954u);
    ctx->pc = 0x34D950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D94Cu;
    // 0x34d950: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E0E0u, 0x34D94Cu, 0x34D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D954u;
label_34d954:
    // 0x34d954: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34d954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d958: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x34D958u;
    {
        const bool branch_taken_0x34d958 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d958) {
            ctx->pc = 0x34D9D8u;
            goto label_34d9d8;
        }
    }
    ctx->pc = 0x34D960u;
    // 0x34d960: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x34d960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x34d964: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34D964u;
    {
        const bool branch_taken_0x34d964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D964u;
        // 0x34d968: 0x92040017  lbu         $a0, 0x17($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d964) {
            ctx->pc = 0x34D970u;
            goto label_34d970;
        }
    }
    ctx->pc = 0x34D96Cu;
    // 0x34d96c: 0x64040006  daddiu      $a0, $zero, 0x6
    ctx->pc = 0x34d96cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
label_34d970:
    // 0x34d970: 0xacb2000c  sw          $s2, 0xC($a1)
    ctx->pc = 0x34d970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 18));
    // 0x34d974: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x34D974u;
    {
        const bool branch_taken_0x34d974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D974u;
        // 0x34d978: 0xa0b10018  sb          $s1, 0x18($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d974) {
            ctx->pc = 0x34D9C0u;
            goto label_34d9c0;
        }
    }
    ctx->pc = 0x34D97Cu;
    // 0x34d97c: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x34d97cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x34d980: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D980u;
    {
        const bool branch_taken_0x34d980 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d980) {
            ctx->pc = 0x34D990u;
            goto label_34d990;
        }
    }
    ctx->pc = 0x34D988u;
    // 0x34d988: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34D988u;
    {
        const bool branch_taken_0x34d988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D988u;
        // 0x34d98c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d988) {
            ctx->pc = 0x34D9B0u;
            goto label_34d9b0;
        }
    }
    ctx->pc = 0x34D990u;
label_34d990:
    // 0x34d990: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x34d990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x34d994: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D994u;
    {
        const bool branch_taken_0x34d994 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d994) {
            ctx->pc = 0x34D9A8u;
            goto label_34d9a8;
        }
    }
    ctx->pc = 0x34D99Cu;
    // 0x34d99c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34D99Cu;
    {
        const bool branch_taken_0x34d99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D99Cu;
        // 0x34d9a0: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d99c) {
            ctx->pc = 0x34D9B0u;
            goto label_34d9b0;
        }
    }
    ctx->pc = 0x34D9A4u;
    // 0x34d9a4: 0x0  nop
    ctx->pc = 0x34d9a4u;
    // NOP
label_34d9a8:
    // 0x34d9a8: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x34d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x34d9ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34d9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34d9b0:
    // 0x34d9b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34d9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34d9b4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34d9b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34D9B8u;
    {
        const bool branch_taken_0x34d9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D9B8u;
        // 0x34d9bc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d9b8) {
            ctx->pc = 0x34D9C8u;
            goto label_34d9c8;
        }
    }
    ctx->pc = 0x34D9C0u;
label_34d9c0:
    // 0x34d9c0: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x34d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x34d9c4: 0x0  nop
    ctx->pc = 0x34d9c4u;
    // NOP
label_34d9c8:
    // 0x34d9c8: 0xa0a20013  sb          $v0, 0x13($a1)
    ctx->pc = 0x34d9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x34d9cc: 0xa0a40014  sb          $a0, 0x14($a1)
    ctx->pc = 0x34d9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20), (uint8_t)GPR_U32(ctx, 4));
    // 0x34d9d0: 0xc0d4420  jal         func_351080
    ctx->pc = 0x34D9D0u;
    SET_GPR_U32(ctx, 31, 0x34D9D8u);
    ctx->pc = 0x34D9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D9D0u;
    // 0x34d9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351080u, 0x34D9D0u, 0x34D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D9D8u;
label_34d9d8:
    // 0x34d9d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34d9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d9dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34d9dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d9e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34d9e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d9e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x34D9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D9E8u;
        // 0x34d9ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D9F0u;
}
