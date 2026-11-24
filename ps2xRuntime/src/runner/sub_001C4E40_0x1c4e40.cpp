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

// Function: sub_001C4E40
// Address: 0x1c4e40 - 0x1c56f4
void sub_001C4E40_0x1c4e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4E40_0x1c4e40");
#endif

    switch (ctx->pc) {
        case 0x1c4eacu: goto label_1c4eac;
        case 0x1c4ef4u: goto label_1c4ef4;
        case 0x1c4f08u: goto label_1c4f08;
        case 0x1c4f1cu: goto label_1c4f1c;
        case 0x1c4f3cu: goto label_1c4f3c;
        case 0x1c4f48u: goto label_1c4f48;
        case 0x1c4f6cu: goto label_1c4f6c;
        case 0x1c4f80u: goto label_1c4f80;
        case 0x1c4f8cu: goto label_1c4f8c;
        case 0x1c4fb0u: goto label_1c4fb0;
        case 0x1c4fc4u: goto label_1c4fc4;
        case 0x1c4ff0u: goto label_1c4ff0;
        case 0x1c5004u: goto label_1c5004;
        case 0x1c5010u: goto label_1c5010;
        case 0x1c501cu: goto label_1c501c;
        case 0x1c5028u: goto label_1c5028;
        case 0x1c5038u: goto label_1c5038;
        case 0x1c504cu: goto label_1c504c;
        case 0x1c5058u: goto label_1c5058;
        case 0x1c5070u: goto label_1c5070;
        case 0x1c5084u: goto label_1c5084;
        case 0x1c50a4u: goto label_1c50a4;
        case 0x1c50b8u: goto label_1c50b8;
        case 0x1c50ccu: goto label_1c50cc;
        case 0x1c50ecu: goto label_1c50ec;
        case 0x1c50f8u: goto label_1c50f8;
        case 0x1c511cu: goto label_1c511c;
        case 0x1c5130u: goto label_1c5130;
        case 0x1c513cu: goto label_1c513c;
        case 0x1c5160u: goto label_1c5160;
        case 0x1c5174u: goto label_1c5174;
        case 0x1c51a0u: goto label_1c51a0;
        case 0x1c51b4u: goto label_1c51b4;
        case 0x1c51c0u: goto label_1c51c0;
        case 0x1c51ccu: goto label_1c51cc;
        case 0x1c51d8u: goto label_1c51d8;
        case 0x1c51e8u: goto label_1c51e8;
        case 0x1c51fcu: goto label_1c51fc;
        case 0x1c5208u: goto label_1c5208;
        case 0x1c5220u: goto label_1c5220;
        case 0x1c5234u: goto label_1c5234;
        case 0x1c5254u: goto label_1c5254;
        case 0x1c5268u: goto label_1c5268;
        case 0x1c527cu: goto label_1c527c;
        case 0x1c52bcu: goto label_1c52bc;
        case 0x1c52c8u: goto label_1c52c8;
        case 0x1c52ecu: goto label_1c52ec;
        case 0x1c5300u: goto label_1c5300;
        case 0x1c5328u: goto label_1c5328;
        case 0x1c533cu: goto label_1c533c;
        case 0x1c5350u: goto label_1c5350;
        case 0x1c5364u: goto label_1c5364;
        case 0x1c5374u: goto label_1c5374;
        case 0x1c5398u: goto label_1c5398;
        case 0x1c53acu: goto label_1c53ac;
        case 0x1c53b8u: goto label_1c53b8;
        case 0x1c53c8u: goto label_1c53c8;
        case 0x1c53d4u: goto label_1c53d4;
        case 0x1c5440u: goto label_1c5440;
        case 0x1c5454u: goto label_1c5454;
        case 0x1c5470u: goto label_1c5470;
        case 0x1c5484u: goto label_1c5484;
        case 0x1c54a4u: goto label_1c54a4;
        case 0x1c54b8u: goto label_1c54b8;
        case 0x1c54ccu: goto label_1c54cc;
        case 0x1c550cu: goto label_1c550c;
        case 0x1c5518u: goto label_1c5518;
        case 0x1c553cu: goto label_1c553c;
        case 0x1c5550u: goto label_1c5550;
        case 0x1c5578u: goto label_1c5578;
        case 0x1c558cu: goto label_1c558c;
        case 0x1c55a0u: goto label_1c55a0;
        case 0x1c55b4u: goto label_1c55b4;
        case 0x1c55c4u: goto label_1c55c4;
        case 0x1c55e8u: goto label_1c55e8;
        case 0x1c55fcu: goto label_1c55fc;
        case 0x1c5608u: goto label_1c5608;
        case 0x1c5618u: goto label_1c5618;
        case 0x1c5624u: goto label_1c5624;
        case 0x1c5690u: goto label_1c5690;
        case 0x1c56a4u: goto label_1c56a4;
        case 0x1c56c0u: goto label_1c56c0;
        case 0x1c56d4u: goto label_1c56d4;
        default: break;
    }

    ctx->pc = 0x1c4e40u;

    // 0x1c4e40: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x1c4e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x1c4e44: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c4e48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c4e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c4e4c: 0x2442f5d0  addiu       $v0, $v0, -0xA30
    ctx->pc = 0x1c4e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964688));
    // 0x1c4e50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c4e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c4e54: 0x27a901f0  addiu       $t1, $sp, 0x1F0
    ctx->pc = 0x1c4e54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1c4e58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c4e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c4e5c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c4e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c4e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c4e64: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1c4e64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1c4e68: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c4e68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c4e6c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c4e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e70: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x1c4e70u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x40F5D0u));
    // 0x1c4e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e78: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c4e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e7c: 0x24c6f5e0  addiu       $a2, $a2, -0xA20
    ctx->pc = 0x1c4e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964704));
    // 0x1c4e80: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x1c4e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1c4e84: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x1c4e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1c4e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e8c: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x1c4e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x1c4e90: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c4e94: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x1c4e94u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x40F5E0u));
    // 0x1c4e98: 0x2442f5f0  addiu       $v0, $v0, -0xA10
    ctx->pc = 0x1c4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964720));
    // 0x1c4e9c: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1c4e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1c4ea0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c4ea0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F5F0u));
    // 0x1c4ea4: 0xc06736c  jal         func_19CDB0
    ctx->pc = 0x1C4EA4u;
    SET_GPR_U32(ctx, 31, 0x1C4EACu);
    ctx->pc = 0x1C4EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EA4u;
    // 0x1c4ea8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x1C4EA4u, 0x1C4EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4EACu;
