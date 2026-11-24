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

// Function: sub_00159910
// Address: 0x159910 - 0x159c28
void sub_00159910_0x159910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159910_0x159910");
#endif

    switch (ctx->pc) {
        case 0x1599bcu: goto label_1599bc;
        case 0x1599d8u: goto label_1599d8;
        case 0x159a04u: goto label_159a04;
        case 0x159a50u: goto label_159a50;
        case 0x159a7cu: goto label_159a7c;
        case 0x159a90u: goto label_159a90;
        case 0x159ad4u: goto label_159ad4;
        case 0x159b04u: goto label_159b04;
        case 0x159b2cu: goto label_159b2c;
        case 0x159b38u: goto label_159b38;
        default: break;
    }

    ctx->pc = 0x159910u;

    // 0x159910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x159914: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159918: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x159918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15991c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159924: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x159924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15992c: 0x8c221814  lw          $v0, 0x1814($at)
    ctx->pc = 0x15992cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x811814u));
    // 0x159930: 0x8f908610  lw          $s0, -0x79F0($gp)
    ctx->pc = 0x159930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x159934: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x159934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x159938: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x159938u;
    {
        const bool branch_taken_0x159938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159938u;
        // 0x15993c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159938) {
            ctx->pc = 0x159958u;
            goto label_159958;
        }
    }
    ctx->pc = 0x159940u;
    // 0x159940: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x159940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x159944: 0x8c225f08  lw          $v0, 0x5F08($at)
    ctx->pc = 0x159944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695F08u));
    // 0x159948: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x159948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x15994c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15994Cu;
    {
        const bool branch_taken_0x15994c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15994Cu;
        // 0x159950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15994c) {
            ctx->pc = 0x159958u;
            goto label_159958;
        }
    }
    ctx->pc = 0x159954u;
    // 0x159954: 0xa2020338  sb          $v0, 0x338($s0)
    ctx->pc = 0x159954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 824), (uint8_t)GPR_U32(ctx, 2));
label_159958:
    // 0x159958: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x15995c: 0x842495a6  lh          $a0, -0x6A5A($at)
    ctx->pc = 0x15995cu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x8095A6u));
    // 0x159960: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x159960u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x159964: 0x102000a8  beqz        $at, . + 4 + (0xA8 << 2)
    ctx->pc = 0x159964u;
    {
        const bool branch_taken_0x159964 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x159968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159964u;
        // 0x159968: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159964) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x15996Cu;
    // 0x15996c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x15996cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x159970: 0x24635150  addiu       $v1, $v1, 0x5150
    ctx->pc = 0x159970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20816));
    // 0x159974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159978: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x159978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15997c: 0x400008  jr          $v0
    ctx->pc = 0x15997Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159988u: goto label_159988;
            case 0x1599A0u: goto label_1599a0;
            case 0x159A70u: goto label_159a70;
            case 0x159B20u: goto label_159b20;
            case 0x159B90u: goto label_159b90;
            case 0x159BD0u: goto label_159bd0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15997Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x159984u;
    // 0x159984: 0x0  nop
    ctx->pc = 0x159984u;
    // NOP
