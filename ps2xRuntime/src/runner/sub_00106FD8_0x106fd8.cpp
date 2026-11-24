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

// Function: sub_00106FD8
// Address: 0x106fd8 - 0x107218
void sub_00106FD8_0x106fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106FD8_0x106fd8");
#endif

    switch (ctx->pc) {
        case 0x107030u: goto label_107030;
        case 0x107034u: goto label_107034;
        case 0x10703cu: goto label_10703c;
        case 0x107058u: goto label_107058;
        case 0x107060u: goto label_107060;
        case 0x1070a8u: goto label_1070a8;
        case 0x1070ccu: goto label_1070cc;
        case 0x107140u: goto label_107140;
        case 0x107170u: goto label_107170;
        case 0x1071a0u: goto label_1071a0;
        case 0x1071d4u: goto label_1071d4;
        case 0x1071ecu: goto label_1071ec;
        default: break;
    }

    ctx->pc = 0x106fd8u;

    // 0x106fd8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x106fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x106fdc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x106fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x106fe0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x106fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x106fe4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x106fe4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106fe8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x106fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x106fec: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x106fecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106ff0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106ff4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ff8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x106ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x106ffc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x106ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x107000: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x107000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x107004: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x107004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x107008: 0xae200820  sw          $zero, 0x820($s1)
    ctx->pc = 0x107008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2080), GPR_U32(ctx, 0));
    // 0x10700c: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x10700cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x107010: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x107010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x107014: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x107014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x107018: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x107018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x10701c: 0xae200824  sw          $zero, 0x824($s1)
    ctx->pc = 0x10701cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2084), GPR_U32(ctx, 0));
    // 0x107020: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x107020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x107024: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x107024u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x107028: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x107028u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x10702c: 0x0  nop
    ctx->pc = 0x10702cu;
    // NOP
label_107030:
    // 0x107030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107034:
    // 0x107034: 0xc041c86  jal         func_107218
    ctx->pc = 0x107034u;
    SET_GPR_U32(ctx, 31, 0x10703Cu);
    ctx->pc = 0x107038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107034u;
    // 0x107038: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107218u, 0x107034u, 0x10703Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10703Cu;
label_10703c:
    // 0x10703c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x10703cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107040: 0x12b3fffc  beq         $s5, $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x107040u;
    {
        const bool branch_taken_0x107040 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 19));
        ctx->pc = 0x107044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107040u;
        // 0x107044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107040) {
            ctx->pc = 0x107034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107034;
        }
    }
    ctx->pc = 0x107048u;
    // 0x107048: 0x12b2fff9  beq         $s5, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x107048u;
    {
        const bool branch_taken_0x107048 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 18));
        if (branch_taken_0x107048) {
            ctx->pc = 0x107030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107030;
        }
    }
    ctx->pc = 0x107050u;
    // 0x107050: 0xc0421b6  jal         func_1086D8
    ctx->pc = 0x107050u;
    SET_GPR_U32(ctx, 31, 0x107058u);
    ctx->pc = 0x107054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107050u;
    // 0x107054: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086D8u, 0x107050u, 0x107058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107058u;
label_107058:
    // 0x107058: 0xc0421b6  jal         func_1086D8
    ctx->pc = 0x107058u;
    SET_GPR_U32(ctx, 31, 0x107060u);
    ctx->pc = 0x10705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107058u;
    // 0x10705c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086D8u, 0x107058u, 0x107060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107060u;
label_107060:
    // 0x107060: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107064: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x107064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x107068: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107068u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x10706c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x10706Cu;
    {
        const bool branch_taken_0x10706c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10706Cu;
        // 0x107070: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10706c) {
            ctx->pc = 0x1070F4u;
            goto label_1070f4;
        }
    }
    ctx->pc = 0x107074u;
    // 0x107074: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x107074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x107078: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107078u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002010
    // 0x10707c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x10707cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x107080: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x107080u;
    {
        const bool branch_taken_0x107080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107080u;
        // 0x107084: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107080) {
            ctx->pc = 0x1070F8u;
            goto label_1070f8;
        }
    }
    ctx->pc = 0x107088u;
    // 0x107088: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x107088u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x10708c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x10708cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x107090: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x107090u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x107094: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x107094u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x107098: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x107098u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x10709c: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x10709cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x1070a0: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x1070a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x1070a4: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x1070a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
