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

// Function: sub_00328000
// Address: 0x328000 - 0x3281d8
void sub_00328000_0x328000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328000_0x328000");
#endif

    switch (ctx->pc) {
        case 0x328050u: goto label_328050;
        case 0x328060u: goto label_328060;
        case 0x3280a0u: goto label_3280a0;
        case 0x3280b0u: goto label_3280b0;
        case 0x32811cu: goto label_32811c;
        case 0x3281c8u: goto label_3281c8;
        default: break;
    }

    ctx->pc = 0x328000u;

    // 0x328000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x328000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x328004: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x328004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328008: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32800c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32800cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328010: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x328010u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x328014: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x328014u;
    {
        const bool branch_taken_0x328014 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x328018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328014u;
        // 0x328018: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328014) {
            ctx->pc = 0x328090u;
            goto label_328090;
        }
    }
    ctx->pc = 0x32801Cu;
    // 0x32801c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32801cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328020: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x328020u;
    {
        const bool branch_taken_0x328020 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x328020) {
            ctx->pc = 0x328070u;
            goto label_328070;
        }
    }
    ctx->pc = 0x328028u;
    // 0x328028: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x328028u;
    {
        const bool branch_taken_0x328028 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x328028) {
            ctx->pc = 0x328038u;
            goto label_328038;
        }
    }
    ctx->pc = 0x328030u;
    // 0x328030: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x328030u;
    {
        const bool branch_taken_0x328030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328030) {
            ctx->pc = 0x3281C8u;
            goto label_3281c8;
        }
    }
    ctx->pc = 0x328038u;
label_328038:
    // 0x328038: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x328038u;
    {
        const bool branch_taken_0x328038 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328038) {
            ctx->pc = 0x328058u;
            goto label_328058;
        }
    }
    ctx->pc = 0x328040u;
    // 0x328040: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x328040u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x328044: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x328044u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x328048: 0xc0a9f84  jal         func_2A7E10
    ctx->pc = 0x328048u;
    SET_GPR_U32(ctx, 31, 0x328050u);
    ctx->pc = 0x32804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328048u;
    // 0x32804c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7E10u, 0x328048u, 0x328050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328050u;
label_328050:
    // 0x328050: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x328050u;
    {
        const bool branch_taken_0x328050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328050u;
        // 0x328054: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328050) {
            ctx->pc = 0x328060u;
            goto label_328060;
        }
    }
    ctx->pc = 0x328058u;
label_328058:
    // 0x328058: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x328058u;
    SET_GPR_U32(ctx, 31, 0x328060u);
    ctx->pc = 0x32805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328058u;
    // 0x32805c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x328058u, 0x328060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328060u;
label_328060:
    // 0x328060: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x328060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x328064: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x328064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x328068: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x328068u;
    {
        const bool branch_taken_0x328068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328068u;
        // 0x32806c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328068) {
            ctx->pc = 0x3281C8u;
            goto label_3281c8;
        }
    }
    ctx->pc = 0x328070u;
label_328070:
    // 0x328070: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x328070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x328074: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x328074u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x328078: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x328078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x32807c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x32807cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x328080: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x328080u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x328084: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x328084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x328088: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x328088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32808c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x32808cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_328090:
    // 0x328090: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x328090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x328094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328098: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x328098u;
    SET_GPR_U32(ctx, 31, 0x3280A0u);
    ctx->pc = 0x32809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328098u;
    // 0x32809c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x328098u, 0x3280A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280A0u;
label_3280a0:
    // 0x3280a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3280A0u;
    {
        const bool branch_taken_0x3280a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3280A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280A0u;
        // 0x3280a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280a0) {
            ctx->pc = 0x3280B0u;
            goto label_3280b0;
        }
    }
    ctx->pc = 0x3280A8u;
    // 0x3280a8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3280A8u;
    SET_GPR_U32(ctx, 31, 0x3280B0u);
    ctx->pc = 0x3280ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280A8u;
    // 0x3280ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3280A8u, 0x3280B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280B0u;
