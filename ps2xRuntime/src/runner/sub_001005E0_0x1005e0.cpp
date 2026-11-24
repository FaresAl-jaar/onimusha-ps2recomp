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

// Function: sub_001005E0
// Address: 0x1005e0 - 0x100858
void sub_001005E0_0x1005e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001005E0_0x1005e0");
#endif

    switch (ctx->pc) {
        case 0x1006c0u: goto label_1006c0;
        case 0x1006e8u: goto label_1006e8;
        case 0x100720u: goto label_100720;
        case 0x100740u: goto label_100740;
        case 0x100778u: goto label_100778;
        case 0x100820u: goto label_100820;
        default: break;
    }

    ctx->pc = 0x1005e0u;

    // 0x1005e0: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x1005e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
    // 0x1005e4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1005E4u;
    {
        const bool branch_taken_0x1005e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1005E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005E4u;
        // 0x1005e8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005e4) {
            ctx->pc = 0x1005F8u;
            goto label_1005f8;
        }
    }
    ctx->pc = 0x1005ECu;
    // 0x1005ec: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1005ECu;
    {
        const bool branch_taken_0x1005ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1005F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005ECu;
        // 0x1005f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005ec) {
            ctx->pc = 0x100850u;
            goto label_100850;
        }
    }
    ctx->pc = 0x1005F4u;
    // 0x1005f4: 0x0  nop
    ctx->pc = 0x1005f4u;
    // NOP
label_1005f8:
    // 0x1005f8: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1005f8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1005fc: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1005fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x100600: 0x14e3001b  bne         $a3, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x100600u;
    {
        const bool branch_taken_0x100600 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x100600) {
            ctx->pc = 0x100670u;
            goto label_100670;
        }
    }
    ctx->pc = 0x100608u;
    // 0x100608: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10060c: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x10060cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x100610: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x100610u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100614: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x100614u;
    {
        const bool branch_taken_0x100614 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x100614) {
            ctx->pc = 0x100620u;
            goto label_100620;
        }
    }
    ctx->pc = 0x10061Cu;
    // 0x10061c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10061cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_100620:
    // 0x100620: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x100620u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100624: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x100624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x100628: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100628u;
    {
        const bool branch_taken_0x100628 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x100628) {
            ctx->pc = 0x100638u;
            goto label_100638;
        }
    }
    ctx->pc = 0x100630u;
    // 0x100630: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x100634: 0x0  nop
    ctx->pc = 0x100634u;
    // NOP
label_100638:
    // 0x100638: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x100638u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10063c: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x10063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x100640: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x100640u;
    {
        const bool branch_taken_0x100640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x100640) {
            ctx->pc = 0x100668u;
            goto label_100668;
        }
    }
    ctx->pc = 0x100648u;
    // 0x100648: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x100648u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10064c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x10064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x100650: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100650u;
    {
        const bool branch_taken_0x100650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x100654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100650u;
        // 0x100654: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100650) {
            ctx->pc = 0x100660u;
            goto label_100660;
        }
    }
    ctx->pc = 0x100658u;
    // 0x100658: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100658u;
    {
        const bool branch_taken_0x100658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x100658) {
            ctx->pc = 0x100668u;
            goto label_100668;
        }
    }
    ctx->pc = 0x100660u;
label_100660:
    // 0x100660: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x100660u;
    {
        const bool branch_taken_0x100660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100660u;
        // 0x100664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100660) {
            ctx->pc = 0x100850u;
            goto label_100850;
        }
    }
    ctx->pc = 0x100668u;
label_100668:
    // 0x100668: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x100668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10066c: 0x0  nop
    ctx->pc = 0x10066cu;
    // NOP
label_100670:
    // 0x100670: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x100670u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100674: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x100674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x100678: 0x10e30009  beq         $a3, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x100678u;
    {
        const bool branch_taken_0x100678 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x10067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100678u;
        // 0x10067c: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100678) {
            ctx->pc = 0x1006A0u;
            goto label_1006a0;
        }
    }
    ctx->pc = 0x100680u;
    // 0x100680: 0x10e30007  beq         $a3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x100680u;
    {
        const bool branch_taken_0x100680 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x100680) {
            ctx->pc = 0x1006A0u;
            goto label_1006a0;
        }
    }
    ctx->pc = 0x100688u;
    // 0x100688: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x100688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x10068c: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x10068cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x100690: 0x24070056  addiu       $a3, $zero, 0x56
    ctx->pc = 0x100690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x100694: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x100694u;
    {
        const bool branch_taken_0x100694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100694u;
        // 0x100698: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100694) {
            ctx->pc = 0x1007F0u;
            goto label_1007f0;
        }
    }
    ctx->pc = 0x10069Cu;
    // 0x10069c: 0x0  nop
    ctx->pc = 0x10069cu;
    // NOP