label_1070a8:
    // 0x1070a8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1070a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 20), 0))); // MMIO: 0x1000b420
    // 0x1070ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1070ACu;
    {
        const bool branch_taken_0x1070ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1070ac) {
            ctx->pc = 0x1070B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1070ACu;
            // 0x1070b0: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1070D0u;
            goto label_1070d0;
        }
    }
    ctx->pc = 0x1070B4u;
    // 0x1070b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1070b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1070b8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1070b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1070bc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1070BCu;
    {
        const bool branch_taken_0x1070bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1070bc) {
            ctx->pc = 0x1070C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1070BCu;
            // 0x1070c0: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1070D0u;
            goto label_1070d0;
        }
    }
    ctx->pc = 0x1070C4u;
    // 0x1070c4: 0xc042efe  jal         func_10BBF8
    ctx->pc = 0x1070C4u;
    SET_GPR_U32(ctx, 31, 0x1070CCu);
    ctx->pc = 0x1070C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070C4u;
    // 0x1070c8: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBF8u, 0x1070C4u, 0x1070CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070CCu;
label_1070cc:
    // 0x1070cc: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x1070ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_1070d0:
    // 0x1070d0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1070D0u;
    {
        const bool branch_taken_0x1070d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1070d0) {
            ctx->pc = 0x107138u;
            goto label_107138;
        }
    }
    ctx->pc = 0x1070D8u;
    // 0x1070d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1070d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1070dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1070DCu;
    {
        const bool branch_taken_0x1070dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1070E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070DCu;
        // 0x1070e0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070dc) {
            ctx->pc = 0x1070F8u;
            goto label_1070f8;
        }
    }
    ctx->pc = 0x1070E4u;
    // 0x1070e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1070e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1070e8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1070e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1070ec: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1070ECu;
    {
        const bool branch_taken_0x1070ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1070ec) {
            ctx->pc = 0x1070A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1070a8;
        }
    }
    ctx->pc = 0x1070F4u;
label_1070f4:
    // 0x1070f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1070f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1070f8:
    // 0x1070f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1070f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1070fc: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1070fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x107100: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x107100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x107104: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x107104u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002020
    // 0x107108: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x107108u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x10710c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x10710cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x107110: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107110u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107114: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x107114u;
    {
        const bool branch_taken_0x107114 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x107118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107114u;
        // 0x107118: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107114) {
            ctx->pc = 0x107148u;
            goto label_107148;
        }
    }
    ctx->pc = 0x10711Cu;
    // 0x10711c: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x10711cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x107120: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x107120u;
    {
        const bool branch_taken_0x107120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107120u;
        // 0x107124: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107120) {
            ctx->pc = 0x107130u;
            goto label_107130;
        }
    }
    ctx->pc = 0x107128u;
    // 0x107128: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x107128u;
    {
        const bool branch_taken_0x107128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107128u;
        // 0x10712c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107128) {
            ctx->pc = 0x10714Cu;
            goto label_10714c;
        }
    }
    ctx->pc = 0x107130u;
label_107130:
    // 0x107130: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x107130u;
    {
        const bool branch_taken_0x107130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107130u;
        // 0x107134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107130) {
            ctx->pc = 0x10714Cu;
            goto label_10714c;
        }
    }
    ctx->pc = 0x107138u;
label_107138:
    // 0x107138: 0xc0434dc  jal         func_10D370
    ctx->pc = 0x107138u;
    SET_GPR_U32(ctx, 31, 0x107140u);
    ctx->pc = 0x10D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D370u, 0x107138u, 0x107140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107140u;
label_107140:
    // 0x107140: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x107140u;
    {
        const bool branch_taken_0x107140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107140u;
        // 0x107144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107140) {
            ctx->pc = 0x107174u;
            goto label_107174;
        }
    }
    ctx->pc = 0x107148u;