label_159988:
    // 0x159988: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x159988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15998c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x15998cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159990: 0xa42295a6  sh          $v0, -0x6A5A($at)
    ctx->pc = 0x159990u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8095A6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8095A6u, _value); } while (0);
    // 0x159994: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x159994u;
    {
        const bool branch_taken_0x159994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159994u;
        // 0x159998: 0xae000320  sw          $zero, 0x320($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159994) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x15999Cu;
    // 0x15999c: 0x0  nop
    ctx->pc = 0x15999cu;
    // NOP
label_1599a0:
    // 0x1599a0: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1599a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1599a4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1599a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1599a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1599a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1599ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1599acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1599b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1599b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1599b4: 0xc06390c  jal         func_18E430
    ctx->pc = 0x1599B4u;
    SET_GPR_U32(ctx, 31, 0x1599BCu);
    ctx->pc = 0x1599B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1599B4u;
    // 0x1599b8: 0x3c0501b2  lui         $a1, 0x1B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E430u, 0x1599B4u, 0x1599BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1599BCu;
label_1599bc:
    // 0x1599bc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1599bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1599c0: 0x3c0501b2  lui         $a1, 0x1B2
    ctx->pc = 0x1599c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    // 0x1599c4: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x1599c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x1599c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1599c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1599cc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1599ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1599d0: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x1599D0u;
    SET_GPR_U32(ctx, 31, 0x1599D8u);
    ctx->pc = 0x1599D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1599D0u;
    // 0x1599d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x1599D0u, 0x1599D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1599D8u;
label_1599d8:
    // 0x1599d8: 0xae02033c  sw          $v0, 0x33C($s0)
    ctx->pc = 0x1599d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
    // 0x1599dc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1599dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1599e0: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1599e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1599e4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x1599e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x1599e8: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x1599e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
    // 0x1599ec: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x1599ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1599f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1599f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1599f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1599f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599fc: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x1599FCu;
    SET_GPR_U32(ctx, 31, 0x159A04u);
    ctx->pc = 0x159A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1599FCu;
    // 0x159a00: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x1599FCu, 0x159A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A04u;
label_159a04:
    // 0x159a04: 0x8e030320  lw          $v1, 0x320($s0)
    ctx->pc = 0x159a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x159a08: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x159a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x159a0c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x159a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x159a10: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159A10u;
    {
        const bool branch_taken_0x159a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A10u;
        // 0x159a14: 0x240200d2  addiu       $v0, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a10) {
            ctx->pc = 0x159A20u;
            goto label_159a20;
        }
    }
    ctx->pc = 0x159A18u;
    // 0x159a18: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x159a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
    // 0x159a1c: 0x0  nop
    ctx->pc = 0x159a1cu;
    // NOP
label_159a20:
    // 0x159a20: 0x8e030320  lw          $v1, 0x320($s0)
    ctx->pc = 0x159a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x159a24: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x159a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x159a28: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x159a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x159a2c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x159A2Cu;
    {
        const bool branch_taken_0x159a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A2Cu;
        // 0x159a30: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a2c) {
            ctx->pc = 0x159A58u;
            goto label_159a58;
        }
    }
    ctx->pc = 0x159A34u;
    // 0x159a34: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x159a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x159a38: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x159a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x159a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a48: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x159A48u;
    SET_GPR_U32(ctx, 31, 0x159A50u);
    ctx->pc = 0x159A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A48u;
    // 0x159a4c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x159A48u, 0x159A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A50u;
label_159a50:
    // 0x159a50: 0x2402010e  addiu       $v0, $zero, 0x10E
    ctx->pc = 0x159a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x159a54: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x159a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
label_159a58:
    // 0x159a58: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159a5c: 0x842295a6  lh          $v0, -0x6A5A($at)
    ctx->pc = 0x159a5cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8095A6u));
    // 0x159a60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159a64: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159a68: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x159A68u;
    {
        const bool branch_taken_0x159a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A68u;
        // 0x159a6c: 0xa42295a6  sh          $v0, -0x6A5A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940070), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a68) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x159A70u;
label_159a70:
    // 0x159a70: 0x8e04033c  lw          $a0, 0x33C($s0)
    ctx->pc = 0x159a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
    // 0x159a74: 0xc0568d8  jal         func_15A360
    ctx->pc = 0x159A74u;
    SET_GPR_U32(ctx, 31, 0x159A7Cu);
    ctx->pc = 0x159A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A74u;
    // 0x159a78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A360u, 0x159A74u, 0x159A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A7Cu;
label_159a7c:
    // 0x159a7c: 0x82020338  lb          $v0, 0x338($s0)
    ctx->pc = 0x159a7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x159a80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x159A80u;
    {
        const bool branch_taken_0x159a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A80u;
        // 0x159a84: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a80) {
            ctx->pc = 0x159AA0u;
            goto label_159aa0;
        }
    }
    ctx->pc = 0x159A88u;
    // 0x159a88: 0xc063d48  jal         func_18F520
    ctx->pc = 0x159A88u;
    SET_GPR_U32(ctx, 31, 0x159A90u);
    ctx->pc = 0x159A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A88u;
    // 0x159a8c: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x159A88u, 0x159A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A90u;