label_1c4eac:
    // 0x1c4eac: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1c4eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c4eb0: 0x10430177  beq         $v0, $v1, . + 4 + (0x177 << 2)
    ctx->pc = 0x1C4EB0u;
    {
        const bool branch_taken_0x1c4eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EB0u;
        // 0x1c4eb4: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4eb0) {
            ctx->pc = 0x1C5490u;
            goto label_1c5490;
        }
    }
    ctx->pc = 0x1C4EB8u;
    // 0x1c4eb8: 0x104300e1  beq         $v0, $v1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x1C4EB8u;
    {
        const bool branch_taken_0x1c4eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c4eb8) {
            ctx->pc = 0x1C5240u;
            goto label_1c5240;
        }
    }
    ctx->pc = 0x1C4EC0u;
    // 0x1c4ec0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1c4ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c4ec4: 0x10430072  beq         $v0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x1C4EC4u;
    {
        const bool branch_taken_0x1c4ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C4EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EC4u;
        // 0x1c4ec8: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ec4) {
            ctx->pc = 0x1C5090u;
            goto label_1c5090;
        }
    }
    ctx->pc = 0x1C4ECCu;
    // 0x1c4ecc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4ECCu;
    {
        const bool branch_taken_0x1c4ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c4ecc) {
            ctx->pc = 0x1C4EE0u;
            goto label_1c4ee0;
        }
    }
    ctx->pc = 0x1C4ED4u;
    // 0x1c4ed4: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x1C4ED4u;
    {
        const bool branch_taken_0x1c4ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ed4) {
            ctx->pc = 0x1C56D8u;
            goto label_1c56d8;
        }
    }
    ctx->pc = 0x1C4EDCu;
    // 0x1c4edc: 0x0  nop
    ctx->pc = 0x1c4edcu;
    // NOP
label_1c4ee0:
    // 0x1c4ee0: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c4ee4: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1c4ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1c4ee8: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x1c4ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1c4eec: 0xc041442  jal         func_105108
    ctx->pc = 0x1C4EECu;
    SET_GPR_U32(ctx, 31, 0x1C4EF4u);
    ctx->pc = 0x1C4EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EECu;
    // 0x1c4ef0: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C4EECu, 0x1C4EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4EF4u;
label_1c4ef4:
    // 0x1c4ef4: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c4ef8: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1c4ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1c4efc: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x1c4efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1c4f00: 0xc041442  jal         func_105108
    ctx->pc = 0x1C4F00u;
    SET_GPR_U32(ctx, 31, 0x1C4F08u);
    ctx->pc = 0x1C4F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F00u;
    // 0x1c4f04: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C4F00u, 0x1C4F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F08u;
label_1c4f08:
    // 0x1c4f08: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c4f0c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1c4f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1c4f10: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1c4f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1c4f14: 0xc041442  jal         func_105108
    ctx->pc = 0x1C4F14u;
    SET_GPR_U32(ctx, 31, 0x1C4F1Cu);
    ctx->pc = 0x1C4F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F14u;
    // 0x1c4f18: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C4F14u, 0x1C4F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F1Cu;
label_1c4f1c:
    // 0x1c4f1c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c4f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c4f20: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c4f24: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c4f24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c4f28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c4f2c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1c4f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1c4f30: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c4f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4f34: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C4F34u;
    SET_GPR_U32(ctx, 31, 0x1C4F3Cu);
    ctx->pc = 0x1C4F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F34u;
    // 0x1c4f38: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C4F34u, 0x1C4F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F3Cu;
label_1c4f3c:
    // 0x1c4f3c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1c4f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1c4f40: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C4F40u;
    SET_GPR_U32(ctx, 31, 0x1C4F48u);
    ctx->pc = 0x1C4F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F40u;
    // 0x1c4f44: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C4F40u, 0x1C4F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F48u;
label_1c4f48:
    // 0x1c4f48: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c4f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c4f4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4f50: 0x0  nop
    ctx->pc = 0x1c4f50u;
    // NOP
    // 0x1c4f54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4f58: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4F58u;
    {
        const bool branch_taken_0x1c4f58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F58u;
        // 0x1c4f5c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f58) {
            ctx->pc = 0x1C4F80u;
            goto label_1c4f80;
        }
    }
    ctx->pc = 0x1C4F60u;
    // 0x1c4f60: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c4f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c4f64: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C4F64u;
    SET_GPR_U32(ctx, 31, 0x1C4F6Cu);
    ctx->pc = 0x1C4F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F64u;
    // 0x1c4f68: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C4F64u, 0x1C4F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F6Cu;
label_1c4f6c:
    // 0x1c4f6c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c4f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c4f70: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1c4f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c4f74: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c4f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c4f78: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C4F78u;
    SET_GPR_U32(ctx, 31, 0x1C4F80u);
    ctx->pc = 0x1C4F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F78u;
    // 0x1c4f7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C4F78u, 0x1C4F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F80u;
label_1c4f80:
    // 0x1c4f80: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1c4f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1c4f84: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C4F84u;
    SET_GPR_U32(ctx, 31, 0x1C4F8Cu);
    ctx->pc = 0x1C4F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F84u;
    // 0x1c4f88: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C4F84u, 0x1C4F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F8Cu;
