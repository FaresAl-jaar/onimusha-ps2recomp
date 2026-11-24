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

// Function: sub_003A6950
// Address: 0x3a6950 - 0x3a6ad0
void sub_003A6950_0x3a6950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6950_0x3a6950");
#endif

    switch (ctx->pc) {
        case 0x3a69a4u: goto label_3a69a4;
        case 0x3a69b8u: goto label_3a69b8;
        case 0x3a69d0u: goto label_3a69d0;
        case 0x3a6a00u: goto label_3a6a00;
        case 0x3a6a08u: goto label_3a6a08;
        case 0x3a6a10u: goto label_3a6a10;
        case 0x3a6a18u: goto label_3a6a18;
        case 0x3a6a24u: goto label_3a6a24;
        case 0x3a6a38u: goto label_3a6a38;
        case 0x3a6a6cu: goto label_3a6a6c;
        default: break;
    }

    ctx->pc = 0x3a6950u;

    // 0x3a6950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a6950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a6954: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a6954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a6958: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a6958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a695c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a695cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a6960: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x3a6960u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3a6964: 0x10a30046  beq         $a1, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x3A6964u;
    {
        const bool branch_taken_0x3a6964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A6968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6964u;
        // 0x3a6968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6964) {
            ctx->pc = 0x3A6A80u;
            goto label_3a6a80;
        }
    }
    ctx->pc = 0x3A696Cu;
    // 0x3a696c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a696cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a6970: 0x10a3001d  beq         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A6970u;
    {
        const bool branch_taken_0x3a6970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6970u;
        // 0x3a6974: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6970) {
            ctx->pc = 0x3A69E8u;
            goto label_3a69e8;
        }
    }
    ctx->pc = 0x3A6978u;
    // 0x3a6978: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A6978u;
    {
        const bool branch_taken_0x3a6978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a6978) {
            ctx->pc = 0x3A69C8u;
            goto label_3a69c8;
        }
    }
    ctx->pc = 0x3A6980u;
    // 0x3a6980: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6980u;
    {
        const bool branch_taken_0x3a6980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6980) {
            ctx->pc = 0x3A6990u;
            goto label_3a6990;
        }
    }
    ctx->pc = 0x3A6988u;
    // 0x3a6988: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3A6988u;
    {
        const bool branch_taken_0x3a6988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6988) {
            ctx->pc = 0x3A6AC0u;
            goto label_3a6ac0;
        }
    }
    ctx->pc = 0x3A6990u;
label_3a6990:
    // 0x3a6990: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a6990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a6994: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a6994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a6998: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3a6998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a699c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A699Cu;
    SET_GPR_U32(ctx, 31, 0x3A69A4u);
    ctx->pc = 0x3A69A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A699Cu;
    // 0x3a69a0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A699Cu, 0x3A69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A69A4u;
label_3a69a4:
    // 0x3a69a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a69a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a69a8: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x3a69a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x3a69ac: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x3a69acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3a69b0: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A69B0u;
    SET_GPR_U32(ctx, 31, 0x3A69B8u);
    ctx->pc = 0x3A69B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A69B0u;
    // 0x3a69b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A69B0u, 0x3A69B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A69B8u;
label_3a69b8:
    // 0x3a69b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a69b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a69bc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3A69BCu;
    {
        const bool branch_taken_0x3a69bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A69C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A69BCu;
        // 0x3a69c0: 0xa6030012  sh          $v1, 0x12($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a69bc) {
            ctx->pc = 0x3A6AC0u;
            goto label_3a6ac0;
        }
    }
    ctx->pc = 0x3A69C4u;
    // 0x3a69c4: 0x0  nop
    ctx->pc = 0x3a69c4u;
    // NOP
label_3a69c8:
    // 0x3a69c8: 0xc0eabe4  jal         func_3AAF90
    ctx->pc = 0x3A69C8u;
    SET_GPR_U32(ctx, 31, 0x3A69D0u);
    ctx->pc = 0x3AAF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAF90u, 0x3A69C8u, 0x3A69D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A69D0u;
label_3a69d0:
    // 0x3a69d0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3A69D0u;
    {
        const bool branch_taken_0x3a69d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a69d0) {
            ctx->pc = 0x3A6AC0u;
            goto label_3a6ac0;
        }
    }
    ctx->pc = 0x3A69D8u;
    // 0x3a69d8: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3a69d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a69dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a69dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a69e0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3A69E0u;
    {
        const bool branch_taken_0x3a69e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A69E0u;
        // 0x3a69e4: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a69e0) {
            ctx->pc = 0x3A6AC0u;
            goto label_3a6ac0;
        }
    }
    ctx->pc = 0x3A69E8u;