label_159a90:
    // 0x159a90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159A90u;
    {
        const bool branch_taken_0x159a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159a90) {
            ctx->pc = 0x159AA0u;
            goto label_159aa0;
        }
    }
    ctx->pc = 0x159A98u;
    // 0x159a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159a9c: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x159a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
label_159aa0:
    // 0x159aa0: 0x8e02032c  lw          $v0, 0x32C($s0)
    ctx->pc = 0x159aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x159aa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x159aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x159aa8: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x159aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
    // 0x159aac: 0x8e02032c  lw          $v0, 0x32C($s0)
    ctx->pc = 0x159aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x159ab0: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x159AB0u;
    {
        const bool branch_taken_0x159ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AB0u;
        // 0x159ab4: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ab0) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x159AB8u;
    // 0x159ab8: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x159ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x159abc: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x159abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x159ac0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159ac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ac8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159ac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159acc: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x159ACCu;
    SET_GPR_U32(ctx, 31, 0x159AD4u);
    ctx->pc = 0x159AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159ACCu;
    // 0x159ad0: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x159ACCu, 0x159AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159AD4u;
label_159ad4:
    // 0x159ad4: 0x8e030320  lw          $v1, 0x320($s0)
    ctx->pc = 0x159ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x159ad8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x159ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x159adc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x159adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x159ae0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x159AE0u;
    {
        const bool branch_taken_0x159ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AE0u;
        // 0x159ae4: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ae0) {
            ctx->pc = 0x159B08u;
            goto label_159b08;
        }
    }
    ctx->pc = 0x159AE8u;
    // 0x159ae8: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x159ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x159aec: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x159aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x159af0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159af4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159af4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159af8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159af8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159afc: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x159AFCu;
    SET_GPR_U32(ctx, 31, 0x159B04u);
    ctx->pc = 0x159B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159AFCu;
    // 0x159b00: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x159AFCu, 0x159B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B04u;
label_159b04:
    // 0x159b04: 0x0  nop
    ctx->pc = 0x159b04u;
    // NOP