label_1c4f8c:
    // 0x1c4f8c: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1c4f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x1c4f90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4f94: 0x0  nop
    ctx->pc = 0x1c4f94u;
    // NOP
    // 0x1c4f98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4f9c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1C4F9Cu;
    {
        const bool branch_taken_0x1c4f9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F9Cu;
        // 0x1c4fa0: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f9c) {
            ctx->pc = 0x1C4FD0u;
            goto label_1c4fd0;
        }
    }
    ctx->pc = 0x1C4FA4u;
    // 0x1c4fa4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c4fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c4fa8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C4FA8u;
    SET_GPR_U32(ctx, 31, 0x1C4FB0u);
    ctx->pc = 0x1C4FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4FA8u;
    // 0x1c4fac: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C4FA8u, 0x1C4FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FB0u;
label_1c4fb0:
    // 0x1c4fb0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c4fb4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1c4fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c4fb8: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c4fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c4fbc: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C4FBCu;
    SET_GPR_U32(ctx, 31, 0x1C4FC4u);
    ctx->pc = 0x1C4FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4FBCu;
    // 0x1c4fc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C4FBCu, 0x1C4FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FC4u;
label_1c4fc4:
    // 0x1c4fc4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C4FC4u;
    {
        const bool branch_taken_0x1c4fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4fc4) {
            ctx->pc = 0x1C5008u;
            goto label_1c5008;
        }
    }
    ctx->pc = 0x1C4FCCu;
    // 0x1c4fcc: 0x0  nop
    ctx->pc = 0x1c4fccu;
    // NOP
label_1c4fd0:
    // 0x1c4fd0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1c4fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1c4fd4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c4fd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c4fd8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c4fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1c4fdc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c4fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c4fe0: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x1c4fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1c4fe4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4fe8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C4FE8u;
    SET_GPR_U32(ctx, 31, 0x1C4FF0u);
    ctx->pc = 0x1C4FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4FE8u;
    // 0x1c4fec: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C4FE8u, 0x1C4FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FF0u;
label_1c4ff0:
    // 0x1c4ff0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c4ff4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1c4ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c4ff8: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c4ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c4ffc: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C4FFCu;
    SET_GPR_U32(ctx, 31, 0x1C5004u);
    ctx->pc = 0x1C5000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4FFCu;
    // 0x1c5000: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C4FFCu, 0x1C5004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5004u;
label_1c5004:
    // 0x1c5004: 0x0  nop
    ctx->pc = 0x1c5004u;
    // NOP
label_1c5008:
    // 0x1c5008: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1C5008u;
    SET_GPR_U32(ctx, 31, 0x1C5010u);
    ctx->pc = 0x1C500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5008u;
    // 0x1c500c: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1C5008u, 0x1C5010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5010u;
label_1c5010:
    // 0x1c5010: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1c5010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1c5014: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1C5014u;
    SET_GPR_U32(ctx, 31, 0x1C501Cu);
    ctx->pc = 0x1C5018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5014u;
    // 0x1c5018: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1C5014u, 0x1C501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C501Cu;
label_1c501c:
    // 0x1c501c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1c501cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1c5020: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C5020u;
    SET_GPR_U32(ctx, 31, 0x1C5028u);
    ctx->pc = 0x1C5024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5020u;
    // 0x1c5024: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C5020u, 0x1C5028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5028u;
label_1c5028:
    // 0x1c5028: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1c5028u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1c502c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c502cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c5030: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5030u;
    SET_GPR_U32(ctx, 31, 0x1C5038u);
    ctx->pc = 0x1C5034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5030u;
    // 0x1c5034: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5030u, 0x1C5038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5038u;
label_1c5038:
    // 0x1c5038: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c503c: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1c503cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c5040: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5044: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5044u;
    SET_GPR_U32(ctx, 31, 0x1C504Cu);
    ctx->pc = 0x1C5048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5044u;
    // 0x1c5048: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5044u, 0x1C504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C504Cu;
label_1c504c:
    // 0x1c504c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1c504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1c5050: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C5050u;
    SET_GPR_U32(ctx, 31, 0x1C5058u);
    ctx->pc = 0x1C5054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5050u;
    // 0x1c5054: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C5050u, 0x1C5058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5058u;
label_1c5058:
    // 0x1c5058: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c5058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c505c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c505cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c5060: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5064: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1c5064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1c5068: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5068u;
    SET_GPR_U32(ctx, 31, 0x1C5070u);
    ctx->pc = 0x1C506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5068u;
    // 0x1c506c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5068u, 0x1C5070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5070u;
label_1c5070:
    // 0x1c5070: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5074: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1c5074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c5078: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c507c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C507Cu;
    SET_GPR_U32(ctx, 31, 0x1C5084u);
    ctx->pc = 0x1C5080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C507Cu;
    // 0x1c5080: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C507Cu, 0x1C5084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5084u;
label_1c5084:
    // 0x1c5084: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x1C5084u;
    {
        const bool branch_taken_0x1c5084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5084) {
            ctx->pc = 0x1C56D8u;
            goto label_1c56d8;
        }
    }
    ctx->pc = 0x1C508Cu;
    // 0x1c508c: 0x0  nop
    ctx->pc = 0x1c508cu;
    // NOP
label_1c5090:
    // 0x1c5090: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c5090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c5094: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1c5094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c5098: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x1c5098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1c509c: 0xc041442  jal         func_105108
    ctx->pc = 0x1C509Cu;
    SET_GPR_U32(ctx, 31, 0x1C50A4u);
    ctx->pc = 0x1C50A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C509Cu;
    // 0x1c50a0: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C509Cu, 0x1C50A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50A4u;
label_1c50a4:
    // 0x1c50a4: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c50a8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1c50a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1c50ac: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x1c50acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1c50b0: 0xc041442  jal         func_105108
    ctx->pc = 0x1C50B0u;
    SET_GPR_U32(ctx, 31, 0x1C50B8u);
    ctx->pc = 0x1C50B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50B0u;
    // 0x1c50b4: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C50B0u, 0x1C50B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50B8u;
label_1c50b8:
    // 0x1c50b8: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c50b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c50bc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1c50bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1c50c0: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1c50c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1c50c4: 0xc041442  jal         func_105108
    ctx->pc = 0x1C50C4u;
    SET_GPR_U32(ctx, 31, 0x1C50CCu);
    ctx->pc = 0x1C50C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50C4u;
    // 0x1c50c8: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C50C4u, 0x1C50CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50CCu;
