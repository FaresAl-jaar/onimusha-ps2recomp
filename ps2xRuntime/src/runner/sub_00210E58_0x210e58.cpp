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

// Function: sub_00210E58
// Address: 0x210e58 - 0x210f5c
void sub_00210E58_0x210e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210E58_0x210e58");
#endif

    switch (ctx->pc) {
        case 0x210e98u: goto label_210e98;
        case 0x210ea0u: goto label_210ea0;
        case 0x210eacu: goto label_210eac;
        case 0x210ed0u: goto label_210ed0;
        case 0x210f00u: goto label_210f00;
        case 0x210f20u: goto label_210f20;
        default: break;
    }

    ctx->pc = 0x210e58u;

    // 0x210e58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x210e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x210e5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x210e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x210e60: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x210e60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e64: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x210e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x210e68: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x210e68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e6c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x210e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x210e70: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x210e70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e74: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x210e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x210e78: 0x293b021  addu        $s6, $s4, $s3
    ctx->pc = 0x210e78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x210e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210e80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x210e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x210e84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x210e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x210e88: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x210e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x210e8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x210e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x210e90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x210E90u;
    {
        const bool branch_taken_0x210e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E90u;
        // 0x210e94: 0x8eb70010  lw          $s7, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e90) {
            ctx->pc = 0x210EB8u;
            goto label_210eb8;
        }
    }
    ctx->pc = 0x210E98u;
label_210e98:
    // 0x210e98: 0xc0844ba  jal         func_2112E8
    ctx->pc = 0x210E98u;
    SET_GPR_U32(ctx, 31, 0x210EA0u);
    ctx->pc = 0x2112E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2112E8u, 0x210E98u, 0x210EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210EA0u;
label_210ea0:
    // 0x210ea0: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x210EA0u;
    {
        const bool branch_taken_0x210ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EA0u;
        // 0x210ea4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ea0) {
            ctx->pc = 0x210F34u;
            goto label_210f34;
        }
    }
    ctx->pc = 0x210EA8u;
    // 0x210ea8: 0x2541023  subu        $v0, $s2, $s4
    ctx->pc = 0x210ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_210eac:
    // 0x210eac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x210eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x210eb0: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x210eb0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x210eb4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x210eb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_210eb8:
    // 0x210eb8: 0x1a60001e  blez        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x210EB8u;
    {
        const bool branch_taken_0x210eb8 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x210EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EB8u;
        // 0x210ebc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210eb8) {
            ctx->pc = 0x210F34u;
            goto label_210f34;
        }
    }
    ctx->pc = 0x210EC0u;
    // 0x210ec0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x210ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ec4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x210ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ec8: 0xc0843d8  jal         func_210F60
    ctx->pc = 0x210EC8u;
    SET_GPR_U32(ctx, 31, 0x210ED0u);
    ctx->pc = 0x210ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210EC8u;
    // 0x210ecc: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F60u, 0x210EC8u, 0x210ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210ED0u;
label_210ed0:
    // 0x210ed0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x210ed0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ed8: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x210ED8u;
    {
        const bool branch_taken_0x210ed8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x210EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210ED8u;
        // 0x210edc: 0x2d22823  subu        $a1, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ed8) {
            ctx->pc = 0x210F30u;
            goto label_210f30;
        }
    }
    ctx->pc = 0x210EE0u;
    // 0x210ee0: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x210ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x210ee4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x210ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x210ee8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x210ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x210eec: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x210eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x210ef0: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x210EF0u;
    {
        const bool branch_taken_0x210ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210ef0) {
            ctx->pc = 0x210EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210EF0u;
            // 0x210ef4: 0x2541023  subu        $v0, $s2, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210EACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210eac;
        }
    }
    ctx->pc = 0x210EF8u;
    // 0x210ef8: 0xc0843f2  jal         func_210FC8
    ctx->pc = 0x210EF8u;
    SET_GPR_U32(ctx, 31, 0x210F00u);
    ctx->pc = 0x210EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210EF8u;
    // 0x210efc: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC8u, 0x210EF8u, 0x210F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F00u;
label_210f00:
    // 0x210f00: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x210f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x210f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f08: 0x2d11023  subu        $v0, $s6, $s1
    ctx->pc = 0x210f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x210f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f10: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x210f10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x210f14: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x210f14u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x210f18: 0xc084412  jal         func_211048
    ctx->pc = 0x210F18u;
    SET_GPR_U32(ctx, 31, 0x210F20u);
    ctx->pc = 0x210F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F18u;
    // 0x210f1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211048u, 0x210F18u, 0x210F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F20u;
label_210f20:
    // 0x210f20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f28: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x210F28u;
    {
        const bool branch_taken_0x210f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F28u;
        // 0x210f2c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f28) {
            ctx->pc = 0x210E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210e98;
        }
    }
    ctx->pc = 0x210F30u;
label_210f30:
    // 0x210f30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_210f34:
    // 0x210f34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210f38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x210f38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210f3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x210f3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210f40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x210f40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210f44: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x210f44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210f48: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x210f48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210f4c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x210f4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x210f50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x210f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210f54: 0x3e00008  jr          $ra
    ctx->pc = 0x210F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F54u;
        // 0x210f58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210F5Cu;
}
