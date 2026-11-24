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

// Function: sub_00175900
// Address: 0x175900 - 0x175a78
void sub_00175900_0x175900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175900_0x175900");
#endif

    switch (ctx->pc) {
        case 0x175928u: goto label_175928;
        case 0x175980u: goto label_175980;
        case 0x17598cu: goto label_17598c;
        case 0x175a28u: goto label_175a28;
        case 0x175a34u: goto label_175a34;
        default: break;
    }

    ctx->pc = 0x175900u;

    // 0x175900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x175900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x175904: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175908: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x175908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17590c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17590cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x175910: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x175914: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x175914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17591c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17591cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x175924: 0x0  nop
    ctx->pc = 0x175924u;
    // NOP
label_175928:
    // 0x175928: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x175928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17592c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x17592cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x175930: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x175930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x175934: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x175934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x175938: 0x2ca30080  sltiu       $v1, $a1, 0x80
    ctx->pc = 0x175938u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x17593c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17593cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x175940: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x175940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x175944: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x175944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x175948: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x175948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x17594c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x17594cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x175950: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x175950u;
    {
        const bool branch_taken_0x175950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175950u;
        // 0x175954: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175950) {
            ctx->pc = 0x175928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175928;
        }
    }
    ctx->pc = 0x175958u;
    // 0x175958: 0x8e930224  lw          $s3, 0x224($s4)
    ctx->pc = 0x175958u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 548)));
    // 0x17595c: 0x12600028  beqz        $s3, . + 4 + (0x28 << 2)
    ctx->pc = 0x17595Cu;
    {
        const bool branch_taken_0x17595c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x17595c) {
            ctx->pc = 0x175A00u;
            goto label_175a00;
        }
    }
    ctx->pc = 0x175964u;
    // 0x175964: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x175964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x175968: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x175968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x17596c: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x17596cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x175970: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x175970u;
    {
        const bool branch_taken_0x175970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x175974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175970u;
        // 0x175974: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175970) {
            ctx->pc = 0x175A00u;
            goto label_175a00;
        }
    }
    ctx->pc = 0x175978u;
    // 0x175978: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x175978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17597c: 0x0  nop
    ctx->pc = 0x17597cu;
    // NOP
label_175980:
    // 0x175980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x175980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175984: 0xc059944  jal         func_166510
    ctx->pc = 0x175984u;
    SET_GPR_U32(ctx, 31, 0x17598Cu);
    ctx->pc = 0x175988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175984u;
    // 0x175988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166510u, 0x175984u, 0x17598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17598Cu;
label_17598c:
    // 0x17598c: 0x2e210080  sltiu       $at, $s1, 0x80
    ctx->pc = 0x17598cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x175990: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x175990u;
    {
        const bool branch_taken_0x175990 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x175990) {
            ctx->pc = 0x1759A0u;
            goto label_1759a0;
        }
    }
    ctx->pc = 0x175998u;
    // 0x175998: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x175998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17599c: 0x0  nop
    ctx->pc = 0x17599cu;
    // NOP
label_1759a0:
    // 0x1759a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1759A0u;
    {
        const bool branch_taken_0x1759a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1759a0) {
            ctx->pc = 0x1759E8u;
            goto label_1759e8;
        }
    }
    ctx->pc = 0x1759A8u;
    // 0x1759a8: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x1759a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1759ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1759acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1759b0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1759B0u;
    {
        const bool branch_taken_0x1759b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1759B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1759B0u;
        // 0x1759b4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1759b0) {
            ctx->pc = 0x1759E0u;
            goto label_1759e0;
        }
    }
    ctx->pc = 0x1759B8u;
    // 0x1759b8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1759B8u;
    {
        const bool branch_taken_0x1759b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1759b8) {
            ctx->pc = 0x1759E0u;
            goto label_1759e0;
        }
    }
    ctx->pc = 0x1759C0u;
    // 0x1759c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1759c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1759c4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1759C4u;
    {
        const bool branch_taken_0x1759c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1759C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1759C4u;
        // 0x1759c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1759c4) {
            ctx->pc = 0x1759E0u;
            goto label_1759e0;
        }
    }
    ctx->pc = 0x1759CCu;
    // 0x1759cc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1759CCu;
    {
        const bool branch_taken_0x1759cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1759cc) {
            ctx->pc = 0x1759E0u;
            goto label_1759e0;
        }
    }
    ctx->pc = 0x1759D4u;
    // 0x1759d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1759D4u;
    {
        const bool branch_taken_0x1759d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1759d4) {
            ctx->pc = 0x1759E8u;
            goto label_1759e8;
        }
    }
    ctx->pc = 0x1759DCu;
    // 0x1759dc: 0x0  nop
    ctx->pc = 0x1759dcu;
    // NOP