label_1c50cc:
    // 0x1c50cc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c50ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c50d0: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c50d4: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c50d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c50d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c50dc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c50dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c50e0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c50e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c50e4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C50E4u;
    SET_GPR_U32(ctx, 31, 0x1C50ECu);
    ctx->pc = 0x1C50E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50E4u;
    // 0x1c50e8: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C50E4u, 0x1C50ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50ECu;
label_1c50ec:
    // 0x1c50ec: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c50ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c50f0: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C50F0u;
    SET_GPR_U32(ctx, 31, 0x1C50F8u);
    ctx->pc = 0x1C50F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50F0u;
    // 0x1c50f4: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C50F0u, 0x1C50F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50F8u;
label_1c50f8:
    // 0x1c50f8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c50fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c50fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5100: 0x0  nop
    ctx->pc = 0x1c5100u;
    // NOP
    // 0x1c5104: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c5104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5108: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5108u;
    {
        const bool branch_taken_0x1c5108 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5108u;
        // 0x1c510c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5108) {
            ctx->pc = 0x1C5130u;
            goto label_1c5130;
        }
    }
    ctx->pc = 0x1C5110u;
    // 0x1c5110: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1c5110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c5114: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5114u;
    SET_GPR_U32(ctx, 31, 0x1C511Cu);
    ctx->pc = 0x1C5118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5114u;
    // 0x1c5118: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5114u, 0x1C511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C511Cu;
label_1c511c:
    // 0x1c511c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c511cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5120: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x1c5120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c5124: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5128: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5128u;
    SET_GPR_U32(ctx, 31, 0x1C5130u);
    ctx->pc = 0x1C512Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5128u;
    // 0x1c512c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5128u, 0x1C5130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5130u;
label_1c5130:
    // 0x1c5130: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c5130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c5134: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C5134u;
    SET_GPR_U32(ctx, 31, 0x1C513Cu);
    ctx->pc = 0x1C5138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5134u;
    // 0x1c5138: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C5134u, 0x1C513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C513Cu;
label_1c513c:
    // 0x1c513c: 0x3c02c060  lui         $v0, 0xC060
    ctx->pc = 0x1c513cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49248 << 16));
    // 0x1c5140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5144: 0x0  nop
    ctx->pc = 0x1c5144u;
    // NOP
    // 0x1c5148: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c5148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c514c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1C514Cu;
    {
        const bool branch_taken_0x1c514c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C514Cu;
        // 0x1c5150: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c514c) {
            ctx->pc = 0x1C5180u;
            goto label_1c5180;
        }
    }
    ctx->pc = 0x1C5154u;
    // 0x1c5154: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1c5154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c5158: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5158u;
    SET_GPR_U32(ctx, 31, 0x1C5160u);
    ctx->pc = 0x1C515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5158u;
    // 0x1c515c: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5158u, 0x1C5160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5160u;
label_1c5160:
    // 0x1c5160: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5164: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x1c5164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c5168: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c516c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C516Cu;
    SET_GPR_U32(ctx, 31, 0x1C5174u);
    ctx->pc = 0x1C5170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C516Cu;
    // 0x1c5170: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C516Cu, 0x1C5174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5174u;
label_1c5174:
    // 0x1c5174: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C5174u;
    {
        const bool branch_taken_0x1c5174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5174) {
            ctx->pc = 0x1C51B8u;
            goto label_1c51b8;
        }
    }
    ctx->pc = 0x1C517Cu;
    // 0x1c517c: 0x0  nop
    ctx->pc = 0x1c517cu;
    // NOP
label_1c5180:
    // 0x1c5180: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1c5180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1c5184: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c5184u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c5188: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c5188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1c518c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1c518cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c5190: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1c5190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1c5194: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5198: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5198u;
    SET_GPR_U32(ctx, 31, 0x1C51A0u);
    ctx->pc = 0x1C519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5198u;
    // 0x1c519c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5198u, 0x1C51A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51A0u;
label_1c51a0:
    // 0x1c51a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c51a4: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x1c51a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c51a8: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c51a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c51ac: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C51ACu;
    SET_GPR_U32(ctx, 31, 0x1C51B4u);
    ctx->pc = 0x1C51B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51ACu;
    // 0x1c51b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C51ACu, 0x1C51B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51B4u;
label_1c51b4:
    // 0x1c51b4: 0x0  nop
    ctx->pc = 0x1c51b4u;
    // NOP
label_1c51b8:
    // 0x1c51b8: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1C51B8u;
    SET_GPR_U32(ctx, 31, 0x1C51C0u);
    ctx->pc = 0x1C51BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51B8u;
    // 0x1c51bc: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1C51B8u, 0x1C51C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51C0u;
label_1c51c0:
    // 0x1c51c0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c51c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c51c4: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1C51C4u;
    SET_GPR_U32(ctx, 31, 0x1C51CCu);
    ctx->pc = 0x1C51C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51C4u;
    // 0x1c51c8: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1C51C4u, 0x1C51CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51CCu;
label_1c51cc:
    // 0x1c51cc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c51ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c51d0: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C51D0u;
    SET_GPR_U32(ctx, 31, 0x1C51D8u);
    ctx->pc = 0x1C51D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51D0u;
    // 0x1c51d4: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C51D0u, 0x1C51D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51D8u;
label_1c51d8:
    // 0x1c51d8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1c51d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1c51dc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1c51dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c51e0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C51E0u;
    SET_GPR_U32(ctx, 31, 0x1C51E8u);
    ctx->pc = 0x1C51E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51E0u;
    // 0x1c51e4: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C51E0u, 0x1C51E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51E8u;
label_1c51e8:
    // 0x1c51e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c51ec: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x1c51ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c51f0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c51f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c51f4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C51F4u;
    SET_GPR_U32(ctx, 31, 0x1C51FCu);
    ctx->pc = 0x1C51F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51F4u;
    // 0x1c51f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C51F4u, 0x1C51FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51FCu;