label_1006a0:
    // 0x1006a0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1006a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1006a4: 0x80670000  lb          $a3, 0x0($v1)
    ctx->pc = 0x1006a4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1006a8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1006a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1006ac: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1006acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1006b0: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1006B0u;
    {
        const bool branch_taken_0x1006b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1006B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006B0u;
        // 0x1006b4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006b0) {
            ctx->pc = 0x1006C0u;
            goto label_1006c0;
        }
    }
    ctx->pc = 0x1006B8u;
    // 0x1006b8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1006B8u;
    {
        const bool branch_taken_0x1006b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1006BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006B8u;
        // 0x1006bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006b8) {
            ctx->pc = 0x100850u;
            goto label_100850;
        }
    }
    ctx->pc = 0x1006C0u;
label_1006c0:
    // 0x1006c0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1006c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1006c4: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x1006c4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1006c8: 0x15030015  bne         $t0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1006C8u;
    {
        const bool branch_taken_0x1006c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x1006CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006C8u;
        // 0x1006cc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006c8) {
            ctx->pc = 0x100720u;
            goto label_100720;
        }
    }
    ctx->pc = 0x1006D0u;
    // 0x1006d0: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x1006d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1006d4: 0x1507fffa  bne         $t0, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1006D4u;
    {
        const bool branch_taken_0x1006d4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x1006D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006D4u;
        // 0x1006d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006d4) {
            ctx->pc = 0x1006C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1006c0;
        }
    }
    ctx->pc = 0x1006DCu;
    // 0x1006dc: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x1006dcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1006e0: 0x10a7000b  beq         $a1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1006E0u;
    {
        const bool branch_taken_0x1006e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x1006E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006E0u;
        // 0x1006e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006e0) {
            ctx->pc = 0x100710u;
            goto label_100710;
        }
    }
    ctx->pc = 0x1006E8u;
label_1006e8:
    // 0x1006e8: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x1006e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1006ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1006ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1006f0: 0x810b8  dsll        $v0, $t0, 2
    ctx->pc = 0x1006f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 2);
    // 0x1006f4: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x1006f4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1006f8: 0x48102d  daddu       $v0, $v0, $t0
    ctx->pc = 0x1006f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 8));
    // 0x1006fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1006fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x100700: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x100700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x100704: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x100704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x100708: 0x14a7fff7  bne         $a1, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x100708u;
    {
        const bool branch_taken_0x100708 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x10070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100708u;
        // 0x10070c: 0x6448ffd0  daddiu      $t0, $v0, -0x30 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100708) {
            ctx->pc = 0x1006E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1006e8;
        }
    }
    ctx->pc = 0x100710u;
label_100710:
    // 0x100710: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x100710u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x100714: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x100714u;
    {
        const bool branch_taken_0x100714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100714u;
        // 0x100718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100714) {
            ctx->pc = 0x100850u;
            goto label_100850;
        }
    }
    ctx->pc = 0x10071Cu;
    // 0x10071c: 0x0  nop
    ctx->pc = 0x10071cu;
    // NOP
label_100720:
    // 0x100720: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x100720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100724: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x100724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x100728: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x100728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x10072c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x10072cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100730: 0x0  nop
    ctx->pc = 0x100730u;
    // NOP
    // 0x100734: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x100734u;
    {
        const bool branch_taken_0x100734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x100734) {
            ctx->pc = 0x100720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100720;
        }
    }
    ctx->pc = 0x10073Cu;
    // 0x10073c: 0x0  nop
    ctx->pc = 0x10073cu;
    // NOP
label_100740:
    // 0x100740: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x100740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100744: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x100744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x100748: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x100748u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10074c: 0x0  nop
    ctx->pc = 0x10074cu;
    // NOP
    // 0x100750: 0x0  nop
    ctx->pc = 0x100750u;
    // NOP
    // 0x100754: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x100754u;
    {
        const bool branch_taken_0x100754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x100754) {
            ctx->pc = 0x100740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100740;
        }
    }
    ctx->pc = 0x10075Cu;
    // 0x10075c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x10075cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100760: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100760u;
    {
        const bool branch_taken_0x100760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100760u;
        // 0x100764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100760) {
            ctx->pc = 0x100770u;
            goto label_100770;
        }
    }
    ctx->pc = 0x100768u;
    // 0x100768: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x100768u;
    {
        const bool branch_taken_0x100768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100768) {
            ctx->pc = 0x100850u;
            goto label_100850;
        }
    }
    ctx->pc = 0x100770u;
label_100770:
    // 0x100770: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x100770u;
    {
        const bool branch_taken_0x100770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100770u;
        // 0x100774: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100770) {
            ctx->pc = 0x1006C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1006c0;
        }
    }
    ctx->pc = 0x100778u;