label_1759e0:
    // 0x1759e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1759e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1759e4: 0xa2830212  sb          $v1, 0x212($s4)
    ctx->pc = 0x1759e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 530), (uint8_t)GPR_U32(ctx, 3));
label_1759e8:
    // 0x1759e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1759e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1759ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1759ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1759f0: 0x26520070  addiu       $s2, $s2, 0x70
    ctx->pc = 0x1759f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x1759f4: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1759f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1759f8: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1759F8u;
    {
        const bool branch_taken_0x1759f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1759FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1759F8u;
        // 0x1759fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1759f8) {
            ctx->pc = 0x175980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175980;
        }
    }
    ctx->pc = 0x175A00u;
label_175a00:
    // 0x175a00: 0x92830212  lbu         $v1, 0x212($s4)
    ctx->pc = 0x175a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 530)));
    // 0x175a04: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x175A04u;
    {
        const bool branch_taken_0x175a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175a04) {
            ctx->pc = 0x175A58u;
            goto label_175a58;
        }
    }
    ctx->pc = 0x175A0Cu;
    // 0x175a0c: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x175a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x175a10: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x175a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x175a14: 0xae83021c  sw          $v1, 0x21C($s4)
    ctx->pc = 0x175a14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 540), GPR_U32(ctx, 3));
    // 0x175a18: 0x96900230  lhu         $s0, 0x230($s4)
    ctx->pc = 0x175a18u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 560)));
    // 0x175a1c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x175A1Cu;
    {
        const bool branch_taken_0x175a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x175a1c) {
            ctx->pc = 0x175A48u;
            goto label_175a48;
        }
    }
    ctx->pc = 0x175A24u;
    // 0x175a24: 0x0  nop
    ctx->pc = 0x175a24u;
    // NOP
label_175a28:
    // 0x175a28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x175a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a2c: 0xc05d6bc  jal         func_175AF0
    ctx->pc = 0x175A2Cu;
    SET_GPR_U32(ctx, 31, 0x175A34u);
    ctx->pc = 0x175A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A2Cu;
    // 0x175a30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175AF0u, 0x175A2Cu, 0x175A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A34u;
label_175a34:
    // 0x175a34: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x175a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x175a38: 0x0  nop
    ctx->pc = 0x175a38u;
    // NOP
    // 0x175a3c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x175A3Cu;
    {
        const bool branch_taken_0x175a3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x175a3c) {
            ctx->pc = 0x175A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175a28;
        }
    }
    ctx->pc = 0x175A44u;
    // 0x175a44: 0x0  nop
    ctx->pc = 0x175a44u;
    // NOP
label_175a48:
    // 0x175a48: 0x8e84021c  lw          $a0, 0x21C($s4)
    ctx->pc = 0x175a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x175a4c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x175a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x175a50: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x175a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x175a54: 0xae83021c  sw          $v1, 0x21C($s4)
    ctx->pc = 0x175a54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 540), GPR_U32(ctx, 3));
label_175a58:
    // 0x175a58: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x175a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x175a5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x175a5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175a60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175a60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175a64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175a64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175a68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175a6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175a70: 0x3e00008  jr          $ra
    ctx->pc = 0x175A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A70u;
        // 0x175a74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175A78u;
}
