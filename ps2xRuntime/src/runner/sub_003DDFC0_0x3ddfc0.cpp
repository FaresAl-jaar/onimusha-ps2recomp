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

// Function: sub_003DDFC0
// Address: 0x3ddfc0 - 0x3de198
void sub_003DDFC0_0x3ddfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDFC0_0x3ddfc0");
#endif

    switch (ctx->pc) {
        case 0x3de010u: goto label_3de010;
        case 0x3de020u: goto label_3de020;
        case 0x3de060u: goto label_3de060;
        case 0x3de070u: goto label_3de070;
        case 0x3de0dcu: goto label_3de0dc;
        case 0x3de188u: goto label_3de188;
        default: break;
    }

    ctx->pc = 0x3ddfc0u;

    // 0x3ddfc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ddfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3ddfc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ddfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ddfc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ddfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ddfcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ddfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ddfd0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3ddfd0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3ddfd4: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3DDFD4u;
    {
        const bool branch_taken_0x3ddfd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DDFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFD4u;
        // 0x3ddfd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddfd4) {
            ctx->pc = 0x3DE050u;
            goto label_3de050;
        }
    }
    ctx->pc = 0x3DDFDCu;
    // 0x3ddfdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ddfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ddfe0: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3DDFE0u;
    {
        const bool branch_taken_0x3ddfe0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ddfe0) {
            ctx->pc = 0x3DE030u;
            goto label_3de030;
        }
    }
    ctx->pc = 0x3DDFE8u;
    // 0x3ddfe8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DDFE8u;
    {
        const bool branch_taken_0x3ddfe8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddfe8) {
            ctx->pc = 0x3DDFF8u;
            goto label_3ddff8;
        }
    }
    ctx->pc = 0x3DDFF0u;
    // 0x3ddff0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x3DDFF0u;
    {
        const bool branch_taken_0x3ddff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddff0) {
            ctx->pc = 0x3DE188u;
            goto label_3de188;
        }
    }
    ctx->pc = 0x3DDFF8u;
label_3ddff8:
    // 0x3ddff8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DDFF8u;
    {
        const bool branch_taken_0x3ddff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddff8) {
            ctx->pc = 0x3DE018u;
            goto label_3de018;
        }
    }
    ctx->pc = 0x3DE000u;
    // 0x3de000: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3de000u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3de004: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3de004u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3de008: 0xc0aabc8  jal         func_2AAF20
    ctx->pc = 0x3DE008u;
    SET_GPR_U32(ctx, 31, 0x3DE010u);
    ctx->pc = 0x3DE00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE008u;
    // 0x3de00c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAF20u, 0x3DE008u, 0x3DE010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE010u;
label_3de010:
    // 0x3de010: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DE010u;
    {
        const bool branch_taken_0x3de010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE010u;
        // 0x3de014: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de010) {
            ctx->pc = 0x3DE020u;
            goto label_3de020;
        }
    }
    ctx->pc = 0x3DE018u;
label_3de018:
    // 0x3de018: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3DE018u;
    SET_GPR_U32(ctx, 31, 0x3DE020u);
    ctx->pc = 0x3DE01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE018u;
    // 0x3de01c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3DE018u, 0x3DE020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE020u;
label_3de020:
    // 0x3de020: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3de020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3de024: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3de024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3de028: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x3DE028u;
    {
        const bool branch_taken_0x3de028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE028u;
        // 0x3de02c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de028) {
            ctx->pc = 0x3DE188u;
            goto label_3de188;
        }
    }
    ctx->pc = 0x3DE030u;
label_3de030:
    // 0x3de030: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3de030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3de034: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3de034u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3de038: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3de038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3de03c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3de03cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3de040: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3de040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3de044: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3de044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3de048: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3de048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3de04c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3de04cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3de050:
    // 0x3de050: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x3de050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3de054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de058: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3DE058u;
    SET_GPR_U32(ctx, 31, 0x3DE060u);
    ctx->pc = 0x3DE05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE058u;
    // 0x3de05c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3DE058u, 0x3DE060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE060u;
label_3de060:
    // 0x3de060: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DE060u;
    {
        const bool branch_taken_0x3de060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE060u;
        // 0x3de064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de060) {
            ctx->pc = 0x3DE070u;
            goto label_3de070;
        }
    }
    ctx->pc = 0x3DE068u;
    // 0x3de068: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3DE068u;
    SET_GPR_U32(ctx, 31, 0x3DE070u);
    ctx->pc = 0x3DE06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE068u;
    // 0x3de06c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3DE068u, 0x3DE070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE070u;
