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

// Function: sub_00334E30
// Address: 0x334e30 - 0x3353e4
void sub_00334E30_0x334e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334E30_0x334e30");
#endif

    switch (ctx->pc) {
        case 0x334eb0u: goto label_334eb0;
        case 0x334f30u: goto label_334f30;
        case 0x334f44u: goto label_334f44;
        case 0x334f54u: goto label_334f54;
        case 0x334f6cu: goto label_334f6c;
        case 0x334f7cu: goto label_334f7c;
        case 0x334fa8u: goto label_334fa8;
        case 0x334fc0u: goto label_334fc0;
        case 0x334fdcu: goto label_334fdc;
        case 0x334fecu: goto label_334fec;
        case 0x335000u: goto label_335000;
        case 0x335028u: goto label_335028;
        case 0x335038u: goto label_335038;
        case 0x335068u: goto label_335068;
        case 0x335090u: goto label_335090;
        case 0x3350a8u: goto label_3350a8;
        case 0x3350b0u: goto label_3350b0;
        case 0x3350fcu: goto label_3350fc;
        case 0x3351e8u: goto label_3351e8;
        case 0x3351f0u: goto label_3351f0;
        case 0x335220u: goto label_335220;
        case 0x335228u: goto label_335228;
        case 0x335238u: goto label_335238;
        case 0x335268u: goto label_335268;
        case 0x335290u: goto label_335290;
        case 0x3352a8u: goto label_3352a8;
        case 0x3352b0u: goto label_3352b0;
        case 0x3352fcu: goto label_3352fc;
        case 0x3353c8u: goto label_3353c8;
        default: break;
    }

    ctx->pc = 0x334e30u;

    // 0x334e30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x334e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x334e34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x334e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x334e38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x334e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x334e3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x334e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x334e40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x334e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x334e44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x334e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x334e48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x334e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x334e4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x334e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334e50: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x334e50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x334e54: 0x10a300e0  beq         $a1, $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x334E54u;
    {
        const bool branch_taken_0x334e54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x334E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E54u;
        // 0x334e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e54) {
            ctx->pc = 0x3351D8u;
            goto label_3351d8;
        }
    }
    ctx->pc = 0x334E5Cu;
    // 0x334e5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x334e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334e60: 0x10a300d5  beq         $a1, $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x334E60u;
    {
        const bool branch_taken_0x334e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x334E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E60u;
        // 0x334e64: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e60) {
            ctx->pc = 0x3351B8u;
            goto label_3351b8;
        }
    }
    ctx->pc = 0x334E68u;
    // 0x334e68: 0x10a3001d  beq         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x334E68u;
    {
        const bool branch_taken_0x334e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x334e68) {
            ctx->pc = 0x334EE0u;
            goto label_334ee0;
        }
    }
    ctx->pc = 0x334E70u;
    // 0x334e70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x334e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334e74: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x334E74u;
    {
        const bool branch_taken_0x334e74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x334e74) {
            ctx->pc = 0x334EC0u;
            goto label_334ec0;
        }
    }
    ctx->pc = 0x334E7Cu;
    // 0x334e7c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x334E7Cu;
    {
        const bool branch_taken_0x334e7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x334e7c) {
            ctx->pc = 0x334E90u;
            goto label_334e90;
        }
    }
    ctx->pc = 0x334E84u;
    // 0x334e84: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x334E84u;
    {
        const bool branch_taken_0x334e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334e84) {
            ctx->pc = 0x3353C8u;
            goto label_3353c8;
        }
    }
    ctx->pc = 0x334E8Cu;
    // 0x334e8c: 0x0  nop
    ctx->pc = 0x334e8cu;
    // NOP