label_107148:
    // 0x107148: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x107148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10714c:
    // 0x10714c: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x10714cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x107150: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107154: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x107154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x107158: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107158u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10715c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x10715cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x107160: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x107160u;
    {
        const bool branch_taken_0x107160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107160u;
        // 0x107164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107160) {
            ctx->pc = 0x107170u;
            goto label_107170;
        }
    }
    ctx->pc = 0x107168u;
    // 0x107168: 0xc043504  jal         func_10D410
    ctx->pc = 0x107168u;
    SET_GPR_U32(ctx, 31, 0x107170u);
    ctx->pc = 0x10716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107168u;
    // 0x10716c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D410u, 0x107168u, 0x107170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107170u;
label_107170:
    // 0x107170: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x107170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_107174:
    // 0x107174: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107174u;
    {
        const bool branch_taken_0x107174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107174u;
        // 0x107178: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107174) {
            ctx->pc = 0x107190u;
            goto label_107190;
        }
    }
    ctx->pc = 0x10717Cu;
    // 0x10717c: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x10717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
    // 0x107180: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x107180u;
    {
        const bool branch_taken_0x107180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107180u;
        // 0x107184: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107180) {
            ctx->pc = 0x1071F0u;
            goto label_1071f0;
        }
    }
    ctx->pc = 0x107188u;
    // 0x107188: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x107188u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10718c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10718cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_107190:
    // 0x107190: 0x26b0ffff  addiu       $s0, $s5, -0x1
    ctx->pc = 0x107190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x107194: 0x2eb20001  sltiu       $s2, $s5, 0x1
    ctx->pc = 0x107194u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x107198: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x107198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x10719c: 0x0  nop
    ctx->pc = 0x10719cu;
    // NOP
label_1071a0:
    // 0x1071a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1071a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1071a4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1071a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1071a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1071a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1071ac: 0x0  nop
    ctx->pc = 0x1071acu;
    // NOP
    // 0x1071b0: 0x0  nop
    ctx->pc = 0x1071b0u;
    // NOP
    // 0x1071b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1071B4u;
    {
        const bool branch_taken_0x1071b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1071b4) {
            ctx->pc = 0x1071A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1071a0;
        }
    }
    ctx->pc = 0x1071BCu;
    // 0x1071bc: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1071BCu;
    {
        const bool branch_taken_0x1071bc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1071C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071BCu;
        // 0x1071c0: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071bc) {
            ctx->pc = 0x1071D8u;
            goto label_1071d8;
        }
    }
    ctx->pc = 0x1071C4u;
    // 0x1071c4: 0x8e250820  lw          $a1, 0x820($s1)
    ctx->pc = 0x1071c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x1071c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1071c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1071cc: 0xc041b6e  jal         func_106DB8
    ctx->pc = 0x1071CCu;
    SET_GPR_U32(ctx, 31, 0x1071D4u);
    ctx->pc = 0x1071D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1071CCu;
    // 0x1071d0: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x106DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106DB8u, 0x1071CCu, 0x1071D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1071D4u;
label_1071d4:
    // 0x1071d4: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x1071d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1071d8:
    // 0x1071d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1071D8u;
    {
        const bool branch_taken_0x1071d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1071DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071D8u;
        // 0x1071dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071d8) {
            ctx->pc = 0x1071ECu;
            goto label_1071ec;
        }
    }
    ctx->pc = 0x1071E0u;
    // 0x1071e0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1071e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x1071e4: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x1071E4u;
    SET_GPR_U32(ctx, 31, 0x1071ECu);
    ctx->pc = 0x1071E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1071E4u;
    // 0x1071e8: 0x24a51eb8  addiu       $a1, $a1, 0x1EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x1071E4u, 0x1071ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1071ECu;
label_1071ec:
    // 0x1071ec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1071ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1071f0:
    // 0x1071f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1071f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1071f4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1071f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1071f8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1071f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1071fc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1071fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107200: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x107200u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107204: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107208: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10720c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10720cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107210: 0x3e00008  jr          $ra
    ctx->pc = 0x107210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107210u;
        // 0x107214: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107218u;
}