label_100778:
    // 0x100778: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10077c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x10077cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100780: 0x14690007  bne         $v1, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x100780u;
    {
        const bool branch_taken_0x100780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x100784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100780u;
        // 0x100784: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100780) {
            ctx->pc = 0x1007A0u;
            goto label_1007a0;
        }
    }
    ctx->pc = 0x100788u;
    // 0x100788: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x100788u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10078c: 0x14690002  bne         $v1, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10078Cu;
    {
        const bool branch_taken_0x10078c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x10078c) {
            ctx->pc = 0x100798u;
            goto label_100798;
        }
    }
    ctx->pc = 0x100794u;
    // 0x100794: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x100794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_100798:
    // 0x100798: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10079c: 0x0  nop
    ctx->pc = 0x10079cu;
    // NOP
label_1007a0:
    // 0x1007a0: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x1007a0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1007a4: 0x15090004  bne         $t0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1007A4u;
    {
        const bool branch_taken_0x1007a4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        if (branch_taken_0x1007a4) {
            ctx->pc = 0x1007B8u;
            goto label_1007b8;
        }
    }
    ctx->pc = 0x1007ACu;
    // 0x1007ac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1007ACu;
    {
        const bool branch_taken_0x1007ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1007B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007ACu;
        // 0x1007b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007ac) {
            ctx->pc = 0x100850u;
            goto label_100850;
        }
    }
    ctx->pc = 0x1007B4u;
    // 0x1007b4: 0x0  nop
    ctx->pc = 0x1007b4u;
    // NOP
label_1007b8:
    // 0x1007b8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1007b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1007bc: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1007BCu;
    {
        const bool branch_taken_0x1007bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1007bc) {
            ctx->pc = 0x1007D8u;
            goto label_1007d8;
        }
    }
    ctx->pc = 0x1007C4u;
    // 0x1007c4: 0x15070002  bne         $t0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1007C4u;
    {
        const bool branch_taken_0x1007c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1007c4) {
            ctx->pc = 0x1007D0u;
            goto label_1007d0;
        }
    }
    ctx->pc = 0x1007CCu;
    // 0x1007cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1007ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1007d0:
    // 0x1007d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1007d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1007d4: 0x0  nop
    ctx->pc = 0x1007d4u;
    // NOP
label_1007d8:
    // 0x1007d8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1007d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1007dc: 0x14670004  bne         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1007DCu;
    {
        const bool branch_taken_0x1007dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1007dc) {
            ctx->pc = 0x1007F0u;
            goto label_1007f0;
        }
    }
    ctx->pc = 0x1007E4u;
    // 0x1007e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1007E4u;
    {
        const bool branch_taken_0x1007e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1007E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007E4u;
        // 0x1007e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007e4) {
            ctx->pc = 0x100850u;
            goto label_100850;
        }
    }
    ctx->pc = 0x1007ECu;
    // 0x1007ec: 0x0  nop
    ctx->pc = 0x1007ecu;
    // NOP
label_1007f0:
    // 0x1007f0: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x1007f0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1007f4: 0x11060004  beq         $t0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1007F4u;
    {
        const bool branch_taken_0x1007f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x1007f4) {
            ctx->pc = 0x100808u;
            goto label_100808;
        }
    }
    ctx->pc = 0x1007FCu;
    // 0x1007fc: 0x1505000e  bne         $t0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1007FCu;
    {
        const bool branch_taken_0x1007fc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x1007fc) {
            ctx->pc = 0x100838u;
            goto label_100838;
        }
    }
    ctx->pc = 0x100804u;
    // 0x100804: 0x0  nop
    ctx->pc = 0x100804u;
    // NOP
label_100808:
    // 0x100808: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x100808u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10080c: 0x1103ffda  beq         $t0, $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x10080Cu;
    {
        const bool branch_taken_0x10080c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x10080c) {
            ctx->pc = 0x100778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100778;
        }
    }
    ctx->pc = 0x100814u;
    // 0x100814: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x100814u;
    {
        const bool branch_taken_0x100814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100814) {
            ctx->pc = 0x100838u;
            goto label_100838;
        }
    }
    ctx->pc = 0x10081Cu;
    // 0x10081c: 0x0  nop
    ctx->pc = 0x10081cu;
    // NOP
label_100820:
    // 0x100820: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100820u;
    {
        const bool branch_taken_0x100820 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x100820) {
            ctx->pc = 0x100830u;
            goto label_100830;
        }
    }
    ctx->pc = 0x100828u;
    // 0x100828: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x100828u;
    {
        const bool branch_taken_0x100828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100828u;
        // 0x10082c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100828) {
            ctx->pc = 0x100850u;
            goto label_100850;
        }
    }
    ctx->pc = 0x100830u;
label_100830:
    // 0x100830: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x100830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x100834: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_100838:
    // 0x100838: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x100838u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10083c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x10083cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100840: 0x10a3fff7  beq         $a1, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x100840u;
    {
        const bool branch_taken_0x100840 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x100840) {
            ctx->pc = 0x100820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100820;
        }
    }
    ctx->pc = 0x100848u;
    // 0x100848: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10084c: 0x0  nop
    ctx->pc = 0x10084cu;
    // NOP
label_100850:
    // 0x100850: 0x3e00008  jr          $ra
    ctx->pc = 0x100850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100858u;
}