label_334e90:
    // 0x334e90: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x334E90u;
    {
        const bool branch_taken_0x334e90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x334e90) {
            ctx->pc = 0x334EA8u;
            goto label_334ea8;
        }
    }
    ctx->pc = 0x334E98u;
    // 0x334e98: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x334e98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x334e9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x334E9Cu;
    {
        const bool branch_taken_0x334e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E9Cu;
        // 0x334ea0: 0xa6030732  sh          $v1, 0x732($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1842), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e9c) {
            ctx->pc = 0x334EB0u;
            goto label_334eb0;
        }
    }
    ctx->pc = 0x334EA4u;
    // 0x334ea4: 0x0  nop
    ctx->pc = 0x334ea4u;
    // NOP
label_334ea8:
    // 0x334ea8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x334EA8u;
    SET_GPR_U32(ctx, 31, 0x334EB0u);
    ctx->pc = 0x334EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334EA8u;
    // 0x334eac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x334EA8u, 0x334EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334EB0u;
label_334eb0:
    // 0x334eb0: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x334eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x334eb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x334eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x334eb8: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x334EB8u;
    {
        const bool branch_taken_0x334eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EB8u;
        // 0x334ebc: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334eb8) {
            ctx->pc = 0x3353C8u;
            goto label_3353c8;
        }
    }
    ctx->pc = 0x334EC0u;
label_334ec0:
    // 0x334ec0: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x334ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x334ec4: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x334ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x334ec8: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x334ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x334ecc: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x334eccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x334ed0: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x334ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x334ed4: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x334ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x334ed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x334ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x334edc: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x334edcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_334ee0:
    // 0x334ee0: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x334ee0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x334ee4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x334EE4u;
    {
        const bool branch_taken_0x334ee4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x334EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EE4u;
        // 0x334ee8: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ee4) {
            ctx->pc = 0x334EF8u;
            goto label_334ef8;
        }
    }
    ctx->pc = 0x334EECu;
    // 0x334eec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x334EECu;
    {
        const bool branch_taken_0x334eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334eec) {
            ctx->pc = 0x334EF8u;
            goto label_334ef8;
        }
    }
    ctx->pc = 0x334EF4u;
    // 0x334ef4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x334ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_334ef8:
    // 0x334ef8: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x334EF8u;
    {
        const bool branch_taken_0x334ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334ef8) {
            ctx->pc = 0x335020u;
            goto label_335020;
        }
    }
    ctx->pc = 0x334F00u;
    // 0x334f00: 0x92030730  lbu         $v1, 0x730($s0)
    ctx->pc = 0x334f00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1840)));
    // 0x334f04: 0x24020555  addiu       $v0, $zero, 0x555
    ctx->pc = 0x334f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1365));
    // 0x334f08: 0x86050732  lh          $a1, 0x732($s0)
    ctx->pc = 0x334f08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1842)));
    // 0x334f0c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x334f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x334f10: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x334f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x334f14: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x334f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x334f18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x334f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x334f1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x334f1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x334f20: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x334f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x334f24: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x334f24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x334f28: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x334F28u;
    SET_GPR_U32(ctx, 31, 0x334F30u);
    ctx->pc = 0x334F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F28u;
    // 0x334f2c: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x334F28u, 0x334F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F30u;
label_334f30:
    // 0x334f30: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x334f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x334f34: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x334f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x334f38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x334f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x334f3c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x334F3Cu;
    SET_GPR_U32(ctx, 31, 0x334F44u);
    ctx->pc = 0x334F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F3Cu;
    // 0x334f40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x334F3Cu, 0x334F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F44u;
label_334f44:
    // 0x334f44: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x334f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x334f48: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x334f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x334f4c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x334F4Cu;
    SET_GPR_U32(ctx, 31, 0x334F54u);
    ctx->pc = 0x334F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F4Cu;
    // 0x334f50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x334F4Cu, 0x334F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F54u;
label_334f54:
    // 0x334f54: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x334F54u;
    {
        const bool branch_taken_0x334f54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x334F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F54u;
        // 0x334f58: 0x92120730  lbu         $s2, 0x730($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f54) {
            ctx->pc = 0x335010u;
            goto label_335010;
        }
    }
    ctx->pc = 0x334F5Cu;
    // 0x334f5c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x334f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x334f60: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x334f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x334f64: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x334F64u;
    SET_GPR_U32(ctx, 31, 0x334F6Cu);
    ctx->pc = 0x334F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F64u;
    // 0x334f68: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x334F64u, 0x334F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F6Cu;