label_3de070:
    // 0x3de070: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3de070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3de074: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3DE074u;
    {
        const bool branch_taken_0x3de074 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3DE078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE074u;
        // 0x3de078: 0x2861001f  slti        $at, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de074) {
            ctx->pc = 0x3DE0E0u;
            goto label_3de0e0;
        }
    }
    ctx->pc = 0x3DE07Cu;
    // 0x3de07c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3DE07Cu;
    {
        const bool branch_taken_0x3de07c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de07c) {
            ctx->pc = 0x3DE0E0u;
            goto label_3de0e0;
        }
    }
    ctx->pc = 0x3DE084u;
    // 0x3de084: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3de084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3de088: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x3de088u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3de08c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3de08cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3de090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de094: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3de094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3de098: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3de098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de09c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3de09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3de0a0: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x3de0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x3de0a4: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3de0a4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3de0a8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3de0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3de0ac: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x3de0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x3de0b0: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3de0b0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3de0b4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3de0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3de0b8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3de0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3de0bc: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3de0bcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3de0c0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3de0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3de0c4: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3de0c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3de0c8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3de0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3de0cc: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3de0ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x3de0d0: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3de0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3de0d4: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3DE0D4u;
    SET_GPR_U32(ctx, 31, 0x3DE0DCu);
    ctx->pc = 0x3DE0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE0D4u;
    // 0x3de0d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3DE0D4u, 0x3DE0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE0DCu;
label_3de0dc:
    // 0x3de0dc: 0x0  nop
    ctx->pc = 0x3de0dcu;
    // NOP
label_3de0e0:
    // 0x3de0e0: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3de0e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3de0e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DE0E4u;
    {
        const bool branch_taken_0x3de0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE0E4u;
        // 0x3de0e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de0e4) {
            ctx->pc = 0x3DE0F8u;
            goto label_3de0f8;
        }
    }
    ctx->pc = 0x3DE0ECu;
    // 0x3de0ec: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3DE0ECu;
    {
        const bool branch_taken_0x3de0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de0ec) {
            ctx->pc = 0x3DE178u;
            goto label_3de178;
        }
    }
    ctx->pc = 0x3DE0F4u;
    // 0x3de0f4: 0x0  nop
    ctx->pc = 0x3de0f4u;
    // NOP
label_3de0f8:
    // 0x3de0f8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3de0f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3de0fc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3de0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3de100: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3de100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3de104: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3de104u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3de108: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3de108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3de10c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3DE10Cu;
    {
        const bool branch_taken_0x3de10c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3de10c) {
            ctx->pc = 0x3DE148u;
            goto label_3de148;
        }
    }
    ctx->pc = 0x3DE114u;
    // 0x3de114: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3de114u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3de118: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3de118u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3de11c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3DE11Cu;
    {
        const bool branch_taken_0x3de11c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE11Cu;
        // 0x3de120: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de11c) {
            ctx->pc = 0x3DE170u;
            goto label_3de170;
        }
    }
    ctx->pc = 0x3DE124u;
    // 0x3de124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3de124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3de128: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3de128u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3de12c: 0x0  nop
    ctx->pc = 0x3de12cu;
    // NOP
    // 0x3de130: 0x0  nop
    ctx->pc = 0x3de130u;
    // NOP
    // 0x3de134: 0x2010  mfhi        $a0
    ctx->pc = 0x3de134u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3de138: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3de138u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3de13c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3DE13Cu;
    {
        const bool branch_taken_0x3de13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE13Cu;
        // 0x3de140: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de13c) {
            ctx->pc = 0x3DE170u;
            goto label_3de170;
        }
    }
    ctx->pc = 0x3DE144u;
    // 0x3de144: 0x0  nop
    ctx->pc = 0x3de144u;
    // NOP
label_3de148:
    // 0x3de148: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3de148u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3de14c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3de14cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3de150: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DE150u;
    {
        const bool branch_taken_0x3de150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3de150) {
            ctx->pc = 0x3DE170u;
            goto label_3de170;
        }
    }
    ctx->pc = 0x3DE158u;
    // 0x3de158: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3de158u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3de15c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3de15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3de160: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3de160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3de164: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DE164u;
    {
        const bool branch_taken_0x3de164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE164u;
        // 0x3de168: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de164) {
            ctx->pc = 0x3DE178u;
            goto label_3de178;
        }
    }
    ctx->pc = 0x3DE16Cu;
    // 0x3de16c: 0x0  nop
    ctx->pc = 0x3de16cu;
    // NOP
label_3de170:
    // 0x3de170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3de170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3de174: 0x0  nop
    ctx->pc = 0x3de174u;
    // NOP
label_3de178:
    // 0x3de178: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DE178u;
    {
        const bool branch_taken_0x3de178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE178u;
        // 0x3de17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de178) {
            ctx->pc = 0x3DE188u;
            goto label_3de188;
        }
    }
    ctx->pc = 0x3DE180u;
    // 0x3de180: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3DE180u;
    SET_GPR_U32(ctx, 31, 0x3DE188u);
    ctx->pc = 0x3DE184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE180u;
    // 0x3de184: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3DE180u, 0x3DE188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE188u;
label_3de188:
    // 0x3de188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3de188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de18c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3de18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de190: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE190u;
        // 0x3de194: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE198u;
}