label_159b08:
    // 0x159b08: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159b0c: 0x842295a6  lh          $v0, -0x6A5A($at)
    ctx->pc = 0x159b0cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8095A6u));
    // 0x159b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159b14: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159b18: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x159B18u;
    {
        const bool branch_taken_0x159b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B18u;
        // 0x159b1c: 0xa42295a6  sh          $v0, -0x6A5A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940070), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b18) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x159B20u;
label_159b20:
    // 0x159b20: 0x8e04033c  lw          $a0, 0x33C($s0)
    ctx->pc = 0x159b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
    // 0x159b24: 0xc0568d8  jal         func_15A360
    ctx->pc = 0x159B24u;
    SET_GPR_U32(ctx, 31, 0x159B2Cu);
    ctx->pc = 0x159B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159B24u;
    // 0x159b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A360u, 0x159B24u, 0x159B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B2Cu;
label_159b2c:
    // 0x159b2c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x159b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x159b30: 0xc063d48  jal         func_18F520
    ctx->pc = 0x159B30u;
    SET_GPR_U32(ctx, 31, 0x159B38u);
    ctx->pc = 0x159B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159B30u;
    // 0x159b34: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x159B30u, 0x159B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B38u;
label_159b38:
    // 0x159b38: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x159B38u;
    {
        const bool branch_taken_0x159b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159b38) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x159B40u;
    // 0x159b40: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x159b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x159b44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159b48: 0xae020320  sw          $v0, 0x320($s0)
    ctx->pc = 0x159b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 2));
    // 0x159b4c: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x159b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x159b50: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x159b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x159b54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x159B54u;
    {
        const bool branch_taken_0x159b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B54u;
        // 0x159b58: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b54) {
            ctx->pc = 0x159B70u;
            goto label_159b70;
        }
    }
    ctx->pc = 0x159B5Cu;
    // 0x159b5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x159b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x159b60: 0xae03032c  sw          $v1, 0x32C($s0)
    ctx->pc = 0x159b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 3));
    // 0x159b64: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159b68: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x159B68u;
    {
        const bool branch_taken_0x159b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B68u;
        // 0x159b6c: 0xa42295a6  sh          $v0, -0x6A5A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940070), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b68) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x159B70u;
label_159b70:
    // 0x159b70: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x159b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x159b74: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x159b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
    // 0x159b78: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159b7c: 0x842295a6  lh          $v0, -0x6A5A($at)
    ctx->pc = 0x159b7cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8095A6u));
    // 0x159b80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159b84: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159b88: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x159B88u;
    {
        const bool branch_taken_0x159b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B88u;
        // 0x159b8c: 0xa42295a6  sh          $v0, -0x6A5A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940070), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b88) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x159B90u;
label_159b90:
    // 0x159b90: 0x82020338  lb          $v0, 0x338($s0)
    ctx->pc = 0x159b90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x159b94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159B94u;
    {
        const bool branch_taken_0x159b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B94u;
        // 0x159b98: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b94) {
            ctx->pc = 0x159BA8u;
            goto label_159ba8;
        }
    }
    ctx->pc = 0x159B9Cu;
    // 0x159b9c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159ba0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x159BA0u;
    {
        const bool branch_taken_0x159ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BA0u;
        // 0x159ba4: 0xa42295a6  sh          $v0, -0x6A5A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940070), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ba0) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x159BA8u;
label_159ba8:
    // 0x159ba8: 0x8e02032c  lw          $v0, 0x32C($s0)
    ctx->pc = 0x159ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x159bac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x159bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x159bb0: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x159bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
    // 0x159bb4: 0x8e02032c  lw          $v0, 0x32C($s0)
    ctx->pc = 0x159bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x159bb8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x159BB8u;
    {
        const bool branch_taken_0x159bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BB8u;
        // 0x159bbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bb8) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x159BC0u;
    // 0x159bc0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159bc4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x159BC4u;
    {
        const bool branch_taken_0x159bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BC4u;
        // 0x159bc8: 0xa42295a6  sh          $v0, -0x6A5A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940070), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bc4) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x159BCCu;
    // 0x159bcc: 0x0  nop
    ctx->pc = 0x159bccu;
    // NOP
label_159bd0:
    // 0x159bd0: 0x82020338  lb          $v0, 0x338($s0)
    ctx->pc = 0x159bd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x159bd4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x159BD4u;
    {
        const bool branch_taken_0x159bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BD4u;
        // 0x159bd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bd4) {
            ctx->pc = 0x159BE0u;
            goto label_159be0;
        }
    }
    ctx->pc = 0x159BDCu;
    // 0x159bdc: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x159bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
label_159be0:
    // 0x159be0: 0x8e02032c  lw          $v0, 0x32C($s0)
    ctx->pc = 0x159be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x159be4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x159be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x159be8: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x159be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
    // 0x159bec: 0x8e02032c  lw          $v0, 0x32C($s0)
    ctx->pc = 0x159becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x159bf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159BF0u;
    {
        const bool branch_taken_0x159bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BF0u;
        // 0x159bf4: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bf0) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x159BF8u;
    // 0x159bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159bfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x159BFCu;
    {
        const bool branch_taken_0x159bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BFCu;
        // 0x159c00: 0xa42095a6  sh          $zero, -0x6A5A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940070), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bfc) {
            ctx->pc = 0x159C10u;
            goto label_159c10;
        }
    }
    ctx->pc = 0x159C04u;
    // 0x159c04: 0x0  nop
    ctx->pc = 0x159c04u;
    // NOP
label_159c08:
    // 0x159c08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x159c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c0c: 0x0  nop
    ctx->pc = 0x159c0cu;
    // NOP
label_159c10:
    // 0x159c10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x159c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159c14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159c18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159c20: 0x3e00008  jr          $ra
    ctx->pc = 0x159C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C20u;
        // 0x159c24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159C28u;
}