label_334f6c:
    // 0x334f6c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x334F6Cu;
    {
        const bool branch_taken_0x334f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F6Cu;
        // 0x334f70: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f6c) {
            ctx->pc = 0x335010u;
            goto label_335010;
        }
    }
    ctx->pc = 0x334F74u;
    // 0x334f74: 0xc096cf8  jal         func_25B3E0
    ctx->pc = 0x334F74u;
    SET_GPR_U32(ctx, 31, 0x334F7Cu);
    ctx->pc = 0x334F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F74u;
    // 0x334f78: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B3E0u, 0x334F74u, 0x334F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F7Cu;
label_334f7c:
    // 0x334f7c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x334F7Cu;
    {
        const bool branch_taken_0x334f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F7Cu;
        // 0x334f80: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f7c) {
            ctx->pc = 0x335010u;
            goto label_335010;
        }
    }
    ctx->pc = 0x334F84u;
    // 0x334f84: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x334f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x334f88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x334f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x334f8c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x334f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x334f90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x334f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334f94: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x334f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x334f98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x334f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x334f9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x334f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x334fa0: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x334FA0u;
    SET_GPR_U32(ctx, 31, 0x334FA8u);
    ctx->pc = 0x334FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FA0u;
    // 0x334fa4: 0x24520550  addiu       $s2, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x334FA0u, 0x334FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FA8u;
label_334fa8:
    // 0x334fa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x334fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334fac: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x334facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x334fb0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x334fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x334fb4: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x334fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x334fb8: 0xc097340  jal         func_25CD00
    ctx->pc = 0x334FB8u;
    SET_GPR_U32(ctx, 31, 0x334FC0u);
    ctx->pc = 0x334FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FB8u;
    // 0x334fbc: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD00u, 0x334FB8u, 0x334FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FC0u;
label_334fc0:
    // 0x334fc0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x334fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x334fc4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x334fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x334fc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x334fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x334fcc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x334fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x334fd0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x334fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x334fd4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x334FD4u;
    SET_GPR_U32(ctx, 31, 0x334FDCu);
    ctx->pc = 0x334FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FD4u;
    // 0x334fd8: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x334FD4u, 0x334FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FDCu;
label_334fdc:
    // 0x334fdc: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x334fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x334fe0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x334fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x334fe4: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x334FE4u;
    SET_GPR_U32(ctx, 31, 0x334FECu);
    ctx->pc = 0x334FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FE4u;
    // 0x334fe8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x334FE4u, 0x334FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FECu;
label_334fec:
    // 0x334fec: 0x8e26085c  lw          $a2, 0x85C($s1)
    ctx->pc = 0x334fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2140)));
    // 0x334ff0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x334ff0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x334ff4: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x334ff4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x334ff8: 0xc0aadf8  jal         func_2AB7E0
    ctx->pc = 0x334FF8u;
    SET_GPR_U32(ctx, 31, 0x335000u);
    ctx->pc = 0x334FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FF8u;
    // 0x334ffc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB7E0u, 0x334FF8u, 0x335000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335000u;
label_335000:
    // 0x335000: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x335000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x335004: 0x92020731  lbu         $v0, 0x731($s0)
    ctx->pc = 0x335004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1841)));
    // 0x335008: 0xa2420046  sb          $v0, 0x46($s2)
    ctx->pc = 0x335008u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x33500c: 0xa6400044  sh          $zero, 0x44($s2)
    ctx->pc = 0x33500cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 68), (uint16_t)GPR_U32(ctx, 0));