label_3280b0:
    // 0x3280b0: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3280b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3280b4: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3280B4u;
    {
        const bool branch_taken_0x3280b4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3280B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280B4u;
        // 0x3280b8: 0x28617531  slti        $at, $v1, 0x7531 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30001) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280b4) {
            ctx->pc = 0x328120u;
            goto label_328120;
        }
    }
    ctx->pc = 0x3280BCu;
    // 0x3280bc: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3280BCu;
    {
        const bool branch_taken_0x3280bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3280bc) {
            ctx->pc = 0x328120u;
            goto label_328120;
        }
    }
    ctx->pc = 0x3280C4u;
    // 0x3280c4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3280c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3280c8: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x3280c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3280cc: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3280ccu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3280d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3280d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3280d4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3280d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3280d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3280d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3280dc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3280dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3280e0: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x3280e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x3280e4: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3280e4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3280e8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3280e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3280ec: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x3280ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x3280f0: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3280f0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3280f4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3280f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3280f8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3280f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3280fc: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3280fcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x328100: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x328100u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x328104: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x328104u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x328108: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x328108u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x32810c: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x32810cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x328110: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x328110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x328114: 0xc0c0900  jal         func_302400
    ctx->pc = 0x328114u;
    SET_GPR_U32(ctx, 31, 0x32811Cu);
    ctx->pc = 0x328118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328114u;
    // 0x328118: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x328114u, 0x32811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32811Cu;
label_32811c:
    // 0x32811c: 0x0  nop
    ctx->pc = 0x32811cu;
    // NOP
label_328120:
    // 0x328120: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x328120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x328124: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x328124u;
    {
        const bool branch_taken_0x328124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328124u;
        // 0x328128: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328124) {
            ctx->pc = 0x328138u;
            goto label_328138;
        }
    }
    ctx->pc = 0x32812Cu;
    // 0x32812c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x32812Cu;
    {
        const bool branch_taken_0x32812c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32812c) {
            ctx->pc = 0x3281B8u;
            goto label_3281b8;
        }
    }
    ctx->pc = 0x328134u;
    // 0x328134: 0x0  nop
    ctx->pc = 0x328134u;
    // NOP
label_328138:
    // 0x328138: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x328138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x32813c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x32813cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x328140: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x328140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x328144: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x328144u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x328148: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x328148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x32814c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x32814Cu;
    {
        const bool branch_taken_0x32814c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32814c) {
            ctx->pc = 0x328188u;
            goto label_328188;
        }
    }
    ctx->pc = 0x328154u;
    // 0x328154: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x328154u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x328158: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x328158u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x32815c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32815Cu;
    {
        const bool branch_taken_0x32815c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x328160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32815Cu;
        // 0x328160: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32815c) {
            ctx->pc = 0x3281B0u;
            goto label_3281b0;
        }
    }
    ctx->pc = 0x328164u;
    // 0x328164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x328164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328168: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x328168u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32816c: 0x0  nop
    ctx->pc = 0x32816cu;
    // NOP
    // 0x328170: 0x0  nop
    ctx->pc = 0x328170u;
    // NOP
    // 0x328174: 0x2010  mfhi        $a0
    ctx->pc = 0x328174u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x328178: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x328178u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32817c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32817Cu;
    {
        const bool branch_taken_0x32817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32817Cu;
        // 0x328180: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32817c) {
            ctx->pc = 0x3281B0u;
            goto label_3281b0;
        }
    }
    ctx->pc = 0x328184u;
    // 0x328184: 0x0  nop
    ctx->pc = 0x328184u;
    // NOP
label_328188:
    // 0x328188: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x328188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x32818c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x32818cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x328190: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x328190u;
    {
        const bool branch_taken_0x328190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x328190) {
            ctx->pc = 0x3281B0u;
            goto label_3281b0;
        }
    }
    ctx->pc = 0x328198u;
    // 0x328198: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x328198u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32819c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32819cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3281a0: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3281a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3281a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3281A4u;
    {
        const bool branch_taken_0x3281a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3281A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281A4u;
        // 0x3281a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281a4) {
            ctx->pc = 0x3281B8u;
            goto label_3281b8;
        }
    }
    ctx->pc = 0x3281ACu;
    // 0x3281ac: 0x0  nop
    ctx->pc = 0x3281acu;
    // NOP
label_3281b0:
    // 0x3281b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3281b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3281b4: 0x0  nop
    ctx->pc = 0x3281b4u;
    // NOP
label_3281b8:
    // 0x3281b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3281B8u;
    {
        const bool branch_taken_0x3281b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3281BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281B8u;
        // 0x3281bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281b8) {
            ctx->pc = 0x3281C8u;
            goto label_3281c8;
        }
    }
    ctx->pc = 0x3281C0u;
    // 0x3281c0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3281C0u;
    SET_GPR_U32(ctx, 31, 0x3281C8u);
    ctx->pc = 0x3281C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3281C0u;
    // 0x3281c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3281C0u, 0x3281C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3281C8u;
label_3281c8:
    // 0x3281c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3281c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3281cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3281ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3281d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3281D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3281D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281D0u;
        // 0x3281d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3281D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3281D8u;
}