label_1c51fc:
    // 0x1c51fc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c51fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c5200: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C5200u;
    SET_GPR_U32(ctx, 31, 0x1C5208u);
    ctx->pc = 0x1C5204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5200u;
    // 0x1c5204: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C5200u, 0x1C5208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5208u;
label_1c5208:
    // 0x1c5208: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c5208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c520c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1c520cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c5210: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5214: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1c5214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1c5218: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5218u;
    SET_GPR_U32(ctx, 31, 0x1C5220u);
    ctx->pc = 0x1C521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5218u;
    // 0x1c521c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5218u, 0x1C5220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5220u;
label_1c5220:
    // 0x1c5220: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5224: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x1c5224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c5228: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c522c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C522Cu;
    SET_GPR_U32(ctx, 31, 0x1C5234u);
    ctx->pc = 0x1C5230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C522Cu;
    // 0x1c5230: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C522Cu, 0x1C5234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5234u;
label_1c5234:
    // 0x1c5234: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x1C5234u;
    {
        const bool branch_taken_0x1c5234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5234) {
            ctx->pc = 0x1C56D8u;
            goto label_1c56d8;
        }
    }
    ctx->pc = 0x1C523Cu;
    // 0x1c523c: 0x0  nop
    ctx->pc = 0x1c523cu;
    // NOP
label_1c5240:
    // 0x1c5240: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c5240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c5244: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c5244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c5248: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x1c5248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1c524c: 0xc041442  jal         func_105108
    ctx->pc = 0x1C524Cu;
    SET_GPR_U32(ctx, 31, 0x1C5254u);
    ctx->pc = 0x1C5250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C524Cu;
    // 0x1c5250: 0x24450380  addiu       $a1, $v0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C524Cu, 0x1C5254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5254u;
label_1c5254:
    // 0x1c5254: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c5254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c5258: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c5258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c525c: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x1c525cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1c5260: 0xc041442  jal         func_105108
    ctx->pc = 0x1C5260u;
    SET_GPR_U32(ctx, 31, 0x1C5268u);
    ctx->pc = 0x1C5264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5260u;
    // 0x1c5264: 0x24450380  addiu       $a1, $v0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C5260u, 0x1C5268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5268u;
label_1c5268:
    // 0x1c5268: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c5268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c526c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c526cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c5270: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1c5270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1c5274: 0xc041442  jal         func_105108
    ctx->pc = 0x1C5274u;
    SET_GPR_U32(ctx, 31, 0x1C527Cu);
    ctx->pc = 0x1C5278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5274u;
    // 0x1c5278: 0x24450380  addiu       $a1, $v0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C5274u, 0x1C527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C527Cu;
label_1c527c:
    // 0x1c527c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1c527cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c5280: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1c5280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1c5284: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c5284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c5288: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c5288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c528c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c528cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5290: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c5290u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c5294: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c5294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c5298: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c5298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c529c: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x1c529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1c52a0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c52a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c52a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c52a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c52a8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1c52a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c52ac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c52acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c52b0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c52b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c52b4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C52B4u;
    SET_GPR_U32(ctx, 31, 0x1C52BCu);
    ctx->pc = 0x1C52B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52B4u;
    // 0x1c52b8: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C52B4u, 0x1C52BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52BCu;
label_1c52bc:
    // 0x1c52bc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c52bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c52c0: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C52C0u;
    SET_GPR_U32(ctx, 31, 0x1C52C8u);
    ctx->pc = 0x1C52C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52C0u;
    // 0x1c52c4: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C52C0u, 0x1C52C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52C8u;
label_1c52c8:
    // 0x1c52c8: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x1c52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
    // 0x1c52cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c52ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c52d0: 0x0  nop
    ctx->pc = 0x1c52d0u;
    // NOP
    // 0x1c52d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c52d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c52d8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1C52D8u;
    {
        const bool branch_taken_0x1c52d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C52DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52D8u;
        // 0x1c52dc: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52d8) {
            ctx->pc = 0x1C5308u;
            goto label_1c5308;
        }
    }
    ctx->pc = 0x1C52E0u;
    // 0x1c52e0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c52e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c52e4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C52E4u;
    SET_GPR_U32(ctx, 31, 0x1C52ECu);
    ctx->pc = 0x1C52E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52E4u;
    // 0x1c52e8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C52E4u, 0x1C52ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52ECu;
label_1c52ec:
    // 0x1c52ec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c52ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c52f0: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1c52f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c52f4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c52f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c52f8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C52F8u;
    SET_GPR_U32(ctx, 31, 0x1C5300u);
    ctx->pc = 0x1C52FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52F8u;
    // 0x1c52fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C52F8u, 0x1C5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5300u;
label_1c5300:
    // 0x1c5300: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C5300u;
    {
        const bool branch_taken_0x1c5300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5300) {
            ctx->pc = 0x1C5368u;
            goto label_1c5368;
        }
    }
    ctx->pc = 0x1C5308u;
label_1c5308:
    // 0x1c5308: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c5308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c530c: 0x0  nop
    ctx->pc = 0x1c530cu;
    // NOP
    // 0x1c5310: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c5310u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5314: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1C5314u;
    {
        const bool branch_taken_0x1c5314 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5314u;
        // 0x1c5318: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5314) {
            ctx->pc = 0x1C5368u;
            goto label_1c5368;
        }
    }
    ctx->pc = 0x1C531Cu;
    // 0x1c531c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c531cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c5320: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5320u;
    SET_GPR_U32(ctx, 31, 0x1C5328u);
    ctx->pc = 0x1C5324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5320u;
    // 0x1c5324: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5320u, 0x1C5328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5328u;
label_1c5328:
    // 0x1c5328: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c532c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1c532cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c5330: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5334: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5334u;
    SET_GPR_U32(ctx, 31, 0x1C533Cu);
    ctx->pc = 0x1C5338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5334u;
    // 0x1c5338: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5334u, 0x1C533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C533Cu;
label_1c533c:
    // 0x1c533c: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x1c533cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
    // 0x1c5340: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c5340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c5344: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c5344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5348: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5348u;
    SET_GPR_U32(ctx, 31, 0x1C5350u);
    ctx->pc = 0x1C534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5348u;
    // 0x1c534c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5348u, 0x1C5350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5350u;