label_335010:
    // 0x335010: 0x92020730  lbu         $v0, 0x730($s0)
    ctx->pc = 0x335010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1840)));
    // 0x335014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x335014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x335018: 0xa2020730  sb          $v0, 0x730($s0)
    ctx->pc = 0x335018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1840), (uint8_t)GPR_U32(ctx, 2));
    // 0x33501c: 0x0  nop
    ctx->pc = 0x33501cu;
    // NOP
label_335020:
    // 0x335020: 0xc0c0818  jal         func_302060
    ctx->pc = 0x335020u;
    SET_GPR_U32(ctx, 31, 0x335028u);
    ctx->pc = 0x335024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335020u;
    // 0x335024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x335020u, 0x335028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335028u;
label_335028:
    // 0x335028: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x335028u;
    {
        const bool branch_taken_0x335028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335028u;
        // 0x33502c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335028) {
            ctx->pc = 0x3350A0u;
            goto label_3350a0;
        }
    }
    ctx->pc = 0x335030u;
    // 0x335030: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x335030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335034: 0x0  nop
    ctx->pc = 0x335034u;
    // NOP
label_335038:
    // 0x335038: 0x86230594  lh          $v1, 0x594($s1)
    ctx->pc = 0x335038u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1428)));
    // 0x33503c: 0x28620012  slti        $v0, $v1, 0x12
    ctx->pc = 0x33503cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x335040: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x335040u;
    {
        const bool branch_taken_0x335040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335040u;
        // 0x335044: 0x28610074  slti        $at, $v1, 0x74 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)116) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335040) {
            ctx->pc = 0x335090u;
            goto label_335090;
        }
    }
    ctx->pc = 0x335048u;
    // 0x335048: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x335048u;
    {
        const bool branch_taken_0x335048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335048u;
        // 0x33504c: 0x28620041  slti        $v0, $v1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335048) {
            ctx->pc = 0x335090u;
            goto label_335090;
        }
    }
    ctx->pc = 0x335050u;
    // 0x335050: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x335050u;
    {
        const bool branch_taken_0x335050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335050) {
            ctx->pc = 0x335060u;
            goto label_335060;
        }
    }
    ctx->pc = 0x335058u;
    // 0x335058: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x335058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x33505c: 0xa2220596  sb          $v0, 0x596($s1)
    ctx->pc = 0x33505cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1430), (uint8_t)GPR_U32(ctx, 2));
label_335060:
    // 0x335060: 0xc096c80  jal         func_25B200
    ctx->pc = 0x335060u;
    SET_GPR_U32(ctx, 31, 0x335068u);
    ctx->pc = 0x335064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335060u;
    // 0x335064: 0x8e240590  lw          $a0, 0x590($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x335060u, 0x335068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335068u;
label_335068:
    // 0x335068: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x335068u;
    {
        const bool branch_taken_0x335068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335068) {
            ctx->pc = 0x335090u;
            goto label_335090;
        }
    }
    ctx->pc = 0x335070u;
    // 0x335070: 0x92260596  lbu         $a2, 0x596($s1)
    ctx->pc = 0x335070u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1430)));
    // 0x335074: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x335074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x335078: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x335078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33507c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33507cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335080: 0x26250550  addiu       $a1, $s1, 0x550
    ctx->pc = 0x335080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x335084: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x335084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335088: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x335088u;
    SET_GPR_U32(ctx, 31, 0x335090u);
    ctx->pc = 0x33508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335088u;
    // 0x33508c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x335088u, 0x335090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335090u;
label_335090:
    // 0x335090: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x335090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x335094: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x335094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x335098: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x335098u;
    {
        const bool branch_taken_0x335098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335098u;
        // 0x33509c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335098) {
            ctx->pc = 0x335038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335038;
        }
    }
    ctx->pc = 0x3350A0u;
label_3350a0:
    // 0x3350a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3350a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3350a4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3350a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3350a8:
    // 0x3350a8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3350A8u;
    SET_GPR_U32(ctx, 31, 0x3350B0u);
    ctx->pc = 0x3350ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3350A8u;
    // 0x3350ac: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3350A8u, 0x3350B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3350B0u;
