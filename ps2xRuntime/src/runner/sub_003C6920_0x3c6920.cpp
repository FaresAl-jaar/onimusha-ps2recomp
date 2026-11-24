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

// Function: sub_003C6920
// Address: 0x3c6920 - 0x3c6a30
void sub_003C6920_0x3c6920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6920_0x3c6920");
#endif

    switch (ctx->pc) {
        case 0x3c6948u: goto label_3c6948;
        case 0x3c6984u: goto label_3c6984;
        case 0x3c699cu: goto label_3c699c;
        case 0x3c69b8u: goto label_3c69b8;
        default: break;
    }

    ctx->pc = 0x3c6920u;

    // 0x3c6920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c6920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c6924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c6924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c6928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c6928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c692c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x3c692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3c6930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c6930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c6934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c6934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6938: 0xa083057c  sb          $v1, 0x57C($a0)
    ctx->pc = 0x3c6938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1404), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c693c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c693cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6940: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3C6940u;
    {
        const bool branch_taken_0x3c6940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6940u;
        // 0x3c6944: 0xac820568  sw          $v0, 0x568($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6940) {
            ctx->pc = 0x3C6970u;
            goto label_3c6970;
        }
    }
    ctx->pc = 0x3C6948u;
label_3c6948:
    // 0x3c6948: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3c6948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c694c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3c694cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3c6950: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3c6950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3c6954: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3c6954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3c6958: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3c6958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3c695c: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x3c695cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x3c6960: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3c6960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c6964: 0x946200c6  lhu         $v0, 0xC6($v1)
    ctx->pc = 0x3c6964u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 198)));
    // 0x3c6968: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3c6968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3c696c: 0xa46200c6  sh          $v0, 0xC6($v1)
    ctx->pc = 0x3c696cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 198), (uint16_t)GPR_U32(ctx, 2));
label_3c6970:
    // 0x3c6970: 0x2ca1003c  sltiu       $at, $a1, 0x3C
    ctx->pc = 0x3c6970u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x3c6974: 0x1420fff4  bnez        $at, . + 4 + (-0xC << 2)
    ctx->pc = 0x3C6974u;
    {
        const bool branch_taken_0x3c6974 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6974u;
        // 0x3c6978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6974) {
            ctx->pc = 0x3C6948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6948;
        }
    }
    ctx->pc = 0x3C697Cu;
    // 0x3c697c: 0xc0f1a90  jal         func_3C6A40
    ctx->pc = 0x3C697Cu;
    SET_GPR_U32(ctx, 31, 0x3C6984u);
    ctx->pc = 0x3C6A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6A40u, 0x3C697Cu, 0x3C6984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6984u;
label_3c6984:
    // 0x3c6984: 0x8e020568  lw          $v0, 0x568($s0)
    ctx->pc = 0x3c6984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x3c6988: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3c6988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3c698c: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x3c698cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x3c6990: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3c6990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c6994: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x3C6994u;
    SET_GPR_U32(ctx, 31, 0x3C699Cu);
    ctx->pc = 0x3C6998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6994u;
    // 0x3c6998: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x3C6994u, 0x3C699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C699Cu;
label_3c699c:
    // 0x3c699c: 0xae020574  sw          $v0, 0x574($s0)
    ctx->pc = 0x3c699cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1396), GPR_U32(ctx, 2));
    // 0x3c69a0: 0x8e030574  lw          $v1, 0x574($s0)
    ctx->pc = 0x3c69a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1396)));
    // 0x3c69a4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3C69A4u;
    {
        const bool branch_taken_0x3c69a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69A4u;
        // 0x3c69a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c69a4) {
            ctx->pc = 0x3C6A10u;
            goto label_3c6a10;
        }
    }
    ctx->pc = 0x3C69ACu;
    // 0x3c69ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3C69ACu;
    {
        const bool branch_taken_0x3c69ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c69ac) {
            ctx->pc = 0x3C69F8u;
            goto label_3c69f8;
        }
    }
    ctx->pc = 0x3C69B4u;
    // 0x3c69b4: 0x0  nop
    ctx->pc = 0x3c69b4u;
    // NOP
label_3c69b8:
    // 0x3c69b8: 0x8e030574  lw          $v1, 0x574($s0)
    ctx->pc = 0x3c69b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1396)));
    // 0x3c69bc: 0x72180  sll         $a0, $a3, 6
    ctx->pc = 0x3c69bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x3c69c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c69c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c69c4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3c69c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3c69c8: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x3c69c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x3c69cc: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x3c69ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3c69d0: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x3c69d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c69d4: 0x71980  sll         $v1, $a3, 6
    ctx->pc = 0x3c69d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x3c69d8: 0x8e040574  lw          $a0, 0x574($s0)
    ctx->pc = 0x3c69d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1396)));
    // 0x3c69dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3c69dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3c69e0: 0x8cc60074  lw          $a2, 0x74($a2)
    ctx->pc = 0x3c69e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
    // 0x3c69e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c69e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c69e8: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x3c69e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3c69ec: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3c69ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c69f0: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x3c69f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x3c69f4: 0x0  nop
    ctx->pc = 0x3c69f4u;
    // NOP
label_3c69f8:
    // 0x3c69f8: 0x8e030568  lw          $v1, 0x568($s0)
    ctx->pc = 0x3c69f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x3c69fc: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x3c69fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c6a00: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3C6A00u;
    {
        const bool branch_taken_0x3c6a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6a00) {
            ctx->pc = 0x3C69B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c69b8;
        }
    }
    ctx->pc = 0x3C6A08u;
    // 0x3c6a08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C6A08u;
    {
        const bool branch_taken_0x3c6a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6a08) {
            ctx->pc = 0x3C6A20u;
            goto label_3c6a20;
        }
    }
    ctx->pc = 0x3C6A10u;
label_3c6a10:
    // 0x3c6a10: 0x9203057c  lbu         $v1, 0x57C($s0)
    ctx->pc = 0x3c6a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1404)));
    // 0x3c6a14: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x3c6a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x3c6a18: 0xa203057c  sb          $v1, 0x57C($s0)
    ctx->pc = 0x3c6a18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1404), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c6a1c: 0x0  nop
    ctx->pc = 0x3c6a1cu;
    // NOP
label_3c6a20:
    // 0x3c6a20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c6a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c6a24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c6a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c6a28: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6A28u;
        // 0x3c6a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6A30u;
}