label_1c5350:
    // 0x1c5350: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1c5350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c5354: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1c5354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c5358: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c535c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C535Cu;
    SET_GPR_U32(ctx, 31, 0x1C5364u);
    ctx->pc = 0x1C5360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C535Cu;
    // 0x1c5360: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C535Cu, 0x1C5364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5364u;
label_1c5364:
    // 0x1c5364: 0x0  nop
    ctx->pc = 0x1c5364u;
    // NOP
label_1c5368:
    // 0x1c5368: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c5368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c536c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C536Cu;
    SET_GPR_U32(ctx, 31, 0x1C5374u);
    ctx->pc = 0x1C5370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C536Cu;
    // 0x1c5370: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C536Cu, 0x1C5374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5374u;
label_1c5374:
    // 0x1c5374: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c5374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c5378: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c537c: 0x0  nop
    ctx->pc = 0x1c537cu;
    // NOP
    // 0x1c5380: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c5380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5384: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C5384u;
    {
        const bool branch_taken_0x1c5384 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5384u;
        // 0x1c5388: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5384) {
            ctx->pc = 0x1C53B0u;
            goto label_1c53b0;
        }
    }
    ctx->pc = 0x1C538Cu;
    // 0x1c538c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c538cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c5390: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5390u;
    SET_GPR_U32(ctx, 31, 0x1C5398u);
    ctx->pc = 0x1C5394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5390u;
    // 0x1c5394: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5390u, 0x1C5398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5398u;
label_1c5398:
    // 0x1c5398: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c539c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1c539cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c53a0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c53a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c53a4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C53A4u;
    SET_GPR_U32(ctx, 31, 0x1C53ACu);
    ctx->pc = 0x1C53A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C53A4u;
    // 0x1c53a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C53A4u, 0x1C53ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C53ACu;
label_1c53ac:
    // 0x1c53ac: 0x0  nop
    ctx->pc = 0x1c53acu;
    // NOP
label_1c53b0:
    // 0x1c53b0: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1C53B0u;
    SET_GPR_U32(ctx, 31, 0x1C53B8u);
    ctx->pc = 0x1C53B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C53B0u;
    // 0x1c53b4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1C53B0u, 0x1C53B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C53B8u;
label_1c53b8:
    // 0x1c53b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c53b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c53bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c53bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c53c0: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1C53C0u;
    SET_GPR_U32(ctx, 31, 0x1C53C8u);
    ctx->pc = 0x1C53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C53C0u;
    // 0x1c53c4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1C53C0u, 0x1C53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C53C8u;
label_1c53c8:
    // 0x1c53c8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c53c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c53cc: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C53CCu;
    SET_GPR_U32(ctx, 31, 0x1C53D4u);
    ctx->pc = 0x1C53D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C53CCu;
    // 0x1c53d0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C53CCu, 0x1C53D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C53D4u;
label_1c53d4:
    // 0x1c53d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c53d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c53d8: 0x0  nop
    ctx->pc = 0x1c53d8u;
    // NOP
    // 0x1c53dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c53dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c53e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C53E0u;
    {
        const bool branch_taken_0x1c53e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53E0u;
        // 0x1c53e4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53e0) {
            ctx->pc = 0x1C53ECu;
            goto label_1c53ec;
        }
    }
    ctx->pc = 0x1C53E8u;
    // 0x1c53e8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1c53e8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1c53ec:
    // 0x1c53ec: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x1c53ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x1c53f0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c53f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1c53f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c53f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c53f8: 0x0  nop
    ctx->pc = 0x1c53f8u;
    // NOP
    // 0x1c53fc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1c53fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5400: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x1C5400u;
    {
        const bool branch_taken_0x1c5400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5400) {
            ctx->pc = 0x1C5458u;
            goto label_1c5458;
        }
    }
    ctx->pc = 0x1C5408u;
    // 0x1c5408: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c5408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c540c: 0x0  nop
    ctx->pc = 0x1c540cu;
    // NOP
    // 0x1c5410: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c5410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5414: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5414u;
    {
        const bool branch_taken_0x1c5414 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5414) {
            ctx->pc = 0x1C5428u;
            goto label_1c5428;
        }
    }
    ctx->pc = 0x1C541Cu;
    // 0x1c541c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C541Cu;
    {
        const bool branch_taken_0x1c541c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C541Cu;
        // 0x1c5420: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c541c) {
            ctx->pc = 0x1C5430u;
            goto label_1c5430;
        }
    }
    ctx->pc = 0x1C5424u;
    // 0x1c5424: 0x0  nop
    ctx->pc = 0x1c5424u;
    // NOP
label_1c5428:
    // 0x1c5428: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c5428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c542c: 0x0  nop
    ctx->pc = 0x1c542cu;
    // NOP
label_1c5430:
    // 0x1c5430: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c5430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c5434: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x1c5434u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c5438: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5438u;
    SET_GPR_U32(ctx, 31, 0x1C5440u);
    ctx->pc = 0x1C543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5438u;
    // 0x1c543c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5438u, 0x1C5440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5440u;
label_1c5440:
    // 0x1c5440: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5444: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1c5444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c5448: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c544c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C544Cu;
    SET_GPR_U32(ctx, 31, 0x1C5454u);
    ctx->pc = 0x1C5450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C544Cu;
    // 0x1c5450: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C544Cu, 0x1C5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5454u;
label_1c5454:
    // 0x1c5454: 0x0  nop
    ctx->pc = 0x1c5454u;
    // NOP
label_1c5458:
    // 0x1c5458: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1c5458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1c545c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c545cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c5460: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c5460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c5464: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c5464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5468: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5468u;
    SET_GPR_U32(ctx, 31, 0x1C5470u);
    ctx->pc = 0x1C546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5468u;
    // 0x1c546c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5468u, 0x1C5470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5470u;