label_3350b0:
    // 0x3350b0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3350B0u;
    {
        const bool branch_taken_0x3350b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3350b0) {
            ctx->pc = 0x335110u;
            goto label_335110;
        }
    }
    ctx->pc = 0x3350B8u;
    // 0x3350b8: 0x86440594  lh          $a0, 0x594($s2)
    ctx->pc = 0x3350b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x3350bc: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x3350bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x3350c0: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3350C0u;
    {
        const bool branch_taken_0x3350c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3350c0) {
            ctx->pc = 0x335100u;
            goto label_335100;
        }
    }
    ctx->pc = 0x3350C8u;
    // 0x3350c8: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3350c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3350cc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3350ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3350d0: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x3350d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x3350d4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3350d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3350d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3350d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3350dc: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x3350dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x3350e0: 0x26470580  addiu       $a3, $s2, 0x580
    ctx->pc = 0x3350e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x3350e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3350e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3350e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3350e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3350ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3350ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3350f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3350f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3350f4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3350F4u;
    SET_GPR_U32(ctx, 31, 0x3350FCu);
    ctx->pc = 0x3350F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3350F4u;
    // 0x3350f8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3350F4u, 0x3350FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3350FCu;
label_3350fc:
    // 0x3350fc: 0x0  nop
    ctx->pc = 0x3350fcu;
    // NOP
label_335100:
    // 0x335100: 0x86430594  lh          $v1, 0x594($s2)
    ctx->pc = 0x335100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x335104: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x335104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x335108: 0xa6430594  sh          $v1, 0x594($s2)
    ctx->pc = 0x335108u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1428), (uint16_t)GPR_U32(ctx, 3));
    // 0x33510c: 0x0  nop
    ctx->pc = 0x33510cu;
    // NOP
label_335110:
    // 0x335110: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x335110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x335114: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x335114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x335118: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x335118u;
    {
        const bool branch_taken_0x335118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335118u;
        // 0x33511c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335118) {
            ctx->pc = 0x3350A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3350a8;
        }
    }
    ctx->pc = 0x335120u;
    // 0x335120: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x335120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x335124: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x335124u;
    {
        const bool branch_taken_0x335124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x335124) {
            ctx->pc = 0x335198u;
            goto label_335198;
        }
    }
    ctx->pc = 0x33512Cu;
    // 0x33512c: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x33512cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x335130: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x335130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x335134: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335138: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x335138u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33513c: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x33513cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x335140: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x335140u;
    {
        const bool branch_taken_0x335140 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x335140) {
            ctx->pc = 0x335178u;
            goto label_335178;
        }
    }
    ctx->pc = 0x335148u;
    // 0x335148: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x335148u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x33514c: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x33514cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x335150: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x335150u;
    {
        const bool branch_taken_0x335150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335150u;
        // 0x335154: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335150) {
            ctx->pc = 0x335198u;
            goto label_335198;
        }
    }
    ctx->pc = 0x335158u;
    // 0x335158: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33515c: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x33515cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x335160: 0x0  nop
    ctx->pc = 0x335160u;
    // NOP
    // 0x335164: 0x0  nop
    ctx->pc = 0x335164u;
    // NOP
    // 0x335168: 0x2010  mfhi        $a0
    ctx->pc = 0x335168u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x33516c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x33516cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x335170: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x335170u;
    {
        const bool branch_taken_0x335170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335170u;
        // 0x335174: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335170) {
            ctx->pc = 0x335198u;
            goto label_335198;
        }
    }
    ctx->pc = 0x335178u;
label_335178:
    // 0x335178: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x335178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x33517c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x33517cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x335180: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x335180u;
    {
        const bool branch_taken_0x335180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x335180) {
            ctx->pc = 0x335198u;
            goto label_335198;
        }
    }
    ctx->pc = 0x335188u;
    // 0x335188: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x335188u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33518c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33518cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335190: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x335190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x335194: 0x0  nop
    ctx->pc = 0x335194u;
    // NOP
