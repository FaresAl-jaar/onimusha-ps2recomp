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

// Function: sub_00131E90
// Address: 0x131e90 - 0x131fcc
void sub_00131E90_0x131e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131E90_0x131e90");
#endif

    switch (ctx->pc) {
        case 0x131ee0u: goto label_131ee0;
        case 0x131f5cu: goto label_131f5c;
        case 0x131fb4u: goto label_131fb4;
        case 0x131fbcu: goto label_131fbc;
        default: break;
    }

    ctx->pc = 0x131e90u;

    // 0x131e90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x131e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x131e94: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131e98: 0x344b0013  ori         $t3, $v0, 0x13
    ctx->pc = 0x131e98u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
    // 0x131e9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131ea0: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x131ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x131ea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131ea8: 0x34490288  ori         $t1, $v0, 0x288
    ctx->pc = 0x131ea8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)648);
    // 0x131eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x131eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131eb0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x131eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x131eb4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x131eb4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131eb8: 0x344800b0  ori         $t0, $v0, 0xB0
    ctx->pc = 0x131eb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    // 0x131ebc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x131ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x131ec0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x131ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x131ec4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x131ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x131ec8: 0x344703ee  ori         $a3, $v0, 0x3EE
    ctx->pc = 0x131ec8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1006);
    // 0x131ecc: 0x3c026c10  lui         $v0, 0x6C10
    ctx->pc = 0x131eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27664 << 16));
    // 0x131ed0: 0x344603f0  ori         $a2, $v0, 0x3F0
    ctx->pc = 0x131ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1008);
    // 0x131ed4: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x131ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x131ed8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x131ED8u;
    {
        const bool branch_taken_0x131ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131ED8u;
        // 0x131edc: 0x344503ee  ori         $a1, $v0, 0x3EE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1006);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ed8) {
            ctx->pc = 0x131F48u;
            goto label_131f48;
        }
    }
    ctx->pc = 0x131EE0u;
label_131ee0:
    // 0x131ee0: 0xc10c0  sll         $v0, $t4, 3
    ctx->pc = 0x131ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x131ee4: 0x4c5023  subu        $t2, $v0, $t4
    ctx->pc = 0x131ee4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x131ee8: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x131ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x131eec: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x131eecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x131ef0: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x131ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x131ef4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x131ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x131ef8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x131ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x131efc: 0xfc4b0000  sd          $t3, 0x0($v0)
    ctx->pc = 0x131efcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 11));
    // 0x131f00: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x131f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x131f04: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x131f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x131f08: 0xac490010  sw          $t1, 0x10($v0)
    ctx->pc = 0x131f08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
    // 0x131f0c: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x131f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x131f10: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x131f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x131f14: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x131f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x131f18: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x131f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x131f1c: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x131f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
    // 0x131f20: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x131f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x131f24: 0xac45012c  sw          $a1, 0x12C($v0)
    ctx->pc = 0x131f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 5));
    // 0x131f28: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x131f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x131f2c: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x131f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x131f30: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x131f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
    // 0x131f34: 0xac44013c  sw          $a0, 0x13C($v0)
    ctx->pc = 0x131f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 4));
    // 0x131f38: 0xfc430140  sd          $v1, 0x140($v0)
    ctx->pc = 0x131f38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 320), GPR_U64(ctx, 3));
    // 0x131f3c: 0xac400148  sw          $zero, 0x148($v0)
    ctx->pc = 0x131f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 0));
    // 0x131f40: 0xac40014c  sw          $zero, 0x14C($v0)
    ctx->pc = 0x131f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 0));
    // 0x131f44: 0x0  nop
    ctx->pc = 0x131f44u;
    // NOP
label_131f48:
    // 0x131f48: 0x29820002  slti        $v0, $t4, 0x2
    ctx->pc = 0x131f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x131f4c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x131F4Cu;
    {
        const bool branch_taken_0x131f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131f4c) {
            ctx->pc = 0x131EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131ee0;
        }
    }
    ctx->pc = 0x131F54u;
    // 0x131f54: 0xc04150c  jal         func_105430
    ctx->pc = 0x131F54u;
    SET_GPR_U32(ctx, 31, 0x131F5Cu);
    ctx->pc = 0x131F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F54u;
    // 0x131f58: 0x260404e0  addiu       $a0, $s0, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x131F54u, 0x131F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F5Cu;
label_131f5c:
    // 0x131f5c: 0x260603e0  addiu       $a2, $s0, 0x3E0
    ctx->pc = 0x131f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
    // 0x131f60: 0x260504e0  addiu       $a1, $s0, 0x4E0
    ctx->pc = 0x131f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x131f64: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x131f64u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131f68: 0x260204e0  addiu       $v0, $s0, 0x4E0
    ctx->pc = 0x131f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x131f6c: 0x26030420  addiu       $v1, $s0, 0x420
    ctx->pc = 0x131f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    // 0x131f70: 0x26040620  addiu       $a0, $s0, 0x620
    ctx->pc = 0x131f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x131f74: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x131f74u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x131f78: 0x78a70010  lq          $a3, 0x10($a1)
    ctx->pc = 0x131f78u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x131f7c: 0x7cc70010  sq          $a3, 0x10($a2)
    ctx->pc = 0x131f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 7));
    // 0x131f80: 0x78a70020  lq          $a3, 0x20($a1)
    ctx->pc = 0x131f80u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x131f84: 0x7cc70020  sq          $a3, 0x20($a2)
    ctx->pc = 0x131f84u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 7));
    // 0x131f88: 0x78a70030  lq          $a3, 0x30($a1)
    ctx->pc = 0x131f88u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x131f8c: 0x7cc70030  sq          $a3, 0x30($a2)
    ctx->pc = 0x131f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 7));
    // 0x131f90: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x131f90u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131f94: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x131f94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x131f98: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x131f98u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x131f9c: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x131f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x131fa0: 0x78450020  lq          $a1, 0x20($v0)
    ctx->pc = 0x131fa0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x131fa4: 0x7c650020  sq          $a1, 0x20($v1)
    ctx->pc = 0x131fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 5));
    // 0x131fa8: 0x78450030  lq          $a1, 0x30($v0)
    ctx->pc = 0x131fa8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x131fac: 0xc04c020  jal         func_130080
    ctx->pc = 0x131FACu;
    SET_GPR_U32(ctx, 31, 0x131FB4u);
    ctx->pc = 0x131FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131FACu;
    // 0x131fb0: 0x7c650030  sq          $a1, 0x30($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130080u, 0x131FACu, 0x131FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131FB4u;
label_131fb4:
    // 0x131fb4: 0xc04bc40  jal         func_12F100
    ctx->pc = 0x131FB4u;
    SET_GPR_U32(ctx, 31, 0x131FBCu);
    ctx->pc = 0x131FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131FB4u;
    // 0x131fb8: 0x260405a0  addiu       $a0, $s0, 0x5A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F100u, 0x131FB4u, 0x131FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131FBCu;
label_131fbc:
    // 0x131fbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x131FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131FC4u;
        // 0x131fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131FCCu;
}