label_1c5470:
    // 0x1c5470: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1c5470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c5474: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1c5474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c5478: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c547c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C547Cu;
    SET_GPR_U32(ctx, 31, 0x1C5484u);
    ctx->pc = 0x1C5480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C547Cu;
    // 0x1c5480: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C547Cu, 0x1C5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5484u;
label_1c5484:
    // 0x1c5484: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x1C5484u;
    {
        const bool branch_taken_0x1c5484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5484) {
            ctx->pc = 0x1C56D8u;
            goto label_1c56d8;
        }
    }
    ctx->pc = 0x1C548Cu;
    // 0x1c548c: 0x0  nop
    ctx->pc = 0x1c548cu;
    // NOP
label_1c5490:
    // 0x1c5490: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c5490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c5494: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c5494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c5498: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x1c5498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1c549c: 0xc041442  jal         func_105108
    ctx->pc = 0x1C549Cu;
    SET_GPR_U32(ctx, 31, 0x1C54A4u);
    ctx->pc = 0x1C54A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C549Cu;
    // 0x1c54a0: 0x244504c0  addiu       $a1, $v0, 0x4C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C549Cu, 0x1C54A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C54A4u;
label_1c54a4:
    // 0x1c54a4: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c54a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c54a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c54ac: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x1c54acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1c54b0: 0xc041442  jal         func_105108
    ctx->pc = 0x1C54B0u;
    SET_GPR_U32(ctx, 31, 0x1C54B8u);
    ctx->pc = 0x1C54B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C54B0u;
    // 0x1c54b4: 0x244504c0  addiu       $a1, $v0, 0x4C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C54B0u, 0x1C54B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C54B8u;
label_1c54b8:
    // 0x1c54b8: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c54b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c54bc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c54bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c54c0: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1c54c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1c54c4: 0xc041442  jal         func_105108
    ctx->pc = 0x1C54C4u;
    SET_GPR_U32(ctx, 31, 0x1C54CCu);
    ctx->pc = 0x1C54C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C54C4u;
    // 0x1c54c8: 0x244504c0  addiu       $a1, $v0, 0x4C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C54C4u, 0x1C54CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C54CCu;
label_1c54cc:
    // 0x1c54cc: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1c54ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c54d0: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1c54d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1c54d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c54d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c54d8: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c54dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c54dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c54e0: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c54e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c54e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c54e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c54e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c54ec: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x1c54ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1c54f0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c54f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c54f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c54f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c54f8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1c54f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c54fc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c54fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5500: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c5500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c5504: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C5504u;
    SET_GPR_U32(ctx, 31, 0x1C550Cu);
    ctx->pc = 0x1C5508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5504u;
    // 0x1c5508: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C5504u, 0x1C550Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C550Cu;
label_1c550c:
    // 0x1c550c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c5510: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C5510u;
    SET_GPR_U32(ctx, 31, 0x1C5518u);
    ctx->pc = 0x1C5514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5510u;
    // 0x1c5514: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C5510u, 0x1C5518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5518u;
label_1c5518:
    // 0x1c5518: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x1c5518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
    // 0x1c551c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c551cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5520: 0x0  nop
    ctx->pc = 0x1c5520u;
    // NOP
    // 0x1c5524: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c5524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5528: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1C5528u;
    {
        const bool branch_taken_0x1c5528 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5528u;
        // 0x1c552c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5528) {
            ctx->pc = 0x1C5558u;
            goto label_1c5558;
        }
    }
    ctx->pc = 0x1C5530u;
    // 0x1c5530: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c5530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c5534: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5534u;
    SET_GPR_U32(ctx, 31, 0x1C553Cu);
    ctx->pc = 0x1C5538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5534u;
    // 0x1c5538: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5534u, 0x1C553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C553Cu;
label_1c553c:
    // 0x1c553c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5540: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c5540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c5544: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5548: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5548u;
    SET_GPR_U32(ctx, 31, 0x1C5550u);
    ctx->pc = 0x1C554Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5548u;
    // 0x1c554c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5548u, 0x1C5550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5550u;
label_1c5550:
    // 0x1c5550: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C5550u;
    {
        const bool branch_taken_0x1c5550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5550) {
            ctx->pc = 0x1C55B8u;
            goto label_1c55b8;
        }
    }
    ctx->pc = 0x1C5558u;
label_1c5558:
    // 0x1c5558: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c5558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c555c: 0x0  nop
    ctx->pc = 0x1c555cu;
    // NOP
    // 0x1c5560: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c5560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5564: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1C5564u;
    {
        const bool branch_taken_0x1c5564 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5564u;
        // 0x1c5568: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5564) {
            ctx->pc = 0x1C55B8u;
            goto label_1c55b8;
        }
    }
    ctx->pc = 0x1C556Cu;
    // 0x1c556c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c556cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c5570: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5570u;
    SET_GPR_U32(ctx, 31, 0x1C5578u);
    ctx->pc = 0x1C5574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5570u;
    // 0x1c5574: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5570u, 0x1C5578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5578u;
label_1c5578:
    // 0x1c5578: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c557c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c557cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c5580: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5584: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5584u;
    SET_GPR_U32(ctx, 31, 0x1C558Cu);
    ctx->pc = 0x1C5588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5584u;
    // 0x1c5588: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5584u, 0x1C558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C558Cu;
label_1c558c:
    // 0x1c558c: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x1c558cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
    // 0x1c5590: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c5590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c5594: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c5594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5598: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5598u;
    SET_GPR_U32(ctx, 31, 0x1C55A0u);
    ctx->pc = 0x1C559Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5598u;
    // 0x1c559c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5598u, 0x1C55A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55A0u;
label_1c55a0:
    // 0x1c55a0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1c55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c55a4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c55a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c55a8: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c55a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c55ac: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C55ACu;
    SET_GPR_U32(ctx, 31, 0x1C55B4u);
    ctx->pc = 0x1C55B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C55ACu;
    // 0x1c55b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C55ACu, 0x1C55B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55B4u;
label_1c55b4:
    // 0x1c55b4: 0x0  nop
    ctx->pc = 0x1c55b4u;
    // NOP