label_335198:
    // 0x335198: 0x92030730  lbu         $v1, 0x730($s0)
    ctx->pc = 0x335198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1840)));
    // 0x33519c: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x33519cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3351a0: 0x14600089  bnez        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x3351A0u;
    {
        const bool branch_taken_0x3351a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3351a0) {
            ctx->pc = 0x3353C8u;
            goto label_3353c8;
        }
    }
    ctx->pc = 0x3351A8u;
    // 0x3351a8: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3351a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3351ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3351acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3351b0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x3351B0u;
    {
        const bool branch_taken_0x3351b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3351B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3351B0u;
        // 0x3351b4: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3351b0) {
            ctx->pc = 0x3353C8u;
            goto label_3353c8;
        }
    }
    ctx->pc = 0x3351B8u;
label_3351b8:
    // 0x3351b8: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3351b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3351bc: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3351bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3351c0: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3351c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3351c4: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3351c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3351c8: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3351c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3351cc: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3351ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3351d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3351d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3351d4: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3351d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3351d8:
    // 0x3351d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3351d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3351dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3351dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3351e0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3351e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3351e4: 0x0  nop
    ctx->pc = 0x3351e4u;
    // NOP
label_3351e8:
    // 0x3351e8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3351E8u;
    SET_GPR_U32(ctx, 31, 0x3351F0u);
    ctx->pc = 0x3351ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3351E8u;
    // 0x3351ec: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3351E8u, 0x3351F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3351F0u;
label_3351f0:
    // 0x3351f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3351F0u;
    {
        const bool branch_taken_0x3351f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3351f0) {
            ctx->pc = 0x335200u;
            goto label_335200;
        }
    }
    ctx->pc = 0x3351F8u;
    // 0x3351f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3351f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3351fc: 0x0  nop
    ctx->pc = 0x3351fcu;
    // NOP
label_335200:
    // 0x335200: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x335200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x335204: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x335204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x335208: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x335208u;
    {
        const bool branch_taken_0x335208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335208u;
        // 0x33520c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335208) {
            ctx->pc = 0x3351E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3351e8;
        }
    }
    ctx->pc = 0x335210u;
    // 0x335210: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x335210u;
    {
        const bool branch_taken_0x335210 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x335214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335210u;
        // 0x335214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335210) {
            ctx->pc = 0x335220u;
            goto label_335220;
        }
    }
    ctx->pc = 0x335218u;
    // 0x335218: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x335218u;
    SET_GPR_U32(ctx, 31, 0x335220u);
    ctx->pc = 0x33521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335218u;
    // 0x33521c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x335218u, 0x335220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335220u;
label_335220:
    // 0x335220: 0xc0c0818  jal         func_302060
    ctx->pc = 0x335220u;
    SET_GPR_U32(ctx, 31, 0x335228u);
    ctx->pc = 0x335224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335220u;
    // 0x335224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x335220u, 0x335228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335228u;
label_335228:
    // 0x335228: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x335228u;
    {
        const bool branch_taken_0x335228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335228u;
        // 0x33522c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335228) {
            ctx->pc = 0x3352A0u;
            goto label_3352a0;
        }
    }
    ctx->pc = 0x335230u;
    // 0x335230: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x335230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335234: 0x0  nop
    ctx->pc = 0x335234u;
    // NOP
label_335238:
    // 0x335238: 0x86430594  lh          $v1, 0x594($s2)
    ctx->pc = 0x335238u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x33523c: 0x28620012  slti        $v0, $v1, 0x12
    ctx->pc = 0x33523cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x335240: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x335240u;
    {
        const bool branch_taken_0x335240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335240u;
        // 0x335244: 0x28610074  slti        $at, $v1, 0x74 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)116) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335240) {
            ctx->pc = 0x335290u;
            goto label_335290;
        }
    }
    ctx->pc = 0x335248u;
    // 0x335248: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x335248u;
    {
        const bool branch_taken_0x335248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335248u;
        // 0x33524c: 0x28620041  slti        $v0, $v1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335248) {
            ctx->pc = 0x335290u;
            goto label_335290;
        }
    }
    ctx->pc = 0x335250u;
    // 0x335250: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x335250u;
    {
        const bool branch_taken_0x335250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335250) {
            ctx->pc = 0x335260u;
            goto label_335260;
        }
    }
    ctx->pc = 0x335258u;
    // 0x335258: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x335258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x33525c: 0xa2420596  sb          $v0, 0x596($s2)
    ctx->pc = 0x33525cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1430), (uint8_t)GPR_U32(ctx, 2));