label_3a69e8:
    // 0x3a69e8: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a69e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a69ec: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3A69ECu;
    {
        const bool branch_taken_0x3a69ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a69ec) {
            ctx->pc = 0x3A6AC0u;
            goto label_3a6ac0;
        }
    }
    ctx->pc = 0x3A69F4u;
    // 0x3a69f4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a69f8: 0xc0eaef8  jal         func_3ABBE0
    ctx->pc = 0x3A69F8u;
    SET_GPR_U32(ctx, 31, 0x3A6A00u);
    ctx->pc = 0x3A69FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A69F8u;
    // 0x3a69fc: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABBE0u, 0x3A69F8u, 0x3A6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6A00u;
label_3a6a00:
    // 0x3a6a00: 0xc0eaf40  jal         func_3ABD00
    ctx->pc = 0x3A6A00u;
    SET_GPR_U32(ctx, 31, 0x3A6A08u);
    ctx->pc = 0x3A6A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6A00u;
    // 0x3a6a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABD00u, 0x3A6A00u, 0x3A6A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6A08u;
label_3a6a08:
    // 0x3a6a08: 0xc0eaf78  jal         func_3ABDE0
    ctx->pc = 0x3A6A08u;
    SET_GPR_U32(ctx, 31, 0x3A6A10u);
    ctx->pc = 0x3A6A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6A08u;
    // 0x3a6a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABDE0u, 0x3A6A08u, 0x3A6A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6A10u;
label_3a6a10:
    // 0x3a6a10: 0xc0eaff4  jal         func_3ABFD0
    ctx->pc = 0x3A6A10u;
    SET_GPR_U32(ctx, 31, 0x3A6A18u);
    ctx->pc = 0x3A6A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6A10u;
    // 0x3a6a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABFD0u, 0x3A6A10u, 0x3A6A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6A18u;
label_3a6a18:
    // 0x3a6a18: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a6a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a6a1c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A6A1Cu;
    SET_GPR_U32(ctx, 31, 0x3A6A24u);
    ctx->pc = 0x3A6A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6A1Cu;
    // 0x3a6a20: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A6A1Cu, 0x3A6A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6A24u;
label_3a6a24:
    // 0x3a6a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a6a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a28: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x3a6a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3a6a2c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a6a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a6a30: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A6A30u;
    SET_GPR_U32(ctx, 31, 0x3A6A38u);
    ctx->pc = 0x3A6A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6A30u;
    // 0x3a6a34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A6A30u, 0x3A6A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6A38u;
label_3a6a38:
    // 0x3a6a38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a6a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a6a3c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a6a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a6a40: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a6a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a6a44: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a6a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a6a48: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x3a6a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x3a6a4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a6a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a50: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a6a50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a6a54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a6a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a6a58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a6a5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a6a60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a64: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A6A64u;
    SET_GPR_U32(ctx, 31, 0x3A6A6Cu);
    ctx->pc = 0x3A6A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6A64u;
    // 0x3a6a68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A6A64u, 0x3A6A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6A6Cu;
label_3a6a6c:
    // 0x3a6a6c: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x3a6a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a6a70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a6a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6a74: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3A6A74u;
    {
        const bool branch_taken_0x3a6a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A74u;
        // 0x3a6a78: 0xa2030047  sb          $v1, 0x47($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6a74) {
            ctx->pc = 0x3A6AC0u;
            goto label_3a6ac0;
        }
    }
    ctx->pc = 0x3A6A7Cu;
    // 0x3a6a7c: 0x0  nop
    ctx->pc = 0x3a6a7cu;
    // NOP
label_3a6a80:
    // 0x3a6a80: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a6a80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a6a84: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3A6A84u;
    {
        const bool branch_taken_0x3a6a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6a84) {
            ctx->pc = 0x3A6AC0u;
            goto label_3a6ac0;
        }
    }
    ctx->pc = 0x3A6A8Cu;
    // 0x3a6a8c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x3a6a8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a6a90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a6a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6a94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a6a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a6a98: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3a6a98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a6a9c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a6a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6aa0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a6aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6aa4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a6aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6aa8: 0xa603001a  sh          $v1, 0x1A($s0)
    ctx->pc = 0x3a6aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a6aac: 0x82030008  lb          $v1, 0x8($s0)
    ctx->pc = 0x3a6aacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a6ab0: 0xa2030059  sb          $v1, 0x59($s0)
    ctx->pc = 0x3a6ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a6ab4: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a6ab4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a6ab8: 0xa2030058  sb          $v1, 0x58($s0)
    ctx->pc = 0x3a6ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a6abc: 0x0  nop
    ctx->pc = 0x3a6abcu;
    // NOP
label_3a6ac0:
    // 0x3a6ac0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a6ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a6ac4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a6ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6AC8u;
        // 0x3a6acc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6AD0u;
}