label_1c55b8:
    // 0x1c55b8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c55b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c55bc: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C55BCu;
    SET_GPR_U32(ctx, 31, 0x1C55C4u);
    ctx->pc = 0x1C55C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C55BCu;
    // 0x1c55c0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C55BCu, 0x1C55C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55C4u;
label_1c55c4:
    // 0x1c55c4: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1c55c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x1c55c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c55c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c55cc: 0x0  nop
    ctx->pc = 0x1c55ccu;
    // NOP
    // 0x1c55d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c55d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c55d4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1C55D4u;
    {
        const bool branch_taken_0x1c55d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C55D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55D4u;
        // 0x1c55d8: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55d4) {
            ctx->pc = 0x1C5600u;
            goto label_1c5600;
        }
    }
    ctx->pc = 0x1C55DCu;
    // 0x1c55dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c55dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c55e0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C55E0u;
    SET_GPR_U32(ctx, 31, 0x1C55E8u);
    ctx->pc = 0x1C55E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C55E0u;
    // 0x1c55e4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C55E0u, 0x1C55E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55E8u;
label_1c55e8:
    // 0x1c55e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c55ec: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c55ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c55f0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c55f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c55f4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C55F4u;
    SET_GPR_U32(ctx, 31, 0x1C55FCu);
    ctx->pc = 0x1C55F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C55F4u;
    // 0x1c55f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C55F4u, 0x1C55FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55FCu;
label_1c55fc:
    // 0x1c55fc: 0x0  nop
    ctx->pc = 0x1c55fcu;
    // NOP
label_1c5600:
    // 0x1c5600: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1C5600u;
    SET_GPR_U32(ctx, 31, 0x1C5608u);
    ctx->pc = 0x1C5604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5600u;
    // 0x1c5604: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1C5600u, 0x1C5608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5608u;
label_1c5608:
    // 0x1c5608: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c5608u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c560c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c560cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c5610: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1C5610u;
    SET_GPR_U32(ctx, 31, 0x1C5618u);
    ctx->pc = 0x1C5614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5610u;
    // 0x1c5614: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1C5610u, 0x1C5618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5618u;
label_1c5618:
    // 0x1c5618: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c5618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c561c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C561Cu;
    SET_GPR_U32(ctx, 31, 0x1C5624u);
    ctx->pc = 0x1C5620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C561Cu;
    // 0x1c5620: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C561Cu, 0x1C5624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5624u;
label_1c5624:
    // 0x1c5624: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c5624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5628: 0x0  nop
    ctx->pc = 0x1c5628u;
    // NOP
    // 0x1c562c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c562cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5630: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5630u;
    {
        const bool branch_taken_0x1c5630 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5630u;
        // 0x1c5634: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5630) {
            ctx->pc = 0x1C563Cu;
            goto label_1c563c;
        }
    }
    ctx->pc = 0x1C5638u;
    // 0x1c5638: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1c5638u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1c563c:
    // 0x1c563c: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x1c563cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x1c5640: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c5640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1c5644: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c5644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c5648: 0x0  nop
    ctx->pc = 0x1c5648u;
    // NOP
    // 0x1c564c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1c564cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5650: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x1C5650u;
    {
        const bool branch_taken_0x1c5650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5650) {
            ctx->pc = 0x1C56A8u;
            goto label_1c56a8;
        }
    }
    ctx->pc = 0x1C5658u;
    // 0x1c5658: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c5658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c565c: 0x0  nop
    ctx->pc = 0x1c565cu;
    // NOP
    // 0x1c5660: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c5660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5664: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5664u;
    {
        const bool branch_taken_0x1c5664 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5664) {
            ctx->pc = 0x1C5678u;
            goto label_1c5678;
        }
    }
    ctx->pc = 0x1C566Cu;
    // 0x1c566c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C566Cu;
    {
        const bool branch_taken_0x1c566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C566Cu;
        // 0x1c5670: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c566c) {
            ctx->pc = 0x1C5680u;
            goto label_1c5680;
        }
    }
    ctx->pc = 0x1C5674u;
    // 0x1c5674: 0x0  nop
    ctx->pc = 0x1c5674u;
    // NOP
label_1c5678:
    // 0x1c5678: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c5678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c567c: 0x0  nop
    ctx->pc = 0x1c567cu;
    // NOP
label_1c5680:
    // 0x1c5680: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c5680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c5684: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x1c5684u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c5688: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5688u;
    SET_GPR_U32(ctx, 31, 0x1C5690u);
    ctx->pc = 0x1C568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5688u;
    // 0x1c568c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5688u, 0x1C5690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5690u;
label_1c5690:
    // 0x1c5690: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5694: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c5694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c5698: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c569c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C569Cu;
    SET_GPR_U32(ctx, 31, 0x1C56A4u);
    ctx->pc = 0x1C56A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C569Cu;
    // 0x1c56a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C569Cu, 0x1C56A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56A4u;
label_1c56a4:
    // 0x1c56a4: 0x0  nop
    ctx->pc = 0x1c56a4u;
    // NOP
label_1c56a8:
    // 0x1c56a8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1c56a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1c56ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c56acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c56b0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c56b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c56b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c56b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c56b8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C56B8u;
    SET_GPR_U32(ctx, 31, 0x1C56C0u);
    ctx->pc = 0x1C56BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56B8u;
    // 0x1c56bc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C56B8u, 0x1C56C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56C0u;
label_1c56c0:
    // 0x1c56c0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1c56c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c56c4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c56c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c56c8: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c56c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c56cc: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C56CCu;
    SET_GPR_U32(ctx, 31, 0x1C56D4u);
    ctx->pc = 0x1C56D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56CCu;
    // 0x1c56d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C56CCu, 0x1C56D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56D4u;
label_1c56d4:
    // 0x1c56d4: 0x0  nop
    ctx->pc = 0x1c56d4u;
    // NOP
label_1c56d8:
    // 0x1c56d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c56d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c56dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c56dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c56e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c56e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c56e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c56e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c56e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c56e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c56ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C56ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56ECu;
        // 0x1c56f0: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C56ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C56F4u;
}