label_335260:
    // 0x335260: 0xc096c80  jal         func_25B200
    ctx->pc = 0x335260u;
    SET_GPR_U32(ctx, 31, 0x335268u);
    ctx->pc = 0x335264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335260u;
    // 0x335264: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x335260u, 0x335268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335268u;
label_335268:
    // 0x335268: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x335268u;
    {
        const bool branch_taken_0x335268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335268) {
            ctx->pc = 0x335290u;
            goto label_335290;
        }
    }
    ctx->pc = 0x335270u;
    // 0x335270: 0x92460596  lbu         $a2, 0x596($s2)
    ctx->pc = 0x335270u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1430)));
    // 0x335274: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x335274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x335278: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x335278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33527c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33527cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335280: 0x26450550  addiu       $a1, $s2, 0x550
    ctx->pc = 0x335280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x335284: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x335284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335288: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x335288u;
    SET_GPR_U32(ctx, 31, 0x335290u);
    ctx->pc = 0x33528Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335288u;
    // 0x33528c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x335288u, 0x335290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335290u;
label_335290:
    // 0x335290: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x335290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x335294: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x335294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x335298: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x335298u;
    {
        const bool branch_taken_0x335298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335298u;
        // 0x33529c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335298) {
            ctx->pc = 0x335238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335238;
        }
    }
    ctx->pc = 0x3352A0u;
label_3352a0:
    // 0x3352a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3352a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3352a4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3352a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3352a8:
    // 0x3352a8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3352A8u;
    SET_GPR_U32(ctx, 31, 0x3352B0u);
    ctx->pc = 0x3352ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3352A8u;
    // 0x3352ac: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3352A8u, 0x3352B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3352B0u;
label_3352b0:
    // 0x3352b0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3352B0u;
    {
        const bool branch_taken_0x3352b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3352b0) {
            ctx->pc = 0x335310u;
            goto label_335310;
        }
    }
    ctx->pc = 0x3352B8u;
    // 0x3352b8: 0x86440594  lh          $a0, 0x594($s2)
    ctx->pc = 0x3352b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x3352bc: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x3352bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x3352c0: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3352C0u;
    {
        const bool branch_taken_0x3352c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3352c0) {
            ctx->pc = 0x335300u;
            goto label_335300;
        }
    }
    ctx->pc = 0x3352C8u;
    // 0x3352c8: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3352c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3352cc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3352ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3352d0: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x3352d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x3352d4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3352d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3352d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3352d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3352dc: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x3352dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x3352e0: 0x26470580  addiu       $a3, $s2, 0x580
    ctx->pc = 0x3352e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x3352e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3352e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3352e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3352e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3352ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3352ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3352f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3352f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3352f4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3352F4u;
    SET_GPR_U32(ctx, 31, 0x3352FCu);
    ctx->pc = 0x3352F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3352F4u;
    // 0x3352f8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3352F4u, 0x3352FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3352FCu;
label_3352fc:
    // 0x3352fc: 0x0  nop
    ctx->pc = 0x3352fcu;
    // NOP
label_335300:
    // 0x335300: 0x86430594  lh          $v1, 0x594($s2)
    ctx->pc = 0x335300u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x335304: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x335304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x335308: 0xa6430594  sh          $v1, 0x594($s2)
    ctx->pc = 0x335308u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1428), (uint16_t)GPR_U32(ctx, 3));
    // 0x33530c: 0x0  nop
    ctx->pc = 0x33530cu;
    // NOP
label_335310:
    // 0x335310: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x335310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x335314: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x335314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x335318: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x335318u;
    {
        const bool branch_taken_0x335318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335318u;
        // 0x33531c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335318) {
            ctx->pc = 0x3352A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3352a8;
        }
    }
    ctx->pc = 0x335320u;
    // 0x335320: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x335320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x335324: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x335324u;
    {
        const bool branch_taken_0x335324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x335328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335324u;
        // 0x335328: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335324) {
            ctx->pc = 0x335338u;
            goto label_335338;
        }
    }
    ctx->pc = 0x33532Cu;
    // 0x33532c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x33532Cu;
    {
        const bool branch_taken_0x33532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33532c) {
            ctx->pc = 0x3353B8u;
            goto label_3353b8;
        }
    }
    ctx->pc = 0x335334u;
    // 0x335334: 0x0  nop
    ctx->pc = 0x335334u;
    // NOP
label_335338:
    // 0x335338: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x335338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x33533c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x33533cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x335340: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335344: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x335344u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x335348: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x335348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x33534c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x33534Cu;
    {
        const bool branch_taken_0x33534c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33534c) {
            ctx->pc = 0x335388u;
            goto label_335388;
        }
    }
    ctx->pc = 0x335354u;
    // 0x335354: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x335354u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x335358: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x335358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x33535c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33535Cu;
    {
        const bool branch_taken_0x33535c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33535Cu;
        // 0x335360: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33535c) {
            ctx->pc = 0x3353B0u;
            goto label_3353b0;
        }
    }
    ctx->pc = 0x335364u;
    // 0x335364: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335368: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x335368u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33536c: 0x0  nop
    ctx->pc = 0x33536cu;
    // NOP
    // 0x335370: 0x0  nop
    ctx->pc = 0x335370u;
    // NOP
    // 0x335374: 0x2010  mfhi        $a0
    ctx->pc = 0x335374u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x335378: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x335378u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33537c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33537Cu;
    {
        const bool branch_taken_0x33537c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33537Cu;
        // 0x335380: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33537c) {
            ctx->pc = 0x3353B0u;
            goto label_3353b0;
        }
    }
    ctx->pc = 0x335384u;
    // 0x335384: 0x0  nop
    ctx->pc = 0x335384u;
    // NOP
label_335388:
    // 0x335388: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x335388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x33538c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x33538cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x335390: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x335390u;
    {
        const bool branch_taken_0x335390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x335390) {
            ctx->pc = 0x3353B0u;
            goto label_3353b0;
        }
    }
    ctx->pc = 0x335398u;
    // 0x335398: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x335398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33539c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3353a0: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3353a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3353a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3353A4u;
    {
        const bool branch_taken_0x3353a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3353A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3353A4u;
        // 0x3353a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3353a4) {
            ctx->pc = 0x3353B8u;
            goto label_3353b8;
        }
    }
    ctx->pc = 0x3353ACu;
    // 0x3353ac: 0x0  nop
    ctx->pc = 0x3353acu;
    // NOP
label_3353b0:
    // 0x3353b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3353b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3353b4: 0x0  nop
    ctx->pc = 0x3353b4u;
    // NOP
label_3353b8:
    // 0x3353b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3353B8u;
    {
        const bool branch_taken_0x3353b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3353BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3353B8u;
        // 0x3353bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3353b8) {
            ctx->pc = 0x3353C8u;
            goto label_3353c8;
        }
    }
    ctx->pc = 0x3353C0u;
    // 0x3353c0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3353C0u;
    SET_GPR_U32(ctx, 31, 0x3353C8u);
    ctx->pc = 0x3353C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3353C0u;
    // 0x3353c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3353C0u, 0x3353C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3353C8u;
label_3353c8:
    // 0x3353c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3353c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3353cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3353ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3353d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3353d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3353d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3353d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3353d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3353d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3353dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3353DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3353E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3353DCu;
        // 0x3353e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3353DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3353E4u;
}
